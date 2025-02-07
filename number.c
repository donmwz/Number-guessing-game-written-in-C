#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int zorluk;
    char ad[50];
    int sayi;
    int tahmin;
    int min, max;
    
    printf("*****Sayi Tahmin oyunu*****\n");
    printf("Adiniz: ");
    scanf("%s", ad);
    
    printf("Lutfen zorluk turu seciniz.\n1-)kolay(0-9)\n2-)orta(10-30)\n3-)zor(31-99)\n4-)cok zor(100-200)\n");
    scanf("%d", &zorluk);
    
    
    
    switch(zorluk){
        case 1:
            printf("Secilen zorluk turu: KOLAY\n");
            min = 0; max = 9;
            break;
        case 2:
            printf("Secilen zorluk turu: ORTA\n");
            min = 10; max = 30;
            break;
        case 3:
            printf("Secilen zorluk turu: ZOR\n");
            min = 31; max = 99;
            break;
        case 4:
            printf("Secilen zorluk turu: COK ZOR\n");
            min = 100; max = 200;
            break;
        default:
            printf("Gecersiz zorluk seviyesi.\n");
            return 1;
    }   
    
    srand(time(0));
    int basari = 1;
    int skor = 0;
    
    while(basari){
    	sayi = (rand() % (max - min + 1)) + min;
    
    printf("Lutfen tahmin giriniz:\n");
    scanf("%d", &tahmin);
    
    if(sayi == tahmin){
        printf("Tebrikler! %s, Cevabiniz dogru.\n", ad);
        basari = 1;
        skor++;
    }
    else{
        printf("%s, Maalesef cevabin yanlis.\nDogru cevap:%d\n", ad, sayi);
        basari = 0;
        printf("Skorunuz: %d", skor);
        
    	}
	}
    
    
    return 0;
}
