/*
	Klavyeden girilen Vize1, Vize2 ve Final notlar�na g�re ��rencinin y�l sonu notunu hesaplayan program kodunu yaz�n�z . Vize1 : %30 , Vize2 : %30 , Final : %40 y�l 
sonuna etki edecek �ekilde hesaplanacakt�r .
	 �rnek : 
 		Vize1 = 10 , Vize2 = 20 , Final : 60 , Sonuc : 33 .
*/

#include<stdio.h>
main()
{
	int vize1, vize2, final;
	float ort;
	printf("V�ZE_1 : ");
	scanf("%d",&vize1);
	printf("V�ZE_2 : ");
	scanf("%d",&vize2);
	printf("F�NAL : ");
	scanf("%d",&final);
	ort = vize1 * 0.3 + vize2 * 0.3 + final * 0.4;
	printf("ORTALAMANIZ : %f",ort); 
	return 0;
}
