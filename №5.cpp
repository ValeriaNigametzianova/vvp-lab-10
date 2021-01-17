#include<stdio.h>
#include<locale.h>
int r = 0;

int main()
{
	setlocale(LC_ALL, ("rus"));
	int number;
	printf("Введите число: ");
	scanf_s("%d", &number);

	if (((number / 1000 % 100) == 0) || (number / 10000 != 0)) // проверяем, есть ли разряд тысяч и отсутстуют ли более старшие разряды 
	{
		printf("Введите четырёхзначное число");
	}
	else 
	{
		printf("	Данное число читается одинаково слева направо и справа налево\n");
		int thousends = number / 1000;  // цифра тысяч, стоящая на первом месте
		int hundreds = number / 100 % 10; // цифра сотен, стоящая на втором месте числа
		int tens = number % 100 / 10; // цифра десятков, стоящая на третьем месте числа
		int ones = number % 10; // цифра единиц, стоящая на последнем месте числа

		if ((thousends == ones )&& (hundreds == tens)) // проверяем, одинаковы ли зеркально стоящие цифры
		{
			printf("	Да");
		}
		else
		{
			printf("	Нет");
		}
	}

	return 0;
}
