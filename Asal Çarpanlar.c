//Soru 2) Klavyeden okunan bir sayýnýn asal çarpanlarýný ekrana basan kodu yazýnýz.

#include<stdio.h>

int main(){
	int i,sayi;
		
printf("Bir Sayi Giriniz: ");
scanf("%d",&sayi);

	for(i=2;i<=sayi;){
		if (sayi%i==0){
			sayi=sayi/i;
			printf("%d ",i);
		}
		else
		{ i++ ;}
	}
	
	return 0;
}

