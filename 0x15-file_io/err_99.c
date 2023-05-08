/**
 * err_99_print - print error 99 for unable to write
 * @file: file accessed
 *
 * Return: nothing
 */
void err_99_print(char *file)
{
	dprintf(2, "Error: Can't write to %s\n", file);
	exit(99);
}
