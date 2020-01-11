#include<stdio.h>

int oklid (int,int);

int main(){
	int a,b,t;	//a büyük olan sayý(bölünen), b küçük olan sayý(bölen), k kalan, t deðiþken //

printf(" Bir Sayi Giriniz :");
scanf("%d",&a);
printf(" Bir Sayi Girniz :");
scanf("%d",&b);

while(a<=0|| b<=0 ){
	printf(" Pozitif Bir Sayi Giriniz :");
	scanf("%d",&a);
	printf(" Pozitif Bir Sayi Giriniz :");
	scanf("%d",&b);	
	}
if(a<b) 
	{ t=a; a=b; b=t; }
printf("--------------------------------\n ");		
printf(" EBOB : %d", oklid(a,b) );	
}
int oklid (int a,int b){
	int k=a%b;
	if(k!=0)
		return oklid(b,k);
	else
		return b;
}	
