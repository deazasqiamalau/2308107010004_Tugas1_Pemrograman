#include <stdio.h>

int main(){
    //Input Variabel yang akan digunakan
    int tahun;
    char huruf;
    
    //meminta user menginput tahun
    printf("masukkan tahun :");
    scanf("%d" ,&tahun);

    //looping atau if else untuk memenuhi syarat tahun kabisat yang di inginkan
    if (tahun != huruf && tahun >= 1000 && tahun <= 9999){
        if ((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0 ){
            printf("tahun ini adalah tahun kabisat");
        }else {
            printf("tahun ini bukan tahun kabisat"); }
    }else{
        printf("Masukkan kembali tahun yang anda inginkan!");
    }
    
    
    return 0;
}