#include <stdio.h>

int main()
{
	int A;
	int B;
	printf("Enter A and B: ");
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	printf("(A > 2) and (B <= 3) - ");

	if ((A > 2) && (B <= 3)) // проверяем истинность условия
		printf("True"); // если верно
	else
		printf("False"); //если ложно

	return 0;
}