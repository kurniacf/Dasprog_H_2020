#include <stdio.h>
//Bismillah isok
  /*0 < N <= 100
	0 < Bilangan <=10^9 */

int fpb(int a,int b);

int main() {
	int n, a[100];							
	scanf("%d", &n);						//input test case
 	int cek=a[0];							//array kosong untuk mengecek	
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);					//input bilangan yg diinginkan
	}
	
	for(int i=0; i<n; i++) {
	    cek = fpb(cek, a[i]);				//memanggil fungsi fpb
	}
	printf("%d\n", cek);					//print
   	return 0;
}

//Fungsi FPB 
int fpb(int m,int n) {						//fungsi fpb
	int tampung=0;							//inisiasi
	while(n>0) {							//jika bilangan kedua lebih besar >0
		tampung=n;							// ex: tampung=9
		n=m%n;								// n=21%9 -> 3
		m=tampung;							// m=3
	}
   	return m;
}
