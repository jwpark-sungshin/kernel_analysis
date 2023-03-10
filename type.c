/**
	M: JaeJoon Jung <rgbi3307@nate.com>
	W: https://www.kernel.bz
	F: data/type01.c
	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License
*/

#include <stdio.h>
#include <stdlib.h>

typedef char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

typedef long s64_;
typedef unsigned long u64_;
typedef long long s64;
typedef unsigned long long u64;

int main()
{

	printf(" s8 = %lu bytes\n", sizeof(s8));
	printf(" u8 = %lu bytes\n", sizeof(u8));
	printf("s16 = %lu bytes\n", sizeof(s16));
	printf("u16 = %lu bytes\n", sizeof(u16));
	printf("s32 = %lu bytes\n", sizeof(s32));
	printf("u32 = %lu bytes\n", sizeof(u32));

	printf("s64_= %lu bytes\n", sizeof(s64_));
	printf("u64_= %lu bytes\n", sizeof(u64_));
	printf("s64 = %lu bytes\n", sizeof(s64));
	printf("u64 = %lu bytes\n", sizeof(u64));
	return 0;
}
