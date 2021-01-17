#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, ("rus"));
	int number;
	printf("Введите число: ");
	scanf_s("%d", &number);

	if (((number / 100) != 0) || (number<=0))
	{
		printf("Введите двузначное положительное число");
	}
	else
	{
		printf("-Данное число является четным двузначным.\n");
		if (((number % 2) == 0) && ((number / 100) == 0)) // проверка на четность и на количество разрядов в числе
		{
			printf("-Естественно.");
		}
		else
		{
			printf("-Конечно нет!");
		}
	}

	return 0;
}

