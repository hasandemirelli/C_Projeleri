#include<stdio.h>
int main(){
	int n,r,fn,fr,fnr,i;
	printf("Konbinasyon deðerlerini (n) giriniz :");
	scanf("%d",&n);
	printf("Konbinasyon deðerlerini (r) giriniz :");
	scanf("%d",&r);
	
	fn=1;
	fr=1;
	fnr=1;
	
	for(i=1; i<=n; i++){
		fn *= i;
		if(i <= r)
			fr *= i;
		if(i <= (n-r))
			fnr *= i;
	}
	printf("Kombinasyon Sonucu : %d",fn/(fr*fnr));
	return 0;
}
