#include <stdio.h>
#ifndef MAIN_H
#define MAIN_H

int main(int argc, char *argv[]);

#endif
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: the arguments themselves
 *
 * Return: 0 for SUCCESS
 */
int main(int __attribute__((unused))argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
