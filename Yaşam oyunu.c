#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int rastgele,N,rastgele1,Sira[100000],i,x,y;

	printf("Siradaki Kisi Sayisini Giriniz :");
	scanf("%d",&N);
	printf("-------------------------------------------\n");
	for(i=0;i<=N-1;i++){
		printf(" %d.Siradaki Kisinin Gucu :",i+1);
		scanf("%d",&Sira[i]);
	}
	printf("-------------------------------------------\n");
	
	srand(time(NULL)); 
	rastgele=1+rand()%N-1;
	
	printf("OYUN %d KEZ OYNANDI.\n",rastgele);
	printf("KAZANAN IKILILER :");
	
	i=1;
	while(i<=rastgele){
		srand(time(NULL));
		rastgele1=rand()%N;
		y=Sira[rastgele1-1];
		i=rastgele1;
		while(i!=rastgele1){
			
			if(i!=N-1){	
				if(Sira[i]>Sira[i+1])
				{x=Sira[i];	}	
				else
				{x=Sira[i+1];}
			i++;
			}	
			else if(i==(N-1)){	
				if(Sira[i]>=Sira[0])
				{x=Sira[i];	}	
				else
				{x=Sira[0];}
			i=0;
			}							
		}
	printf("rastgele :%d ",rastgele);
	printf("rastgele1 :%d ",rastgele1);
	printf("(%d,%d)",x,y);
	i++;
	}
}
