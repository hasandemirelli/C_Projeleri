#include<stdio.h>

int main(){
	int N,antiX[10],X[10],i,j,temp,yasayanSayisi=0;
	
	printf("Asi Sayisini Giriniz: ");
	scanf("%d",&N);
	while(10<N||N<1){
		printf("Asi Sayisini Giriniz: ");
		scanf("%d",&N);
	}
	for(i=1;i<=N;i++){
		printf("%d. Asinin Anti-X Degerini Giriniz: ",i);
		scanf(" %d",&antiX[i-1]);}
		printf("----------------------------------------------\n");	
	for(i=1;i<=N;i++){
		printf("%d. Hastanin X Virüs Degerini Giriniz: ",i);
		scanf(" %d",&X[i-1]);	}
		printf("----------------------------------------------\n");		

	
	for(i=0;i<=N-1;i++){
		for(j=0;j<=N-1;j++){
			if(antiX[i]>antiX[j]){
				temp=antiX[i];
				antiX[i]=antiX[j];
				antiX[j]=temp;
			}
		}
	}
	for(i=0;i<=N-1;i++){
		for(j=0;j<=N-1;j++){
			if(X[i]>X[j]){
				temp=X[i];
				X[i]=X[j];
				X[j]=temp;
			}
		}
	}
	
	for(i=0;i<N;i++){
		if(antiX[i]>=X[i]){
			yasayanSayisi++;
		}
	}
	if(yasayanSayisi>0){
		printf("Kurtulan Kisi Sayisi : %d",yasayanSayisi);
	}
	else{
		printf("Kurtulan Kisi YOK");
	}
	
}
