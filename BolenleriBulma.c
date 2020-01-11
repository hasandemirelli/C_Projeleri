#include<stdio.h>
    int n, sayi;
    
void bolen(int n, int sayi );

int main(){
    int n,sayi;
    printf("Bolenleri Bulunacak Sayiyi Giriniz :");
	scanf("%d",&sayi);
	printf("SAYININ BOLENLERI:");
    n=sayi;
    bolen(n,sayi);
    
    
		

}
void bolen(int n, int sayi){
	if(sayi%n==0){
		printf("%d ",n);
	}
	if (n>0){
		bolen(n-1,sayi);
	}	
}



