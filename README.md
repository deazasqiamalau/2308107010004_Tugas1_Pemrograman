Penjelasan tentang cara menjalankan kode program yang ada pada soal 1 & 2 Pada tugas 1 Pemrograman.

SOAL NOMOR 1:

Program ini merupakan sebuah program dalam bahasa C yang melakukan konversi antara bilangan desimal, biner, dan oktal berdasarkan pilihan pengguna, berikut kode program untuk meminta pengguna untuk memasukkan pilihan mereka;


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

Penjelasan:

1. Program ini memungkinkan pengguna untuk melakukan konversi antara bilangan desimal, biner, dan oktal.
2. Program dimulai dengan meminta pengguna untuk memilih operasi konversi.
3. Pengguna memasukkan pilihan mereka, yang disimpan dalam variabel `menu`.
4. Program berdasarkan pilihan pengguna melakukan salah satu operasi konversi:
   - Jika pilihan adalah 1, program akan mengonversi bilangan desimal ke biner.
   - Jika pilihan adalah 2, program akan mengonversi bilangan biner ke desimal.
   - Jika pilihan adalah 3, program akan mengonversi bilangan desimal ke oktal.
   - Jika pilihan adalah 4, program akan mengonversi bilangan oktal ke desimal.
5. Setelah konversi selesai, program menampilkan hasilnya.
6. Program berakhir setelah menampilkan hasil konversi.
7. Pengguna dapat menjalankan program dengan menyimpannya dalam file `.c`, mengompilasi menggunakan kompiler C, dan menjalankannya di terminal.


a). Bilangan Desimal ke Biner


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

Penjelasan:

1. Program menggunakan struktur `switch` untuk memeriksa nilai variabel `menu`, yang merupakan pilihan operasi konversi yang dimasukkan pengguna.

2. Jika `menu` sama dengan 1, program akan meminta pengguna untuk memasukkan bilangan desimal yang akan dikonversi ke biner.

3. Setelah pengguna memasukkan bilangan desimal, program akan melakukan konversi dari bilangan desimal ke biner.

4. Untuk setiap bit dalam representasi biner (dari bit paling signifikan hingga bit paling tidak signifikan), program menggunakan perhitungan bitwise untuk mendapatkan nilai bit.

5. Nilai bit yang diperoleh kemudian dicetak ke layar.

6. Setelah seluruh representasi biner selesai dicetak, program menambahkan karakter newline untuk mengakhiri baris.

7. `break;` menghentikan eksekusi switch case dan menjalankan instruksi di luar struktur switch.

Untuk menjalankan kode program ini, pengguna cukup menyimpannya dalam file dengan ekstensi `.c`, lalu mengompilasi dan menjalankannya menggunakan kompiler C seperti GCC. Setelah itu, ikuti instruksi yang muncul di layar untuk memilih operasi konversi dan memasukkan bilangan desimal yang akan dikonversi ke biner. Hasil konversi ke biner akan di tampilkan di layar.



b). Bilangan Biner ke Desimal 


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

Penjelasan:

1. Struktur `switch` digunakan untuk memeriksa nilai variabel `menu`, yang merupakan pilihan operasi konversi yang dimasukkan pengguna.

2. Jika `menu` sama dengan 2, program akan meminta pengguna untuk memasukkan bilangan biner yang akan dikonversi ke desimal.

3. Setelah pengguna memasukkan bilangan biner, program akan melakukan konversi dari bilangan biner ke desimal.

4. Program menggunakan perhitungan matematis dalam loop `while` untuk mengonversi bilangan biner ke desimal.
   - Variabel `base` digunakan untuk melacak posisi digit biner yang sedang diproses.
   - Setiap digit biner diambil dengan membagi `binerInput` dengan 10.
   - Digit biner tersebut kemudian dikalikan dengan `base` dan ditambahkan ke `biner`.
   - `binerInput` kemudian dibagi dengan 10 untuk menggeser digit biner ke kanan.
   - `base` digandakan dengan 2 setiap iterasi untuk menggeser ke posisi digit biner berikutnya.

5. Setelah konversi selesai, nilai desimal hasil konversi dicetak ke layar.

6. `break;` menghentikan eksekusi switch case dan menjalankan instruksi di luar struktur switch.

Untuk menjalankan kode program ini, pengguna cukup menyimpannya dalam file dengan ekstensi `.c`, lalu mengompilasi dan menjalankannya menggunakan kompiler C seperti GCC. Setelah itu, ikuti instruksi yang muncul di layar untuk memilih operasi konversi dan memasukkan bilangan biner yang akan dikonversi ke desimal. Hasil konversi bilangan biner ke desimal akan ditampilkan di layar.



c). Bilangan Desimal ke Octal


    case 3:
        printf("Masukkan bilangan desimal: ");
            scanf("%d", &desimal);

            printf("Hasil konversi ke Octal: %o\n", desimal);
            break;


Penjelasan:

1. Struktur `switch` digunakan untuk memeriksa nilai variabel `menu`, yang merupakan pilihan operasi konversi yang dimasukkan pengguna.

2. Jika `menu` sama dengan 3, program akan meminta pengguna untuk memasukkan bilangan desimal yang akan dikonversi ke oktal.

3. Setelah pengguna memasukkan bilangan desimal, program akan langsung mencetak hasil konversi ke oktal menggunakan specifier format `%o` dari fungsi `printf`.

4. Angka desimal akan langsung dikonversi menjadi representasi oktal dan dicetak ke layar.

5. `break;` menghentikan eksekusi switch case dan menjalankan instruksi di luar struktur switch.

Untuk menjalankan kode program ini, pengguna cukup menyimpannya dalam file dengan ekstensi `.c`, lalu mengompilasi dan menjalankannya menggunakan kompiler C seperti GCC. Setelah itu, ikuti instruksi yang muncul di layar untuk memilih operasi konversi dan memasukkan bilangan desimal yang akan dikonversi ke oktal. Setelah itu, hasil konversi bilangan desimal ke octal akan ditampilkan di layar.


d). Bilangan Octal ke Desimal


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

Penjelasan:

1. Struktur `switch` digunakan untuk memeriksa nilai variabel `menu`, yang merupakan pilihan operasi konversi yang dimasukkan pengguna.

2. Jika `menu` sama dengan 4, program akan meminta pengguna untuk memasukkan bilangan oktal yang akan dikonversi ke desimal.

3. Setelah pengguna memasukkan bilangan oktal, program akan melakukan konversi dari bilangan oktal ke desimal.

4. Program menggunakan perhitungan matematis dalam loop `while` untuk mengonversi bilangan oktal ke desimal.
   - Variabel `base` digunakan untuk melacak posisi digit oktal yang sedang diproses.
   - Setiap digit oktal diambil dengan membagi `octalInput` dengan 10.
   - Digit oktal tersebut kemudian dikalikan dengan `base` dan ditambahkan ke `octal`.
   - `octalInput` kemudian dibagi dengan 10 untuk menggeser digit oktal ke kanan.
   - `base` digandakan dengan 8 setiap iterasi untuk menggeser ke posisi digit oktal berikutnya.

5. Setelah konversi selesai, nilai desimal hasil konversi dicetak ke layar.

6. `break;` menghentikan eksekusi switch case dan menjalankan instruksi di luar struktur switch.

Untuk menjalankan kode program ini, pengguna cukup menyimpannya dalam file dengan ekstensi `.c`, lalu mengompilasi dan menjalankannya menggunakan kompiler C seperti GCC. Setelah itu, ikuti instruksi yang muncul di layar untuk memilih operasi konversi dan memasukkan bilangan oktal yang akan dikonversi ke desimal.


Apabila pengguna memassukkan selain dari angka yang diminta, berikut kode program nya;

     default:
         printf("Pilihan tidak valid. \n");
         break;
     }
     return 0;
     }

Penjelasan:

1. Blok `default` digunakan sebagai penanganan jika pengguna memasukkan pilihan yang tidak valid atau tidak ada dalam menu.

2. Jika pengguna memasukkan pilihan yang tidak valid, program akan mencetak pesan "Pilihan tidak valid." ke layar.

3. `break;` digunakan untuk menghentikan eksekusi dari struktur `switch`.

4. Setelah menangani pilihan tidak valid, program akan melanjutkan untuk mengeksekusi instruksi di luar struktur `switch`.

5. Fungsi `main()` akan mengembalikan nilai 0 yang menandakan bahwa program telah selesai dijalankan tanpa adanya kesalahan.

Untuk menjalankan kode program ini, pengguna cukup menyimpannya dalam file dengan ekstensi `.c`, lalu mengompilasi dan menjalankannya menggunakan kompiler C seperti GCC. Setelah itu, ikuti instruksi yang muncul di layar untuk memilih operasi konversi. Jika pengguna memasukkan pilihan yang tidak valid, program akan mencetak pesan "Pilihan tidak valid." dan kemudian berakhir.
 
====================================================================================================================================================================================


SOAL NOMOR 2:


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


Penjelasan:

1. Program ini bertujuan untuk mengecek apakah tahun yang diinput oleh pengguna merupakan tahun kabisat atau tidak, sesuai dengan aturan yang diberikan.

2. Pengguna diminta untuk memasukkan tahun menggunakan perintah `printf("masukkan tahun :");` dan hasil masukkan akan disimpan dalam variabel `tahun` menggunakan fungsi `scanf("%d", &tahun);`.

3. Program melakukan pemeriksaan sesuai dengan aturan yang diberikan:
   - Jika tahun yang dimasukkan oleh pengguna tidak terdiri dari 4 angka (`tahun >= 1000 && tahun <= 9999`) atau bukan bilangan (`tahun != huruf`), program akan meminta pengguna untuk memasukkan kembali tahunnya.
   - Jika tahun tersebut memenuhi syarat tahun kabisat (sesuai dengan rumus yang diberikan), program akan mencetak "tahun ini adalah tahun kabisat".
   - Jika tidak, program akan mencetak "tahun ini bukan tahun kabisat".

4. `return 0;` mengakhiri program dengan mengembalikan nilai 0.

Untuk menjalankan kode program ini, pengguna cukup menyimpannya dalam file dengan ekstensi `.c`, lalu mengompilasi dan menjalankannya menggunakan kompiler C seperti GCC. Setelah itu, program akan meminta pengguna untuk memasukkan tahun. Pastikan untuk memasukkan tahun yang sesuai dengan aturan yang diberikan agar program dapat berjalan dengan benar. Jika input tidak sesuai, program akan meminta pengguna untuk memasukkan kembali tahunnya.



