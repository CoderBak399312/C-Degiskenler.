/*
	Klavyeden yar��ap� al�nan bir ��genin alan�n� ve �evresini hesaplayan C kodunu yaz�n�z . 
 		PI de�eri : 3.14 al�n�z .
 		��GEN�N ALANI : ( TABAN * Y�KSEKL�K ) / 2 .
 		��GEN�N �EVRES� : X + Y + Z  == ��kenar�n top. ile bulunur. 
*/

#include<stdio.h>
#define PI : 3.14
main()
{
	int taban , yukseklik, alan;
	int x, y, z, cevre;
	printf("TABAN DEGER� : ");
	scanf("%d",&taban);
	printf("Y�KSEKL�K DEGER� : ");
	scanf("%d",&yukseklik);
	alan = (taban * yukseklik);
	printf("CEVRE DEGERLER� : ");
	scanf("%d %d %d", &x, &y, &z);
	cevre = x + y + z;
	printf("��GEN�N ALANI : %d\n",alan);
	printf("CEVRE DEGER� : %d\n",cevre);
	return 0;
}
