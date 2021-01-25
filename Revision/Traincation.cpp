#include<stdio.h>
#include<string.h>
#define batas 4 //string batas adalah 3
//Bismillah Isok
struct traincation {
	char kode[101];
	int harga;
};
int main() {
	int n, paketkota, uang, totalcek=0;
	scanf("%d %d %d", &n, &paketkota, &uang);
    char wisata[batas], cek[n][batas];
	struct traincation stasiunkereta[paketkota];
	for(int i=0; i<paketkota; i++) {                     
		scanf("%s", stasiunkereta[i].kode);    //input kode stasiun
        scanf("%d", &stasiunkereta[i].harga);           //input harga biaya ke stasiun
	}
	for(int i=0; i<n; i++){
		scanf("%s", wisata);                                       //input kode stasiun yang dituju
		for(int j=0; j<paketkota; j++){
			if(strcmp(stasiunkereta[j].kode, wisata)==0){         //Untuk membandingkan nilai kode dengan pilihan wisata
				uang=uang-stasiunkereta[j].harga;               //menghitung uang
				break;                                         //uang yg dimiliki dikurangi harga stasisun
            }
		}
		if(uang>-1 || uang==0){
			strcpy(cek[i], wisata);          //untuk mencopy 
        } else {
            continue;
            goto hitung;
        }
        hitung:totalcek++;                //banyak stasiun yang dapat dkunjungi
	}
	if(totalcek==n){
		printf("Berhasil!\n");          //print jika kode dan harga cocok 
    } else {
        printf("Gagal!\n");             //print jika kode atau harga tidak cocok
    }
	for(int i=0; i<totalcek; i++){
		printf("%s\n", cek[i]);         //print stasiun yang bisa dikunjungi
    }
}