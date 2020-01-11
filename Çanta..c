#include<stdio.h>
#include<string.h>

int main(){
   float kg[100],tl[100],deger[100],N,canta;
   int a,b,i,t,adet;
   char isim [100][100], tstr[100];
   
	printf("Elinizdeki Urun Sayisini Giriniz :");
	scanf("%d",&adet);
	printf("\n");
   
	for(i=0;i<adet;i++){
		printf("%d. Urunun:\n",i+1);
		printf("Ismi :");
		scanf("%s",isim[i]);
		printf("Kutlesi (kg) :");
		scanf("%f",&kg[i]);
		printf("Tutari (TL) :");
		scanf("%f",&tl[i]);
		printf("-------------------------------\n");
	}  
	printf("Cantanýn Kapasitesini Giriniz : ");
	scanf("%f",&N);
	printf("\n");
			 
	for(i=0;i<adet;i++){
		deger[i]=tl[i]/kg[i];
		}
	for(a=0;a<adet;a++){
		for(b=a+1;b<adet;b++){
			if(deger[a]<deger[b]){
				strcpy(tstr, isim[a]);
				strcpy(isim[a], isim[b]);
				strcpy(isim[b], tstr);
				
				t=kg[a];
				kg[a]=kg[b];
				kg[b]=t;
				
				t=tl[a];
				tl[a]=tl[b];
				tl[b]=t;
			}
		}
	}
	printf("Cantaya Alýnanlar : ");
	for(i=0;i<adet;i++){
		if(kg[i]<=N){
			N=N-kg[i];
			canta=canta+tl[i];
			printf("%s ",isim[i]);
			}
		}
	printf("\n Max Tutar : %.2f",canta);
		return 0 ;
}


