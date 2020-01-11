#include<stdio.h>

int main(){
	int s1=1,s2=2,s3=3,s4,n,i;
	
	printf("Bir n sayisi giriniz :");
	scanf("%d",&n);
	
	while(n<=0){
		printf("Hatali Deger Girdiniz Lutfen Pozitif Bir n sayisi giriniz :");
		scanf("%d",&n);
	}if(n==1){
		printf("%d",s1);
	}else if(n==2){
		printf("%d",s2);
    }else if(n==3){
		printf("%d",s3);
	}else{
		for(i=1;i<=n-3;i++){
			s4=s2+(2*s1);
			s1=s2;
			s2=s3;
			s3=s4;
	   }printf("%d",s4);
   }return 0;
}
