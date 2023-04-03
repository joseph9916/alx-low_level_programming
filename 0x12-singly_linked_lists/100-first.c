#include <stdio.h>
#include "lists.h"

/**
 * print_before_main - Prints a string befor main is executed
 */

__attribute__((constructor))void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
