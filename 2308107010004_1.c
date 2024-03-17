#include <stdio.h>

int main(){
    int menu;
    int desimal, biner, octal; 
    long long binerInput, octalInput;

    //meminta user memilih menu yang diinginkan
    printf("Pilihlah operasi konversi: \n");
    printf("1. Bilangan Desimal ke Biner \n");
    printf("2. Bilangan Biner ke Desimal \n");
    printf("3. Bilangan Desimal ke Octal \n");
    printf("4. Bilangan Octal ke Desimal \n");
    printf("Pilihan Anda: ");
    scanf("%d", &menu);

    switch (menu){
    case 1:
        printf("Masukkan Bilangan Desimal: ");
        scanf("%d", &desimal);

        printf("Hasil konversi ke biner: ");
        for (int i = 7; i >= 0; i--) {
            int bit = (desimal >> i) & 1;
            printf("%d", bit);
        }
        printf("\n");
        break;

    case 2:
        printf("Masukkan Bilangan Biner: ");
        scanf("%lld", &binerInput);

        biner = 0;
        int base = 1;
        while (binerInput != 0) {
            biner += (binerInput % 10) * base;
            binerInput /= 10; 
            base *= 2; 
        }
        printf("Hasil konversi ke desimal: %d\n", biner);
        break;

    case 3:
        printf("Masukkan bilangan desimal: ");
            scanf("%d", &desimal);

            printf("Hasil konversi ke Octal: %o\n", desimal);
            break;
    
     case 4:
        printf("Masukkan Bilangan octal: ");
        scanf("%lld", &octalInput);

        octal = 0;
        base = 1;
        while (octalInput != 0) {
            octal += (octalInput % 10) * base;
            octalInput /= 10; 
            base *= 8; 
        }
        printf("Hasil konversi ke desimal: %d\n", octal);
        break;

    default:
        printf("Pilihan tidak valid. \n");
        break;
    }
    return 0;
}