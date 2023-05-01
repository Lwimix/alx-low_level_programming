
/**
 * err_100_print - print error 100 for unable to close
 * @closer: fd value
 *
 * Return: nothing
 */
void err_100_print(int closer)
{
	dprintf(2, "Error can't close fd %d", closer);
	exit(100);
}
