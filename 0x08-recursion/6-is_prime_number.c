/**
 *
 * is_prime_recursive - helper function that recursively determines 
 * whether a number is prime
 * @n: number to check
 * @i: current integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_recursive(int n, int i)
{
	if (n < 2)
	{
		return 0;
	}
	else if (i == n)
	{
		return 1;
	}
	else if (n % i == 0)
	{
		return 0;
	}
	else
	{
		return is_prime_recursive(n, i + 1);
	}
}

/**
 * is_prime_number - determines whether an input integer is prime
 *  @n: number to check
 *
 *  Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return is_prime_recursive(n, 2);
}

