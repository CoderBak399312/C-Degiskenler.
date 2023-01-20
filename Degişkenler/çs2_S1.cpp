/*
	y = 3 * x * 2 fonksiyonuna ait C program kodunu yazýnýz .
		Örnek : x=2 ise y=12 olmalýdýr . 
*/

#include<stdio.h>
main()
{
	int y, x;
	printf("x DEGER : ");
	scanf("%d",&x);
	y = 3 * x * 2;
	printf("y : %d",y);   
	return 0;
}
