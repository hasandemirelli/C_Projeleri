#include<stdio.h>

int main(){
	int n,sonuc=0,i,j,k,l,m;
	printf(" n Sayisini Giriniz:");
	scanf("%d",&n);
	while(n>1000)
	printf(" n Sayisini 1000'den Kucuk Giriniz:");
	
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("a");
		}
		printf("\n");
		sonuc++;
	}
	
	for(k=1; k<=n; k++){	
		for(i=k; i<=n; i++){
			for(j=1; j<=i; j++){
				if(j==k){
					printf("b");	}
				else {
					printf("a");	}	
			}
			printf("\n");
			sonuc++;
		}
	}
	
	for(k=1; k<=n; k++){	
		for(i=k; i<=n; i++){
			for(j=1; j<=i; j++){
				if(j==k){
					printf("c");	}
				else {
					printf("a");	}	
			}
			printf("\n");
			sonuc++;
		}
	}
	
	for(l=1; l<=n; l++){
		for(k=l+1; k<=n; k++){	
			for(i=k; i<=n; i++){
				for(j=1; j<=i; j++){
					if(j==k){
						printf("c");	}
					else if(j==l){
						printf("b");	}
					else {
						printf("a");	}	
				}
				printf("\n");
				sonuc++;
			}
		}
	}
	
	
	for(l=1; l<=n; l++){
		for(k=l+1; k<=n; k++){	
			for(i=k; i<=n; i++){
				for(j=1; j<=i; j++){
					if(j==k){
						printf("b");	}
					else if(j==l){
						printf("c");	}
					else {
						printf("a");	}	
				}
				printf("\n");
				sonuc++;
			}
		}
	}
	for(l=1; l<=n; l++){
		for(k=l+1; k<=n; k++){	
			for(i=k; i<=n; i++){
				for(j=1; j<=i; j++){
					if(j==k){
						printf("c");	}
					else if(j==l){
						printf("c");	}
					else {
						printf("a");	}	
				}
				printf("\n");
				sonuc++;
			}
		}
	}
	
	for(m=1; m<=n; m++){
		for(l=m+1; l<=n; l++){
			for(k=l+1; k<=n; k++){	
				for(i=k; i<=n; i++){
					for(j=1; j<=i; j++){
						if(j==k){
							printf("b");	}
						else if(j==l){
							printf("c");	}
						else if(j==m){
							printf("c");	}
						else {
							printf("a");	}	
					}
					printf("\n");
					sonuc++;
				}
			}
		}
	}
	for(m=1; m<=n; m++){
		for(l=m+1; l<=n; l++){
			for(k=l+1; k<=n; k++){	
				for(i=k; i<=n; i++){
					for(j=1; j<=i; j++){
						if(j==k){
							printf("c");	}
						else if(j==l){
							printf("b");	}
						else if(j==m){
							printf("c");	}
						else {
							printf("a");	}	
					}
					printf("\n");
					sonuc++;
				}
			}
		}
	}
	for(m=1; m<=n; m++){
		for(l=m+1; l<=n; l++){
			for(k=l+1; k<=n; k++){	
				for(i=k; i<=n; i++){
					for(j=1; j<=i; j++){
						if(j==k){
							printf("c");	}
						else if(j==l){
							printf("c");	}
						else if(j==m){
							printf("b");	}
						else {
							printf("a");	}	
					}
					printf("\n");
					sonuc++;
				}
			}
		}
	}	
	
	printf("\nSONUC: %d Tane iterasyon Olusturuldu.",sonuc);
}
