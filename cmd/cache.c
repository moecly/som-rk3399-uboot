/*
 * (C) Copyright 2000
 * Wolfgang Denk, DENX Software Engineering, wd@denx.de.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

/*
 * Cache support: switch on or off, get status
 */
#include <common.h>
#include <command.h>
#include <linux/compiler.h>

static int parse_argv(const char *);

void __weak invalidate_icache_all(void)
{
	/* please define arch specific invalidate_icache_all */
	puts("No arch specific invalidate_icache_all available!\n");
}

static int do_icache(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	switch (argc) {
	case 2:			/* on / off	*/
		switch (parse_argv(argv[1])) {
		case 0:
			icache_disable();
			break;
		case 1:
			icache_enable();
			break;
		case 2:
			invalidate_icache_all();
			break;
		}
		break;
	case 1:			/* get status */
		printf("Instruction Cache is %s\n",
			icache_status() ? "ON" : "OFF");
		return 0;
	default:
		return CMD_RET_USAGE;
	}
	return 0;
}

void __weak flush_dcache_all(void)
{
	puts("No arch specific flush_dcache_all available!\n");
	/* please define arch specific flush_dcache_all */
}

static int do_dcache(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	ulong start, size;

	switch (argc) {
	case 4:
		start = simple_strtoul(argv[2], NULL, 16);
		size = simple_strtoul(argv[3], NULL, 16);

		switch (parse_argv(argv[1])) {
		case 2:
			printf("flush dcache: 0x%08lx - 0x%08lx\n", start, start + size);
			flush_dcache_range(start, start + size);
			break;
		case 3:
			printf("invalidate dcache: 0x%08lx - 0x%08lx\n", start, start + size);
			invalidate_dcache_range(start, start + size);
			break;
		}
		break;
	case 2:			/* on / off */
		switch (parse_argv(argv[1])) {
		case 0:
			dcache_disable();
			break;
		case 1:
			dcache_enable();
			break;
		case 2:
			flush_dcache_all();
			break;
		case 3:
			printf("error: dcache invalidate require [start] [size]\n");
			break;
		}
		break;
	case 1:			/* get status */
		printf("Data (writethrough) Cache is %s\n",
			dcache_status() ? "ON" : "OFF");
		return 0;
	default:
		return CMD_RET_USAGE;
	}
	return 0;
}

static int parse_argv(const char *s)
{
	if (strcmp(s, "invalidate") == 0)
		return 3;
	else if (strcmp(s, "flush") == 0)
		return 2;
	else if (strcmp(s, "on") == 0)
		return 1;
	else if (strcmp(s, "off") == 0)
		return 0;

	return -1;
}


U_BOOT_CMD(
	icache,   2,   1,     do_icache,
	"enable or disable instruction cache",
	"[on, off, flush]\n"
	"    - enable, disable, or flush instruction cache"
);

U_BOOT_CMD(
	dcache,   4,   1,     do_dcache,
	"enable or disable data cache",
	"[on, off, flush, invalidate] [start] [size]\n"
	"    - enable, disable, or flush data (writethrough) cache"
);
