/*
	Y�kseklik ve taban uzunlu�u klavyeden girilen ��genin alan�n� hesaplayan C kodunu yaz�n�z .
		��GEN�N ALANI : TABAN * Y�KSEKL�K / 2 
*/

#include<stdio.h>
main()
{
	int taban, yUkseklik, alan;
	printf("TABAN DEGER� : ");
	scanf("%d",&taban);
	printf("Y�KSEKL�K DEGER� : ");
	scanf("%d",&yUkseklik);
	alan = (taban * yUkseklik) / 2;
	printf("ALAN DEGER� : %d",alan);
	return 0;
}
