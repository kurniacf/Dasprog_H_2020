#include<stdio.h>
#include<string.h>
//Bismillah Isok
void cekukuran(int panjangcari, int panjangkata){    //fungsi cek ukuran panjang
    if(panjangcari>panjangkata){
		printf("gaada\n"); }
}
int main(){
    int n, panjangkata, panjangcari, tampung;
    char kata[100], cek1[100];
	scanf("%[^\n]",kata);                  //input kata awal 
	panjangkata=strlen(kata);               //hitung panjang kata
	scanf("%d",&n);                         //input banyak kata yang mau dicari
	char cari[n][100];                      //inisiasi char kata yang dicari
	for(int i=0; i<n; i++){                 //input kata yang dicari
        scanf("%s",cari[i]);
    }
    //Hitung dan bandingkan string
	for(int j=0; j<n; j++){
        tampung=0;              //akan kembali ke nol lagi setiap perbandingan kata cari
		panjangcari=strlen(cari[j]);        //hitung panjang kata yang dicari
        cekukuran(panjangcari, panjangkata);    //fungsi cek ukuran
		do{
			strncpy(cek1, kata+tampung, panjangcari);       //copy kata awal dan kata cari, serta panjangnya
			cek1[panjangcari]=NULL;             
			if(strcmp(cek1,cari[j])==0){            //bandingkan cek dan kata cari
				printf("ada\n");                    //print ada jika sesuai
				break;
            } else if(tampung+panjangcari==panjangkata){
                printf("gaada\n");                  //print gaada jika tidak sesuai
            }
			tampung++;
		} while(tampung<(panjangkata+1)-panjangcari);   //keluar dari perulangan
	} return 0;
}