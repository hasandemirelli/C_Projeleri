#include<stdio.h>
						
int main (){
	int sayi;
printf(" Bir Sayi giriniz : ");
scanf("%d",&sayi);

if(sayi<0){
	printf(" %d'sayisi negatiftir.\n -",sayi);
	sayi=sayi*(-1);}
else
	printf(" %d'sayisi negatif degildir.\n ",sayi);
	
if(sayi%2==1)
	printf("%d'sayisi Tektir",sayi);
else
	printf("%d'sayisi Tek degildir.",sayi);
}


