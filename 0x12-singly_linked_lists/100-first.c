#include "lists.h"

/**
 * before_main - prints a string before the main function.
 *
 */
__attribute__((constructor))void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
