#include <stdio.h>
//Bismillah Isok
int main(){
    int n, air=0, kiri=0, kanan=1;
	scanf("%d", &n);                   //input testcase
	int tinggi[n] ; 
	for(int i=0; i<n; i++) {
        scanf("%d", &tinggi[i]);             //input tinggui tembok bendungan
    }
    //PERHITUNGAN
	for(int i=2; i<n; i++) {
		if (tinggi[kanan]<tinggi[i]) {                  //Membandingkan nilai kanan dengan tinggi tembok
			kanan=i;                                    
        }   
		if (tinggi[kanan]>=tinggi[kiri] || i==n-1) {       //jika tembok kanan lebih besar sama dengan tembok kiri maka
            if (tinggi[kiri]>tinggi[kanan]){               //masuk syarat jika tembok kiri lebih besar dari kanan
                air=air+((kanan-kiri-1)*tinggi[kanan]);       //air akan bertambah dengan patokan tinggu tembok kanan
            } else {
                air=air+(tinggi[kiri]*(kanan-kiri-1));            //air akan bertambah dengan patokan tinggi tembok kiri 
            }
			for(int j=kiri+1; j<kanan; j++) {               //jika ukuran sama atau tidak seimbang 
				air=air-tinggi[j];                          //ukuran air dikurangi
            }
			kiri=kanan;                                     //menukar posisi 
			kanan++;
			i=kanan;
		}
	}
	printf("%d\n", air);                                    //print air
}