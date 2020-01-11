#include<stdio.h>

int main(){
	int a,b,k,t;	//a büyük olan sayý(bölünen), b küçük olan sayý(bölen), k kalan, t deðiþken //

printf("Bir Sayi Giriniz :");
scanf("%d",&a);
printf("Bir Sayi Girniz :");
scanf("%d",&b);
k=a%b;

	if(a==0)
		printf("EBOB : %d",b);
	if(b==0)
		printf("EBOB : %d",a);
	if(a<b){
		t=a;
		a=b;
		b=t;
	}else{
		while(k!=0){
		a=b;
		b=k;
		k=a%b;	
	}printf("EBOB : %d",b);
}
return 0;	
}
