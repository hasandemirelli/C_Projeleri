
// !!!!!	DEV C++ ÝLE ÇALIÞTIRAMIYORUM  " https://www.onlinegdb.com/online_c_compiler " LÝNKTEKÝ COMPÝLER DAN DENERSENÝZ ÇALIÞACAKTIR... TEÞEKKÜRLER... //

#include<stdio.h>
#define boyut 1000000

	int stacks[boyut], tepe, H ;

void push(int H);
void pop();

int main(){
	int T, n, x, i, j, a, b, c, menzil, kuleH, yazdir[1000000] ;
	tepe= 0;
	printf("Test Sayisini Giriniz :");
	scanf("%d",&T);
	
	for(i=1;i<=T;i++){
		printf("Kule Sayisini Giriniz :");
		scanf("%d",&n);	
		for(j=1;j<=n;j++){
			printf("Kule Yuksekligini Giriniz :");
			scanf("%d",&H);
			push(H);
		}
		for(a=1;a<=n;a++){
			kuleH=stacks[tepe];
			pop();
			menzil=1;
			for(b=tepe;b>=0;b--){
				if(stacks[b]<kuleH){
					menzil++;
				}
				else{
				    break;
				}
					
			}	
			yazdir[tepe+1]=menzil;
			yazdir[0]=1;
		}
		for(c=0;c<n;c++){
			printf("%d ",yazdir[c]);
		}
	}
	return 0;
}

void push(int H){
	if(tepe==boyut){
		printf("Stacks DOLU !");
	}
	else{
		stacks[tepe]=H;
		tepe++;
	}
}
void pop(){
	if(tepe== 0){
		printf("Stacks BOS !");
	}
	else{
		tepe--;
	}
}


