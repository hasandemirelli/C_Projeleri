#include<stdio.h>

int main(){
    int km,gun;
    char tip;

    printf(" (A veya a) Arazi   :\n");
    printf(" (B veya b) Binek   :\n");
    printf(" (S veya s) Station :\n");
    printf(" (P veya p) Spor    :\n\n");
    printf("Arabanizin Tipi Yukaridakilerden Hangisi : ");
    scanf("%c",&tip);


    switch(tip){
        case 'A':
        case 'a':
            printf("------------------------------------\n");
            printf("Araba Tipi : A \n");
            printf("Arabayi Kac Gun Kullandiniz :");
            scanf("%d", &gun);
            printf("Arabayi Kac Km Kullandiniz :");
            scanf("%d", &km);
            printf("------------------------------------\n");
            printf("Odemeniz Gereken Tutar : %d TL",(gun*20)+(km*18));
            break;

        case 'B':
        case 'b':
            printf("------------------------------------\n");
            printf("Araba Tipi : B \n");
            printf("Arabayi Kac Gun Kullandiniz :");
            scanf("%d", &gun);
            printf("Arabayi Kac Km Kullandiniz :");
            scanf("%d", &km);
            printf("------------------------------------\n");
            printf("Odemeniz Gereken Tutar : %d TL",(gun*32)+(km*22));
            break;

        case 'S':
        case 's':
            printf("------------------------------------\n");
            printf("Araba Tipi : S \n");
            printf("Arabayi Kac Gun Kullandiniz :");
            scanf("%d", &gun);
            printf("Arabayi Kac Km Kullandiniz :");
            scanf("%d", &km);
            printf("------------------------------------\n");
            printf("Odemeniz Gereken Tutar : %d TL",(gun*43)+(km*28));
            break;

        case 'P':
        case 'p':
            printf("------------------------------------\n");
            printf("Araba Tipi : P \n");
            printf("Arabayi Kac Gun Kullandiniz :");
            scanf("%d", &gun);
            printf("Arabayi Kac Km Kullandiniz :");
            scanf("%d", &km);
            printf("------------------------------------\n");
            printf("Odemeniz Gereken Tutar : %d TL",(gun*51)+(km*36));
            break;

        default:
            printf("!!! HATALI ARAC TIPI GIRDINIZ !!! \n");
    }
    return 0;
}

