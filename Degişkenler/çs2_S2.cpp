/*
	Klavyeden girilen 3 say�n�n ortalamas�n� bulan program kodunu yaz�n�z.
*/

#include<stdio.h>
main()
{
	int x, y, z;
	float t;
	printf("DEGERLER : ", x, y, z);
	scanf("%d %d %d", &x, &y, &z);
	t = (x + y + z) / 3;
	printf("Ortalama : %f",t);
	return 0;
}
