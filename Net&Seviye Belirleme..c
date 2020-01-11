#include<stdio.h>

int main ()
{
	int dogru,yanlis;
	float net;
	
	printf("Dogru Sayinizi Giriniz :");
	scanf("%d",&dogru);
	printf("Yanlis Sayinizi Giriniz :");
	scanf("%d",&yanlis);
	
	while(dogru<0 ||100<dogru){
		printf("!!! Gecersiz Deger Girdiniz Dogru Sayinizi Tekrar Giriniz :");
		scanf("%d",&dogru);	
	}
	while(yanlis<0 ||100<yanlis){
		printf("!!! Gecersiz Deger Girdiniz Yanlis Sayinizi Tekrar Giriniz :");
		scanf("%d",&yanlis);	
	}
		while(dogru+yanlis>100){
		printf("!!! Gecersiz Deger Girdiniz Dogru Sayinizi Tekrar Giriniz :");
		scanf("%d",&dogru);	
		printf("!!! Gecersiz Deger Girdiniz Yanlis Sayinizi Tekrar Giriniz :");
		scanf("%d",&yanlis);	
	}
	net=dogru-(yanlis*0.25);
		printf("--------------------------\n");
		printf(" Dogru Sayiniz  : %d \n",dogru);
		printf(" Yanlis Sayiniz : %d \n",yanlis);
		printf("--------------------------\n");
		printf(" NET           	: %.2f \n",net);
	if(net<10){
		printf(" SEVIYE   	 : Baslangic");
	}
	else if(10<=net<30){
		printf(" SEVIYE   	 : Orta ");
	}
	else if(30<=net<50){
		printf(" SEVIYE   	 : Orta Ust ");
	}
	else if(50<=net<70){
		printf(" SEVIYE   	 : Iyi ");
	}
	else if(70<=net<=100){
		printf(" SEVIYE      : Cok Iyi ");
	}
	return 0;
	
}
