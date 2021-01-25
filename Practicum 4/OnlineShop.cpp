#include <iostream>
#include <string.h>
using namespace std;
//Bismillah Isok
/*t, sum, stok = integer
id = string dengan panjang 5*/
//urutan -> input - banding - cek - syarat - cetak

struct tokped {						//struct 
	char alpha[6];					//untuk char alpha
    int digit;						//untuk integer 
};

void cetak(int cek2){											//variabel cetak
	if (cek2==0){
		cout<<"Barang tidak ditemukan"<<endl;
	} else if (cek2==1){
		cout<<"Data telah diperbarui"<<endl;
	} else if (cek2==2){
		cout<<"Stok habis"<<endl;
	} else if (cek2==3){
		cout<<"Jumlah stok kurang"<<endl;
	} 
}

int main() {
	tokped barang[101];			//deklarasi struct
    int n, sum, cek, cek2;
    cin>>n>>sum;
    char id[n][101];
    int buy[n];
    
    
    for(int i=0; i<sum; i++) {
      	cin>>barang[i].alpha; 										//input kode barang
		cin>>barang[i].digit;										//input stok barang
	}
    for(int j=0; j<n; j++) {
        cin>>id[j]; 												//input kode barang yg dibeli
		cin>>buy[j];												//input jumlah barang yang dibeli
    }
  
   	for(int k=0; k<n; k++) {
       	cek=0;														//inisiasi cek=0
        for(int l=0 ; l<=sum-1 ; l++) {		
			cek2=0;
            if(strcmp(barang[l].alpha, id[k])==0) {					// untuk membandingkan string dengan string yang lainnya
                if(barang[l].digit>=buy[k]) {
                    cek2=1;
                    cetak(cek2);
                    barang[l].digit=barang[l].digit-buy[k];			//memperbarui data, mengurangi
                } else if(barang[l].digit<=0) {						
                    cek2=2;
					cetak(cek2);									//jika <=0 maka stok habis
                } else if(barang[l].digit<buy[k]) {
                    cek2=3;	
					cetak(cek2);									//Jika tidak cukup, maka stok kurang
                } 
                cek++;
            }
        }
        if(cek==0) {
            cetak(cek);										//jika id tidak sama maka tidak ditemukan
        }
    }
    return 0;
}
