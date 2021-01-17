#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, ("rus"));
	int number;
	printf("Введите число: ");
	scanf_s("%d", &number);

	if (((number / 100 % 10) == 0) || (number / 1000 != 0)) // проверяем, есть ли разряд сотен и отсутстуют ли более старшие разряды 
	{
		printf("Введите трёхзначное число");
	}
	else
	{
		printf("	Цифры данного числа образуют возрастающую или убывающую последовательность\n");

		int hundreds = number / 100; // цифра сотен, стоящая на первом месте числа
		int tens = number % 100 / 10; // цифра десятков, стоящая на втором месте числа
		int ones = number % 10; // цифра единиц, стоящая на последнем месте числа

		if (((hundreds < tens) && ( tens < ones)) || ((hundreds > tens) && (tens > ones))) // проверяем, есть ли возрастание или убывание цифр
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