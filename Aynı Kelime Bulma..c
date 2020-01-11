#include<stdio.h>
#include<string.h>

int main(){
	char cumle1[300],cumle2[300],*kelime1[300],*kelime2[300],*ortakkelime,*birlesim;
	int i=0,a=0,b=0;
	
	printf("Bir Cumle Giriniz :");
	gets(cumle1);
	printf("Bir Cumle Giriniz :");
	gets(cumle2);
	
	kelime1[a]=strtok(cumle1," "); 
		for(a=1;kelime1[a]!=NULL;++a){
			kelime1[a]=strtok(NULL," ");
		}
	
	kelime2[b]=strtok(cumle2," "); 
		for(b=1;kelime2[b]!=NULL;++b){
			kelime2[b]=strtok(NULL," ");
		}
	
	for(a=0;kelime1[a]==NULL;++a){
		for(b=0;kelime2[b]!=NULL;++b){
			ortakkelime=strstr(kelime1[a],kelime2[b]);
		if(ortakkelime!=NULL){
			printf("Ortak Kelime : %s \n",kelime2[b]);
			kelime2[b]="";

		}
	  }
	}
	
			
	return 0;
}



