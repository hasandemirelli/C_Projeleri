#include<stdio.h>
		int Q,K,N,c,i=0,j=0,a,b,ilk[100],son=0,cikolata=0,Queues[100][100];
void Qinsert(int c);
void Qdelete(int i,int j);
void Queue(int i);	
		
int main(){
	
 	printf("Kuyruk sayisini Giriniz: ");
 	scanf("%d",&Q);
 	
 	printf("Her Kuyruktaki Ogrenci sayisini Giriniz: ");
 	scanf("%d",&N);
 	
 	printf("Cikolata Dagitilacak Ogrenci sayisini Giriniz: ");
 	scanf("%d",&K);
 	
	for(a=1;a<=N;a++){
	 	printf("%d. Siradaki Ogrenciyi mutlu edecek cikolata sayisini Giriniz: ",a);
 		scanf("%d",&c);
 		Qinsert(c);
	}
	Queue(i);
	
	printf("\nMinimize Cikolata Sayisi : %d\n",cikolata);	

}


void Queue(int i){
	if(j<K){	
		if(i<Q-1){
			if(Queues[i][ilk[i]]<=Queues[i+1][ilk[i+1]]){
				Qdelete(i,j);
				j++;
				Queue(i);
			}
			else if(Queues[i][ilk[i]]>Queues[i+1][ilk[i+1]]){
				Queue(i+1);
			}
		}
		if(i=Q-1){
			if(Queues[i][ilk[i]]<=Queues[i][ilk[i]]){
				Qdelete(i,j);
				j++;
				Queue(i);
			}
			else if(Queues[i][ilk[i]]>Queues[i][ilk[i]]){
				Queue(0);
			}
		}
  	}
}

void Qinsert(int c){
	if(son<N){	
		for(b=0;b<Q;b++){
			Queues[b][son]=c;
			ilk[b]=0;
		}
		son++;
	}
	else
		printf("Kuyruk DOLDU !!! ");	
}
void Qdelete(int i,int j){
	if(j<K){
		if(ilk[i]<son-1){
			cikolata=cikolata+Queues[i][ilk[i]];
			ilk[i]=ilk[i]+1;
		}
		else if(ilk[i]=son-1){
			cikolata=cikolata+Queues[i][ilk[i]];
		}
		else{
			printf("Kuyruk BOS !!! ");
		}
	}
}


