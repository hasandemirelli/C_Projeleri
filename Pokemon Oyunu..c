#include<stdio.h>
#include<string.h>

int main(){
	
	int T,n,k,K,i,x,y,L,temp;
	int dizi[100000];
	char mesaj[100000];	
	
	printf("Test Sayisini Giriniz: ");
	scanf("%d",&T);
	while(12<T||T<1){
		printf("Test Sayisini 1 ile 12 arasinda Giriniz: ");
		scanf("%d",&T);
	}
	
	for(i=0; i<=T; i++){
		
		printf("integer Sayisini Giriniz: ");
		scanf("%d",&n);
		while(100000<n||n<1){
			printf("integer Sayisini Giriniz: ");
			scanf("%d",&n);
		}
		printf("Kalti hareketi Sayisini Giriniz: ");
		scanf("%d",&k);
		while(n<k||n<0){
			printf("Kalti hareketi Sayisini Giriniz: ");
			scanf("%d",&k);
		}
		printf("Kartlari Giriniz: ");
		scanf("%s",mesaj);
		while(strlen(mesaj)>n){
			printf("Integer Sayisi Kadar Kart Giriniz: ");
			scanf("%s",mesaj);
		}
		
		L=0;
		x=0;
		while(x<n){
			temp=0;
			K=k;
			for(i=0;i<=n;i++){
				dizi[i]=mesaj[i];}
				
			for(y=1;y<=n;y++){
				if(dizi[x]==dizi[y]){
					temp++;	
				}
				else if(dizi[x]<dizi[y] || dizi[x]>dizi[y] ){
					if(K>0){
						dizi[y]=dizi[x];
						temp++;
						K=K-1;
					}
					else{
						x++;
					}
					
				}	
			}
			if(temp>L){
				L=temp;
			}
		}
		printf("Kazanilan Kart Sayisi : %d \n",L);
	}
}
