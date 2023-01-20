/*
	Klavyeden girilen Vize1, Vize2 ve Final notlarýna göre öðrencinin yýl sonu notunu hesaplayan program kodunu yazýnýz . Vize1 : %30 , Vize2 : %30 , Final : %40 yýl 
sonuna etki edecek þekilde hesaplanacaktýr .
	 Örnek : 
 		Vize1 = 10 , Vize2 = 20 , Final : 60 , Sonuc : 33 .
*/

#include<stdio.h>
main()
{
	int vize1, vize2, final;
	float ort;
	printf("VÝZE_1 : ");
	scanf("%d",&vize1);
	printf("VÝZE_2 : ");
	scanf("%d",&vize2);
	printf("FÝNAL : ");
	scanf("%d",&final);
	ort = vize1 * 0.3 + vize2 * 0.3 + final * 0.4;
	printf("ORTALAMANIZ : %f",ort); 
	return 0;
}
