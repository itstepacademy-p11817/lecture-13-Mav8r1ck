#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 0; //lines
	int i = 0;
	int line = 0;
	printf("Enter number of lines :\n");
	scanf_s("%d", &a);
	
	for (line; line < a/2; line++)
	{
		for (int position = 0; position <= a; position++)
		{

				if (position >= a/2-i&&position<=a/2+i)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
		}
		printf("\n");
		i++;
		
	}

	for (line; line < a; line++)
	{	
		i--;
		for (int position = 0; position <= a; position++)
		{

			if (position > a/2 - i&&position < a/2 + i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}