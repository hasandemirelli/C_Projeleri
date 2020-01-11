#include<stdio.h>

int main(){
	int s1,s2,s3,i;
	printf("Uc adet sayi giriniz :\n");
	scanf("%d %d %d",&s1,&s2,&s3);
	
	if(s1<s2){
		i=s1;
		s1=s2;
		s2=i;	
	}
	if(s1<s3){
		i=s1;
		s1=s3;
		s3=i;
	}
	if(s2<s3){
		i=s2;
		s2=s3;
		s3=i;	
	}
	
	printf("Buyukten Kucuge Siralama : %d > %d > %d ",s1,s2,s3);
	return 0;
}
