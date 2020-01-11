#include<stdio.h>

void quicksort(int *dizi, int sol, int sag);

int main(){
	int dizi[10000], n, x,i,j;
	printf("Dizenin uzunlugunu Giriniz :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Dizenin[%d].Elemanini Giriniz :",i);
		scanf("%d",&dizi[i]);
	}
	printf("\n X Sayisini Giriniz :");
	scanf("%d",&x);
	
	quicksort(dizi,0,n-1);

    i=0;
    while(i<n){
        j=1;
        while(j<dizi[i]){
            if(x+j>dizi[i]){
                i++;
            }
            else if (x+j<dizi[i]){
                printf("En Minimize Z Degeri %d ",x+j);
                i=n+1;
            }
            else
                j++;
            
        }
    }
	return 0;
}

void quicksort(int *dizi, int sol, int sag) {
  int pivot, i, j, temp;
  
  if(sol < sag) {
    pivot = sol; 
    i = sol;
    j = sag;
    while(i < j) {
      while(dizi[i] <= dizi[pivot] && i <= sag)
        i++;
      while(dizi[j] > dizi[pivot] && j >= sol)
        j--;
      if(i < j) {
        temp = dizi[i];
        dizi[i] = dizi[j];
        dizi[j] = temp;
      }
    }

    temp = dizi[j];
    dizi[j] = dizi[pivot];
    dizi[pivot] = temp;

    quicksort(dizi, sol, j-1);
    quicksort(dizi, j+1, sag);
  }

}
