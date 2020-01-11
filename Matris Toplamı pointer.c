#include<stdio.h>

int main (){
	int m1[3][3],m2[3][3],m3[3][3],a,*m1,*m2,*m3; //a satýr , b sütün 
	m1=&m1[0][0]; m2=&m2[0][0]; m3=&m3[0][0];
	
	for(a=0;a<9;a++){
			scanf("%d",m1+a);
	}
	printf("\n");
	
	for(a=0;a<9;a++){
			scanf("%d",m2+a);
	}
			
		*(m3+a)= m1[a][b]+m2[a][b];
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
