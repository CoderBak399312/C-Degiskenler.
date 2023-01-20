/*
	Klavyeden yarýçapý alýnan bir üçgenin alanýný ve çevresini hesaplayan C kodunu yazýnýz . 
 		PI deðeri : 3.14 alýnýz .
 		ÜÇGENÝN ALANI : ( TABAN * YÜKSEKLÝK ) / 2 .
 		ÜÇGENÝN ÇEVRESÝ : X + Y + Z  == üçkenarýn top. ile bulunur. 
*/

#include<stdio.h>
#define PI : 3.14
main()
{
	int taban , yukseklik, alan;
	int x, y, z, cevre;
	printf("TABAN DEGERÝ : ");
	scanf("%d",&taban);
	printf("YÜKSEKLÝK DEGERÝ : ");
	scanf("%d",&yukseklik);
	alan = (taban * yukseklik);
	printf("CEVRE DEGERLERÝ : ");
	scanf("%d %d %d", &x, &y, &z);
	cevre = x + y + z;
	printf("ÜÇGENÝN ALANI : %d\n",alan);
	printf("CEVRE DEGERÝ : %d\n",cevre);
	return 0;
}
