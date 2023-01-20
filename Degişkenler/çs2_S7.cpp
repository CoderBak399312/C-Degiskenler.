/*
	Yükseklik ve taban uzunluðu klavyeden girilen üçgenin alanýný hesaplayan C kodunu yazýnýz .
		ÜÇGENÝN ALANI : TABAN * YÜKSEKLÝK / 2 
*/

#include<stdio.h>
main()
{
	int taban, yUkseklik, alan;
	printf("TABAN DEGERÝ : ");
	scanf("%d",&taban);
	printf("YÐKSEKLÝK DEGERÝ : ");
	scanf("%d",&yUkseklik);
	alan = (taban * yUkseklik) / 2;
	printf("ALAN DEGERÝ : %d",alan);
	return 0;
}
