#include<stdio.h>

int main (){
	int m1[3][3],m2[3][3],m3[3][3],a,b; //a satýr , b sütün 
	
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			printf("1.Matrisin [%d][%d] elemanýný giriniz : ",a,b);
			scanf("%d",&m1[a][b]);
		}
	}
	printf("\n");
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			printf("2.Matrisin [%d][%d] elemanýný giriniz : ",a,b);
			scanf("%d",&m2[a][b]);
			
		m3[a][b]= m1[a][b]+m2[a][b];
		}
	}
		printf("\n 3.Matris :\n" );
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			printf(" %d",m3[a][b]);
		
		}
		printf("\n");
	}
}
