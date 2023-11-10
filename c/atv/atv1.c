#include <stdio.h>
#include <math.h>

void volumeDaEsfera();

int main()
{
	volumeDaEsfera();
	return 0;
}

void volumeDaEsfera()
{
 	float r, v;
 	printf("informe o raio");
 	scanf("%f", &r);
 	v = (4 * 3.1415 * pow(r, 3)) / 3;
	printf("o volume e %f", v);
}

