#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	int b;
	int c;
	printf("введите числа: ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	if (((a + b) > c) && ((b + c) > a) && ((a + c) > b))
		printf("существует треугольник с такими сторонами");
	else
		printf("не существует треугольник с такими сторонами");
}