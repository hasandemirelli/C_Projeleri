#include<stdio.h>
	
	int tamfark (float a,float b){
		return a-b;
	} 
	
	int main(){
		float a,b;
		printf("Bir sayi giriniz : ");
		scanf("%f",&a);
		printf("Ikinci sayiyi Giriniz : ");
		scanf("%f",&b);
		printf("Tam fark : %d",tamfark(a,b));	
	}

	
