#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4 - i; j++)
			printf(" ");

		for (j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}