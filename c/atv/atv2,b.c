#include <stdio.h>
#include <math.h>

void conversor();

int main()
{
	conversor();
	return 0;
}

void conversor()
{
	int c,f;
	printf("informe o valor: ");
	scanf("%d", &c);
	f = (9/5) * c + 32;
	printf("o valor he %d", f);
}