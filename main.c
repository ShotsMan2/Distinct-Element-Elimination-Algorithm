#include <stdio.h>
#include <stdlib.h>

int main()
{
     int sayilar[]= { 1, 6, 5, 2, 1, 4, 2 };
    int i,sayac,sayi,fsayac,varmi;



    for(;;){

        sayac=0;

        for(i=0;i<=6;i++){
            if(sayilar[i]==-1){
                sayac++;
            }
        }
        if(sayac==7){
            break;
        }

        printf("sayi girin ");
        scanf("%d",&sayi);

        varmi=0;

        for(i=0;i<=6;i++){
            if(sayilar[i]==sayi){
                varmi=1;
                break;
            }
        }

        if(varmi==1){
            fsayac++;
        }

        for(i=0;i<=6;i++){
            if(sayilar[i]==sayi){
                sayilar[i]=-1;


            }
        }
    }
    printf("%d tane farklı sayı bulunmaktadır.",fsayac);
    return 0;
}
