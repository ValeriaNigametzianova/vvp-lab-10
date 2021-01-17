#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,("rus"));
	int A;
	int B;
	int C;
	printf("Введите значения А, В и С: ");
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	scanf_s("%d", &C);

	printf("Справедливо двойное неравенство A < B < C? - ");

	if ((A < B) && (B < C))// проверяем истинность условия
		printf("Да"); // если верно
	else
		printf("Нет"); // если ложно

	return 0;
}
