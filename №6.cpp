#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	int b;
	int c;
	printf("	Введите стороны треугольника: ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	printf("	Треугольник со сторонами a, b, c является прямоугольным.");
	if (pifagor(a, b, c) == 1)// если теорема сработала, треугольник прямоугольный
	{
		printf("- да");
	}
	else
		printf("- нет");
	return 0;
}

int pifagor(int x, int y, int z)// функция, возвращающая 1, если работает теорема Пифагора, и 0, если не работает
{
	if (z * z == (x * x + y * y))
	{
		return(1);
	}
	else
		return(0);
}
