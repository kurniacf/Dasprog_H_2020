#include<stdio.h>
//Bismillah Isok
//mencari jumlah koin maksimal yang didapatkan dari setengah koin (template quicksort)

void tukar( int *a ,  int *b);
void urutsort( int *angka, int n,  int kiri,  int kanan);

int main() {
    int n;
    scanf("%d", &n);                //input test case
    int angka[n], hasil=0, banyak=0, cek1=0, penanda=0;
    
    //Input angka dari koin-koin
    for(int i=0 ; i<n ; i++) {
        scanf("%d", &angka[i]);     //input
        hasil=hasil+(angka[i]);     //input jumlah nilai angka koin secara keseluruhan
    }

    urutsort(&angka[0] , n, 0, n-1);  //masuk ke fungsi urut sort(quicksort)
    int tengah=hasil/2;
    while(cek1<=tengah) {             //mencari banyak koin untuk mendapat nilai maksimal dari setengah koin
        cek1=cek1+angka[penanda];
        penanda++;
        banyak++;
    }
    printf("%d ", banyak);          //print
}

void tukar( int *a ,  int *b){    //fungsi tukar angka
    int tampung=*a;
    *a=*b;
    *b=tampung;             //tukar
}
void urutsort( int *angka, int n,  int kiri,  int kanan){       //fungsi pengurutan
    int cek=kiri, posisi=kiri;          //inisiasi
    if(kiri>=kanan){
        return;
    }
    //PARTISI (pembagi)
    for(int i=kiri+1 ; i<=kanan ; i++){
        if((*(angka+cek))>(*(angka+i))) {    //jika angka cek lebih besar daripada angka i
            posisi++;                           //posisi akan bergeser dan bertambah
            tukar((angka+i), (angka+posisi));   //masuk ke nilai tukar untuk menukar angka koin
        }
    }
    tukar((angka+cek), (angka+posisi));   //masuk ke nilai tukar untuk menukar posisi dan nilai
    urutsort(angka, n, kiri, posisi-1);     //cek bagian array angka posisi kiri
    urutsort(angka , n , posisi+1 , kanan); //cek bagian array angka posisi kanan
}