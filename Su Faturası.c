# include<stdio.h>

int main()
{
	float a,b,tutar;
	printf("Ilk Gostergeyi Giriniz :");
	scanf("%f",&a);
	printf("Son Gostergeyi Giriniz :");
	scanf("%f",&b);
	
	printf("--------------------------------------\n");
	printf("Tuketim Miktari             : %.2f \n", b-a );
	tutar=(b-a)*0.912857;
	printf("Tuketim Tutari              : %.2f \n", tutar );
	printf("Atik Su Bedeli (yuzde elli) : %.2f \n", tutar/2 );
	printf("--------------------------------------\n");
	printf("TOPLAM : %.2f  TL", tutar+(tutar/2) );
	
	return 0 ;
	
}
