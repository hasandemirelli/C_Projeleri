#include<stdio.h>
#include<string.h>


int main(){
	
	int i ,K,m,n,ascii[250];
	char  mesaj[250], sifre[250];
	
	printf("Mesajinizi Giriniz : ");
	scanf("%s",&mesaj);
	printf("Sifreleme Seviyesini Giriniz: ");
	scanf("%d",&K);
	
	for(i=0;mesaj[i];i++){
		ascii[i]=mesaj[i];
	}
	
	for(i=0;ascii[i];i++){
		
		/*if(48<=ascii[i]<=57){
			m=K%10;
			n=58-ascii[i];
			
			if(n<=m){
				m=m-n;
				ascii[i]=48+m;
				sifre[i]=ascii[i];
			}
			else{
				ascii[i]=ascii[i]+m;
				sifre[i]=ascii[i];
				}
		}*/
	 if(65<=ascii[i]<=90){
			m=K%26;
			n=91-ascii[i];
			
			if(n<=m){
				m=m-n;
				ascii[i]=65+m;
				sifre[i]=ascii[i];
			}
			else{
				ascii[i]=ascii[i]+m;
				sifre[i]=ascii[i];
				}
		}
		else if(97<=ascii[i]<=122){
			m=K%26;
			n=123-ascii[i];
			
			if(n<=m){
				m=m-n;
				ascii[i]=97+m;
				sifre[i]=ascii[i];
			}
			else{
				ascii[i]=ascii[i]+m;
				sifre[i]=ascii[i];
				}
		}
		else{
			sifre[i]=ascii[i];
			}
	printf("%c",sifre[i]);
	}
}
