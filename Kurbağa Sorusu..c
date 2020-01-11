#include<stdio.h>

int main(){
	int x,y,s,t,n,i,j;

	printf("Karenin (x,y) Koordinatlarini Giriniz: ");
	scanf("%d %d",&x,&y);
	while(100<x|| 100<y){
		printf("(x,y) Koordinatlar�n� Giriniz: ");
		scanf("%d %d",&x,&y);
	}
	printf("Karenin Kenar Olcusunu Giriniz: ");
	scanf("%d",&s);
	while(100-x<s|| 100-y<s){
		printf("Karenin Kenar Olcusunu Daha Kucuk Giriniz: ");
		scanf("%d",&s);
	}
	printf("Sureyi Giriniz: ");
	scanf("%d",&t);
	while(400<t|| 0>t){
		printf("Sureyi Giriniz: ");
		scanf("%d",&t);
	}
	t=t-x;
	t=t-y;
	n=0;
	for(i=0;i<=s;i++){
		for(j=0;j<=s;j++){
			if((i+j)<=t){
				n++;
			}
		}
	}
	printf("Max Nokta Sayisi : %d",n);
}
