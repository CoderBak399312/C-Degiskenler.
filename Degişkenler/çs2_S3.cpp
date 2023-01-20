/*
	y = (3a2+2b3+c4) / 6 fonksiyonuna ait C program kodunu yazýnýz .
		 Örnek : a,b ve c=1 ise y=1 olmalýdýr .
*/

#include<stdio.h>
main()
{
	int a, b, c;
	float y;
	printf("DEGERLER : ");
	scanf("%d %d %d", &a, &b, &c);
	y = (3 * a * a + 2 * b * b * b + c * c * c * c) / 6;
	printf("y : %f",y);
	return 0;
}
