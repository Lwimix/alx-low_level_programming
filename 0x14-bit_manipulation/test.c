#include <stdio.h>
#include <fcntl.h>

int main(void)
{
	printf("%d\n", O_RDWR);
	printf("%d\n", O_RDONLY);
	printf("%d\n", O_CREAT);
	return (0);
}
