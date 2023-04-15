/**
 * err_98_print - print error 98 for file not exist or can't read
 * @file: file accessed
 *
 * Return: nothing
 */
void err_98_print(char *file)
{
		dprintf(2, "Can't read from file %s\n", file);
		exit(98);
}
