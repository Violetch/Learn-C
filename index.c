#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <math.h>

// int main() {
//     int number = 10;
//     float pi = 3.14;
//     char character = 'V';
//     char name[] = "Violet evergarden";
//     printf("Number: %d\n", number);
//     printf("Pi: %f\n", pi);
//     printf("Character: %c\n", character);
//     printf("name: %s\n", name);
//     return 0;
// }

// int main() {
//     double angka, pangkat;
    
//     printf("Masukkan angka: ");
//     scanf("%lf", &angka);

//     printf("Masukkan pangkat: ");
//     scanf("%lf", &pangkat);

//     double result = pow(angka, pangkat);

//     printf("%.2f di pangkat %.2f = %.2f\n", angka, pangkat, result);

//     return 0;
// }

// int main () {
//     float result, dolar;
//     const float rupiah = 16311;

//     printf("Dolar: ");
//     scanf("%f", &dolar);

//     result = dolar * rupiah;

//     printf("Rupiah: %f\n", result);
//     return 0;
// }

// int main () {
//     int a = 12, b = 2, c = 3, d = 4;

//     printf("%d %% %d = %d\n", a, b, a % b);
//     printf("%d - %d = %d\n", a, c, a - c);
//     printf("%d + %d = %d\n", a, b, a + b);
//     printf("%d / %d = %d\n", a, d, a / d);
//     printf("%d / %d * %d + %d = %d\n", a, d, d, a, d, a / d * d + a % d);
//     printf("%d %% %d / %d * %d = %d\n", a,d,d,a,a,c,a % d / d * a - c);
//     return 0;
// }

// #define PI 3.14f

// int main() {
//     float r, luas;

//     printf("Masukkan jari-jari lingkaran: ");
//     scanf("%f", &r);

//     luas = PI * r * r;

//     printf("Luas lingkaran dengan jari-jari %.2f adalah: %.2f\n", r, luas);

//     return 0;
// }


// int main() {
//     char name[30];
//     char nrp[30];

//     printf("Input your name: ");
//     fgets(name, sizeof(name), stdin);

//     printf("Input your nrp: ");
//     fgets(nrp, sizeof(nrp), stdin);

//     printf("\n");
//     printf("Your name: %s", name);
//     printf("Your nrp: %s\n", nrp);
    
//     return 0;
// }


// int main() {
//     int var_bulat = 32767;
//     float var_pecahan1 = 339.2345678f;
//     double var_pecahan2 = 4567e+40;
//     char var_karakter = 'G';
//     bool var_logika = true;

//     std::cout << "Nilai dari var_bulat: " << var_bulat << std::endl;
//     std::cout << "Nilai dari var_pecahan1: " << var_pecahan1 << std::endl;
//     std::cout << "Nilai dari var_pecahan2: " << var_pecahan2 << std::endl;
//     std::cout << "Nilai dari var_karakter: " << var_karakter << std::endl;
//     std::cout << "Nilai dari var_logika: " << var_logika << std::endl;

//     return 0;
// }

// int main() {
//     double uang_dolar;
//     double uang_rupiah;
//     const int kurs = 11090;

//     // Input uang dalam Dolar AS
//     std::cout << "Masukkan jumlah uang dalam Dolar AS: ";
//     std::cin >> uang_dolar;

//     // Proses konversi
//     uang_rupiah = uang_dolar * kurs;

//     // Output uang Rupiah
//     std::cout << "Jumlah uang dalam Rupiah: " << uang_rupiah << " IDR" << std::endl;

//     return 0;
// }

// int main() {
//     long juml_uang = 189000;
    
//     // Output
//     std::cout << "Jumlah uang dalam Rupiah: " << juml_uang << std::endl;
//     std::cout << "Pecahan uang yang dibutuhkan:" << std::endl;
    
//     // Pecahan 100000
//     int ratusanribu = juml_uang / 100000;
//     juml_uang %= 100000;
//     std::cout << "100000: " << ratusanribu << " Lembar" << std::endl;
    
//     // Pecahan 50000
//     int limapulhribu = juml_uang / 50000;
//     juml_uang %= 50000;
//     std::cout << "50000: " << limapulhribu << " Lembar" << std::endl;
    
//     // Pecahan 20000
//     int duapulhribu = juml_uang / 20000;
//     juml_uang %= 20000;
//     std::cout << "20000: " << duapulhribu << " Lembar" << std::endl;
    
//     // Pecahan 10000
//     int sepuluhribu = juml_uang / 10000;
//     juml_uang %= 10000;
//     std::cout << "10000: " << sepuluhribu << " Lembar" << std::endl;
    
//     // Pecahan 5000
//     int limaribu = juml_uang / 5000;
//     juml_uang %= 5000;
//     std::cout << "5000: " << limaribu << " Lembar" << std::endl;
    
//     // Pecahan 2000
//     int duaribu = juml_uang / 2000;
//     juml_uang %= 2000;
//     std::cout << "2000: " << duaribu << " Lembar" << std::endl;
    
//     // Sisa uang
//     if (juml_uang > 0) {
//         std::cout << "Sisa uang yang tidak bisa dibagi: " << juml_uang << " Rupiah" << std::endl;
//     }

//     return 0;
// }

// int main() {
//     int a = 12, b = 2, c = 3, d = 4;
    
//     std::cout << "a + b = " << a + b << std::endl;
//     std::cout << "a - b = " << a - b << std::endl;
//     std::cout << "a * b = " << a * b << std::endl;
//     std::cout << "a / d = " << a / d << std::endl;
//     std::cout << "a % d = " << a % d << std::endl;
//     std::cout << "a / d * a + a % d / d * a - c = " << a / d * a + a % d / d * a - c << std::endl;

//     return 0;
// }

// int main() {
//     double a, b, c;
//     double diskriminan;
    
//     // Input nilai a, b, dan c
//     std::cout << "Masukkan nilai a: ";
//     std::cin >> a;
//     std::cout << "Masukkan nilai b: ";
//     std::cin >> b;
//     std::cout << "Masukkan nilai c: ";
//     std::cin >> c;
    
//     // Menghitung diskriminan
//     diskriminan = (b * b) - (4 * a * c);
    
//     // Menampilkan hasil
//     std::cout << "Diskriminan dari persamaan kuadrat adalah: " << diskriminan << std::endl;
    
//     return 0;
// }

// int main() {
//     float celsius, fahrenheit;

//     printf("Masukkan suhu dalam Celsius: ");
//     scanf("%f", &celsius);

//     fahrenheit = (celsius * 1.8) + 32;

//     printf("Suhu dalam Fahrenheit adalah: %.2f\n", fahrenheit);

//     return 0;
// }

// int main() {
//     char karakter;

//     printf("Masukkan sebuah karakter: ");
//     scanf(" %c", &karakter); 

//     printf("Karakter yang Anda masukkan adalah: %c\n", karakter);

//     return 0;
// }

// int main() {
//     float gaji_pokok, total_gaji;
//     int jam_kerja_harian;
//     float tunjangan_istri_suami, tunjangan_anak, thr, tunjangan_transport, polis_asuransi;
    
//     printf("Masukkan gaji pokok: ");
//     scanf("%f", &gaji_pokok);
    
//     printf("Masukkan jam kerja per hari (dalam jam): ");
//     scanf("%d", &jam_kerja_harian);
    
//     tunjangan_istri_suami = 0.10 * gaji_pokok; 
//     tunjangan_anak = 0.05 * gaji_pokok; 
//     thr = 5000;
//     tunjangan_transport = 3000 * (jam_kerja_harian * 30);     

//     polis_asuransi = 20000;
    
//     float pajak = 0.15 * (tunjangan_istri_suami + tunjangan_anak); 
    
//     float pendapatan_kotor = gaji_pokok + tunjangan_istri_suami + tunjangan_anak + thr + tunjangan_transport;
    
//     total_gaji = pendapatan_kotor - pajak - polis_asuransi;

//     printf("\n==== Rincian Pendapatan ====\n");
//     printf("Gaji Pokok: Rp. %.2f\n", gaji_pokok);
//     printf("Tunjangan Istri/Suami: Rp. %.2f\n", tunjangan_istri_suami);
//     printf("Tunjangan Anak: Rp. %.2f\n", tunjangan_anak);
//     printf("THR: Rp. %.2f\n", thr);
//     printf("Tunjangan Transport: Rp. %.2f\n", tunjangan_transport);
//     printf("Pajak: Rp. %.2f\n", pajak);
//     printf("Polis Asuransi: Rp. %.2f\n", polis_asuransi);
//     printf("------------------------------\n");
//     printf("Total Pendapatan Bersih: Rp. %.2f\n", total_gaji);

//     return 0;
// }

// int main() {
//     int total_tiket; 
//     int tiket_dibayar;  
//     int tiket_bonus; 
//     int sisa_tiket; 

//     printf("Masukkan jumlah tiket yang ingin dibeli: ");
//     scanf("%d", &total_tiket);

//     tiket_dibayar = (total_tiket / 3) * 2;
//     tiket_bonus = total_tiket / 3;
//     sisa_tiket = total_tiket % 3;

//     tiket_dibayar += sisa_tiket;

//     printf("Beli %d tiket, maka:\n", total_tiket);
//     printf("Tiket yang harus dibayar: %d tiket\n", tiket_dibayar);
//     printf("Bonus tiket: %d tiket\n", tiket_bonus);
//     printf("Total harga: Rp. %d\n", tiket_dibayar * 50000);

//     return 0;
// }

int main() {
    int number;
    printf("Masukkan angka: ");
    scanf("%d", &number);

    if(number > 0) {
        printf("%d bilangan positif\n", number);
    } else if(number == 0) {
        printf("%d bilangan netral\n", number);
    } else if(number < 0) {
        printf("%d bilangan negatif\n", number);
    } else {
        printf("Tolong masukkan angka\n");
    };

    return 0;
}

// int main() {
//     int i;
//     for (i = 1; i <= 10; i++) {
//         printf("Angka ke-%d\n", i);
//     }

//     return 0;
// }

// int main() {
//     int i = 1;
//     int a;

//     printf("Masukkan angka maximal: ");
//     scanf("%d", &a);

//     while(i <= a) {
//         printf("Angka ke-%d\n", i);
//         i++;
//     }

//     return 0;
// }

// int main() {
//     int i = 1;
//     do{
//         printf("Tebak angka: ");
//         scanf("%d", &i);
//         if(i != 7) {
//             printf("Tebakan mu salah coba lagi\n");
//         };
//     } while (i != 7);
//     printf("Selamat tebakan anda benar");

//     return 0;
// }   