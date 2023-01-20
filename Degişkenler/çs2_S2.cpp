/*
	Klavyeden girilen 3 sayýnýn ortalamasýný bulan program kodunu yazýnýz.
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
