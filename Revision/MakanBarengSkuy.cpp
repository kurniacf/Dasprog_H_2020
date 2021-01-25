#include<stdio.h>
//Bismillah Isok
/*
1 ≤ T ≤ 20 1 ≤ L, M, D ≤ 30
*/
// pemanggilan fungsi
int fpb(int p, int q);
int kpk(int tanggal[], int ukuran);
int tanggalmuda(int tanggal, int ketemu, int batas);
int main() {
    //Input
	int n;
	scanf("%d",&n);                         //input testcase
	int tanggal[n][3], cek;                 //3 orang
    //input tanggal 
	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			scanf("%d", &tanggal[i][j]);}        //Input tanggal tiap orang
	}
    //print cetak
	for(int i=0; i<n; i++){
		cek=kpk(tanggal[i], 3);                             //fungsi untuk mencari kpk
		cek=tanggalmuda(cek%30, cek%30, cek%30);    //fungsi untuk mencari tanggal termuda, di modulo 30 (asumsi 1 bulan 30 hari)
		if(cek<=0) {                                //jika cek <= 0 maka cetak impos, karena tidak ditemukannya tanggal yang sesuai
            printf("imposibruuu!\n");
        } else{                                     //jika bukan maka cetak cek sebagai tanggal pertemuan
            printf("%d\n",cek);
        }	
	}
	return 0;
}
int fpb (int p, int q) {                                          //fungsi fpb guna untuk menentukan kpk
	if(q>0) {
        return fpb(q, p%q);
    }
	else {
        return p;
    }
}
int kpk (int tanggal[], int ukuran) {                     //Fungsi KPK mencari hari dan tanggal yang sama diantara 3 org
	int cek=tanggal[0];    
	for (int i=1; i<ukuran; i++) {
		cek=tanggal[i]*cek/fpb(cek, tanggal[i]);           
    }
	return cek;                                           //mengembalikan nilai cek             
}
int tanggalmuda(int tanggal, int ketemu, int batas) {      //fungsi mencari tanggal muda
	if(ketemu==15) {                                    //Batas tanggal 15
        return 0;
    }
	if(tanggal==0){                                     //jika tanggal==0 menandakan di bawah tanggal 15, maka
        return batas;                                   //mengembalikan nilai batas
    }
    if (batas<tanggal){                                //jika batas <tanggal maka batas berisi batas itu sendiri
        batas=batas;
    } else {                                            //jika bukan maka batas beriri tanggal sisa
        batas=tanggal;
    }
	return tanggalmuda((tanggal+ketemu)%30, ketemu, batas);         //di modulo 30, asumsi 1 bulan 30 hari
}