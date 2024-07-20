#include <stdio.h>

unsigned int countSetBits(unsigned int n);

int main()
{
    int i;

    printf("Enter any number: ");
    scanf("%d", &i);

    printf("%d", countSetBits(i));
    return 0;
}

unsigned int countSetBits(unsigned int n)
{
	unsigned int count = 0;
	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return count;
}
