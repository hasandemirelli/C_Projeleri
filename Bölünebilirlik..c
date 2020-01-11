#include<stdio.h>
int main(){
	int a,b,S;
	printf("7'den buyuk bir sayi giriniz :");
	scanf("%d",&S);
	
	for(a=0; a<=S/3; a++){
	for(b=0; b<=S/5; b++)
		if(3*a+5*b==S){	
		printf("a=%d\n",a);
		printf("b=%d\n\n",b);
		}
	}
	return 0;
}
