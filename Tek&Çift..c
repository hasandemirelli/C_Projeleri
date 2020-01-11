#include<stdio.h>
int main(){
	int s1,s2;
	
	printf("Birinci Sayiyi Giriniz: ");
	scanf("%d",&s1);
	printf("Ikinci Sayiyi Giriniz: ");
	scanf("%d",&s2);
	
	if(s1<s2){
		printf("Buyuk Sayi : %d\n",s2);
		if(s2%2==0)
			printf("Buyuk Sayi :Cifttir");
		else if(s2%2==1)
			printf("Buyuk Sayi :Tektir");	
	}
	else if(s1>s2){
		printf("Buyuk Sayi : %d\n",s1);
		if(s1%2==0)
			printf("Buyuk Sayi :Cifttir");
		else if(s1%2==1)
			printf("Buyuk Sayi :Tektir");	
	}
	return 0;
}
