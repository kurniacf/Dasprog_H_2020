#include <stdio.h> 
#include <math.h>
#include <stdlib.h>

// Bismillah Isok
// Program untuk mencari luas persegi panjang maksimum dalam histogram
// Hitung satu per satu batang dan luas tiap batang persegi
// Cari - Eliminasi - Susun - Hitung - Gabung

// Fungsi Pencarian nilai
// ----------------------
int max(int x, int y, int z) {							//Fungsi untuk mencari 3 bilangan terbesar
	int cek1, cek2;										// 4 3 5
	if (x>y){											//mencari nilai terbesar 
		cek1=x;
	} else if (x<y){
		cek1=y;
	}
	if (cek1>z){
		cek2=cek1;
	} else if (cek1<z){
		cek2=z;
	}
	return cek2;										//mengembalikan nilai terbesar //5
}

int min(int *tembok, int a, int b) {					//mencari dua bilangan minimal dalam array (perbandingan)
	if (a<0) {
		return b; 
	} else if (b<0) {									//agar tidak melebihi batas
		return a;	
	} 
	if (tembok[a] < tembok[b]){							// 0 5 --> 0	nilai terkecil
		return a;										
	} else return b;									// 5 0 --> 0	
} 

int tengah(int m, int n) { 								//fungsi mencari nilai tengah
	int median;
	median = m+(n-m)/2;									//rumus mencari nilai tengah
	return median; 
} 

// fungsi rumus penghitungan
// ------------------------
// fungsi mendapat nilai minimum sesuai range
// ja=jarak awal, jz=jarak akhir, ba=batas awal, bz=batas akhir
int periksa(int *tembok, int *seg, int ba, int bz, int ja, int jz, int nilai) {	//eliminasi, seg=segmen
  	
  	if (ja<=ba && jz>=bz) 				//mencari nilai dalam kotak
  		return seg[nilai]; 
	if (bz<ja || ba>jz) 				//mencari nilai diluar kotak
		return -1; 						//mengurangi nilai kotak sisa (ex : panjang batang 3 4 --> 4-1 = 3 3 --> 6)

	int mid = tengah(ba, bz); 
	int a=2*nilai+1, b=2*nilai+2;
	
	//min(int *tembok, int a, int b)
	return 	min(tembok, periksa(tembok, seg, ba, mid, ja, jz, a), periksa(tembok, seg, mid+1, bz, ja, jz, b)); 	//mengembalikan nilai ke fungsi min					
} 

int panggil(int *tembok, int *seg, int n, int ja, int jz) {		//memanggil nilai minimum dari fungsi diatas
 
	if (ja<0 || jz>n-1 || ja>jz) {				//periksa nilai input yang salah
		printf("\n");
	} 
	return periksa(tembok, seg, 0, n-1, ja, jz, 0); 
} 

int tampung(int tembok[], int ba, int bz, int *seg, int si) { 			//fungsi untuk menyimpan bilangan di array(tampung)

	if (ba == bz) 				//jika ada nilai di array maka simpan
	return (seg[si] = ba); 
 
	int mid = tengah(ba, bz); 												//jika ada lebih dari satu nilai di array maka ulang dari kiri
	seg[si] = min(tembok, tampung(tembok, ba, mid, seg, si*2+1), 		//bagian kanan menyimpan dua kali nilai sebagai pembatas
					tampung(tembok, mid+1, bz, seg, si*2+2)); 
	return seg[si]; 
} 

int *susun(int tembok[], int n) {		//fungsi untuk memanggil fungsi 'susun', berguna menyimpan alamat dan memori
 
	// Menentukan banyak memori yg digunakan
	int x = (int)(ceil(log2(n))); 			//mengembalikan bilangan bulat terkecil yang lebih besar dari atau sama dengan x
	int hitung = 2*pow(2, x)-1;			//Ukuran maximum array
	int *seg;
	seg = (int*) malloc(hitung * sizeof(int));
	//int *seg = new int[max_size]; 				

	tampung(tembok, 0, n-1, seg, 0); //mengsisi memori yang digunakan

	return seg; //mengembalikan nilai yang dibuat (pengukuran persegi)
} 

// menggunakan 'st' untuk mencari nilai minimum dalam array
int kotakmax(int *tembok, int *seg, int p, int q, int r) { 			//fungsi rekursif untuk mencari luas maksimum
	
	if (q>r) {														//berfungsi untuk tidak loop terus	
		//INT_MIN = -2147483648
		return INT_MIN;
	} 
	if (q==r) {														//memasukkan nilai ke array
		return tembok[q];
	} 

	int m = panggil(tembok, seg, p, q, r); 							//memanggil fungsi 'panggil'
	int middle=(r-q+1);
	//3 cara (hitung kiri, hitung kanan, hitung tengah) dalam range min
	//max(int x, int y, int z)
	return max(kotakmax(tembok, seg, p, q, m-1), kotakmax(tembok, seg, p, m+1, r), middle*(tembok[m])); 
} 

//fungsi untuk menemukan nilai max 
int areamax(int tembok[], int n) { 					//n = memanggil input test case, tembok[]=memanggil array
	int *seg=susun(tembok, n); 
	return kotakmax(tembok, seg, n, 0, n-1); 	//fungsi rekursif untuk menemukan nilai maksimum
} 

int main() { 
	int n;
	scanf("%d", &n);
	int tembok[n];

	for(int i=0;i<n;i++){
		scanf("%d", &tembok[i]);
    }
	//int hist[] = {6 2 5 4 5 1 6}; 
	printf("%d", areamax(tembok, n));
	return 0; 
}
