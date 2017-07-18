#include<stdio.h>
#include<stdlib.h>

int main()

{
	int good = 0;
	int not_good = 0;
	

	for (int i = 0; i <= 10; i++) 
	{
		int result = 0;
		int chislo1 = rand() % 10 + 1;
		int chislo2 = rand() % 10 + 1;
		printf("\nEnter answer for: %d*%d=\n", chislo1, chislo2);
		scanf_s("%d", &result);
		if (chislo1*chislo2 == result) 
		{
			good++;
		}
		else 
		{
			not_good++;
		}
		
	}
	printf("\nTrue answer(s): %d\nFalse answer(s): %d\n", good, not_good);
	system("pause");
	return 0;
}