#include <stdio.h>
//Bismillah Isok
/*
N <= 100000
-10^19 <= K <= 10^19
*/
void tukar(long int *a, long int *b) {                //fungsi tukar posisi
    long int cek=*a;                     
    *a=*b;
    *b=cek;                                 //menukar bilangan kiri dan kanan
}
int sekat(long int bilangan[], long int kiri, long int kanan) {       //fungsi pembatas tengah antara yang duah diurutkan dengan yang belum
    long int cek2=bilangan[kanan];
    long int cek3=(kiri-1);
    for (int i=kiri; i<kanan; i++) {
        if (bilangan[i] > cek2) {                   //jika bilangan lebih besar dari cek maka i (posisi array) akan bertambah
        cek3++;
        tukar(&bilangan[cek3], &bilangan[i]);          //masuk fungsi tukar
        }
    }
    tukar(&bilangan[cek3+1], &bilangan[kanan]);      //masuk fungsi tukar 
    return (cek3+1);                                  //mengembalikan array selanjutnya
}
void urutan(long int bilangan[], long int kiri, long int kanan) {     //fungsi mengurutkan 
    if (kiri<kanan) {
    int tampung=sekat(bilangan, kiri, kanan);         //berisi bilangan yang mau diurutkan 
    urutan(bilangan, kiri, tampung-1);               //masuk ke fungsi pengurutan dari besar ke kecil
    urutan(bilangan, tampung+1, kanan);               
    }
}
void printbilangan(long int bilangan[], long int ukuran) {    //fungsi print bilangan yang sudah diurutkan
    for (int i=0; i<ukuran; ++i) {
        printf("%ld ", bilangan[i]);                
    }
    printf("\n");
}
//fungsi utama
int main() {
    long int input;
    scanf("%ld", &input);
    long int bilangan[input];
    for(input--; input>=0; input--){
        scanf("%ld", &bilangan[input]);
    }
    long int ukuran=sizeof(bilangan)/sizeof(bilangan[0]);
    urutan(bilangan, 0, ukuran-1);
    printbilangan(bilangan, ukuran);
}