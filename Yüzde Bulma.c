#include<stdio.h>
int main(){
	float yuzde,sayi;
	int i=1;
	dongu:
	while(i==1){
	printf("Yuzdesi Alinacak Sayiyi Giriniz :");
	scanf("%f",&sayi);
	printf("Istenilen Yuzde : %");
	scanf("%f",&yuzde);
	printf("--------------------------------\n");
	printf("Alinmis Yuzde : %.2f \n",(yuzde/100)*sayi);
	printf("Sayi+Yuzdesi : %.2f \n",sayi+((yuzde/100)*sayi));
	printf("Sayi-Yuzdesi : %.2f \n",sayi-((yuzde/100)*sayi));
	printf("--------------------------------\n");
	i=i-1;
	printf("Devam etmek icin (1)\n Cikis icin (0) tuslayiniz\n : ");
	scanf("%d",&i);
	if(i==1) goto dongu;
	if (i==0)
		return 0;
	}
}
