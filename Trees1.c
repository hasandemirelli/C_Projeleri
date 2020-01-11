#include<stdio.h>

int main(){
	int T[500],kok[250],sol[250],sag[250],N,K,i;
	
	printf("Dizinizdeki ELeman Sayisini Giriniz ");
	scanf("%d",&N);
	for(i=1; i<=N; i++){
		printf("Dizinin %d. Elemani : ",i);
		scanf("%d",&T[i]);
	}
	for(i=1; i<=N/2; i++){
		kok[i]=T[i];
		printf("kok %d ",kok[i]);
		sol[i]=T[i*2];
		printf("sol %d ",sol[i]);
		sag[i]=T[(i*2)+1];
		printf("sag %d  ",sag[i]);
	}
	printf("\nK Sayisini Giriniz ");
	scanf("%d",&K);
	
	if(N%2==0){
		for(i=1; i<N/2; i++){
		
			if(kok[i]+sol[i]+sag[i]>=K){
				printf("%d + %d + %d = %d \n",kok[i],sol[i],sag[i],kok[i]+sol[i]+sag[i]);
			}
			if(i*i<=N/2){
				if(kok[i]+sol[i]+sol[i*i]>=K){
					printf("%d + %d + %d = %d\n",kok[i],sol[i],sol[i*i],kok[i]+sol[i]+sol[i*i]);
				}
			}
			if(i+i+1<=N/2){
				if(kok[i]+sag[i]+sag[i+i+1]>=K){
					printf("%d + %d + %d = %d\n",kok[i],sag[i],sag[i+i+1],kok[i]+sag[i]+sag[i+i+1]);
				}
			}
			if(i+i<=N/2){
				if(kok[i]+sol[i]+sag[i+i]>=K){
				printf("%d + %d + %d = %d \n",kok[i],sol[i],sag[i+i],kok[i]+sol[i]+sag[i+i]);
				}
			}
			
		}
	}
	else if(N%2==1){
		for(i=1; i<=N/2; i++){
		
			if(kok[i]+sol[i]+sag[i]>=K){
				printf("%d + %d + %d = %d \n",kok[i],sol[i],sag[i],kok[i]+sol[i]+sag[i]);
			}
			if(i*i<=N/2){
				if(kok[i]+sol[i]+sol[i*i]>=K){
					printf("%d + %d + %d = %d\n",kok[i],sol[i],sol[i*i],kok[i]+sol[i]+sol[i*i]);
				}
			}
			if(i+i+1<=N/2){
				if(kok[i]+sag[i]+sag[i+i+1]>=K){
					printf("%d + %d + %d = %d\n",kok[i],sag[i],sag[i+i+1],kok[i]+sag[i]+sag[i+i+1]);
				}
			}
			if(i+i<=N/2){
				if(kok[i]+sol[i]+sag[i+i]>=K){
				printf("%d + %d + %d = %d \n",kok[i],sol[i],sag[i+i],kok[i]+sol[i]+sag[i+i]);
				}
			}
		}
	}
}
