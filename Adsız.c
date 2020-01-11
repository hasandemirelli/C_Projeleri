#include<stdio.h>
int A[500],B[500],kok[250],sol[250],sag[250],N,K,T,i,j,k,l,m,temp,max,*a,*b;

int HeapsDesing (int dizi[],int boyut);
int HeapsInsort (int dizi[],int boyut);

int main(){
    printf("Test Sayisini Giriniz :");
    scanf(" %d",&T);
    for(m=0; m<T; m++){

        printf("Yerdeki Paket Sayisini Giriniz :");
        scanf(" %d",&N);
        printf("K Dakikasini Giriniz :");
        scanf(" %d",&K);
        for(i=1; i<=N; i++){
            printf("%d. Paketteki Seker Sayisi : ",i);
            scanf("%d",&A[i]);
        }
        HeapsDesing(A,N);
        HeapsInsort(A,N);

        printf("MAX Seker : %d \n",max);

    }
}

int HeapsDesing (int A[],int N){
    for(j=1; j<=N/2; j++){
        for(i=1; i<=N/2; i++){
            kok[i]=A[i];
            sol[i]=A[i*2];
            sag[i]=A[(i*2)+1];

            if(kok[i]<sol[i]){
                temp=kok[i];
                kok[i]=sol[i];
                sol[i]=temp;

                A[i]=kok[i];
                A[i*2]=sol[i];
                A[(i*2)+1]=sag[i];
            }
            if(kok[i]<sag[i]){
                temp=kok[i];
                kok[i]=sag[i];
                sag[i]=temp;

                A[i]=kok[i];
                A[i*2]=sol[i];
                A[(i*2)+1]=sag[i];
            }
        }
    }

    a=A;
    return *a;
}

int HeapsInsort (int dizi[],int boyut){
    j=0;
    for(k=1; k<=N; k++) {
        B[k]=A[1];
        A[1]=A[N-j];
        if(k<=K){
            max=max+B[k];
            A[N-j]=B[k]/2;
        }
        j++;
        HeapsDesing(A,N-j);

    }

    b=B;
    return *b;
}
