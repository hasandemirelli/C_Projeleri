#include<stdio.h>

int main(){
	int W[10][10],i,j,k,a,b,n;

	n=4;


	for(a=1; a<=n; a++){
		for(b=1; b<=n; b++){	
			W[a][b]=0;
		}
	}
	
	//W[2][1]=1; W[2][3]=1; W[3][1]=1;W[3][4]=1;W[4][1]=1;W[4][3]=1;	// A þýkký için bu satýrý 
	W[1][1]=1; W[1][4]=1; W[2][1]=1;W[2][3]=1;W[3][1]=1;W[3][2]=1;W[3][4]=1;W[4][2]=1;  	// B þýkký için bu satýrý  kullanýn 
	
	for(a=1; a<=n; a++){
		for(b=1; b<=n; b++){	
			printf("%d ",W[a][b]);
		}
		printf("\n");
	}
			
			printf("\n");
	for(k=1; k<=n; k++){
		for(i=1; i<=n; i++){
			for(j=1; j<=n; j++){
				W[i][j]=W[i][j]+(W[i][k]*W[k][j]);
				if(W[i][j]==2){ W[i][j]=1; }
				printf("W[%d][%d]=W[%d][%d]+(W[%d][%d]*W[%d][%d] = %d\n \n",i,j,i,j,i,k,k,j,(W[i][j]));
			for(a=1; a<=n; a++){
				for(b=1; b<=n; b++){	
					printf("%d ",W[a][b]);
				}
				printf("\n");
			}
			
			printf("\n");
			}
		}
	}
}
