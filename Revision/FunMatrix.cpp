#include<stdio.h>
int main() {
	int n;
    char aksi[11], arahan, tombol;
	scanf("%d",&n);             //input testcase
	int matriks[n][n], matriksbaru[n][n];
	for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &matriks[i][j]);                //input matriks 
            matriksbaru[i][j]=matriks[i][j];            //masukkan matriks yg kita input ke array matriks untuk diolah
        }
    }
	while(1) {
		scanf(" %[^\n]", aksi);                         //input aksi untuk menjalankan
		arahan=aksi[0];
		tombol=aksi[2];
		if(arahan=='z') {                       //Jika input z maka keluar dari perulangan
            break;
        } else if (tombol=='z'){
            break;
        }
		if(arahan=='r') {                           //untuk berotasi atau berputar 
			if(tombol=='l'){                 //berputar ke kiri
				for(int i=0; i<n; i++){
                    for(int j=0; j<n; j++){
                        matriksbaru[i][j]=matriks[j][n-i-1];
                    }
                }
            } else if(tombol=='r'){                        //berputar ke kanan
				for(int i=0; i<n; i++){
                    for(int j=0; j<n; j++){
                        matriksbaru[i][j]=matriks[n-j-1][i];
                    }
                }
            } else {
				printf("YANG BENER WOY!\n");            //selain huruf "r l f h v z", cetak YANG BENER WOY
				continue;
            }
        } else if(arahan=='f') {                //untuk arah flip atau dibalik
			if(tombol=='v'){                        //tombol untuk arah vertikal
				for(int i=0; i<n; i++){
                    for(int j=0; j<n; j++){
                        matriksbaru[i][j]=matriks[n-i-1][j];
                    }
                }
            } else if(tombol=='h'){                     //tombol untuk arah horizontal
				for(int i=0; i<n; i++) {
                    for(int j=0; j<n; j++) {
                        matriksbaru[i][j]=matriks[i][n-j-1];
                    }
                }
            } else {
				printf("YANG BENER WOY!\n");    //selain huruf "r l f h v z", cetak YANG BENER WOY
				continue;
            }
        } else{
			printf("YANG BENER WOY!\n");    //selain huruf "r l f h v z", cetak YANG BENER WOY
			continue;
        }
		for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                matriks[i][j]=matriksbaru[i][j];    //kembalikan nilai matriks
                printf("%d", matriks[i][j]);        //print matriks
                if(j!=n-1){
                    printf(" ");        //ptint spasi 
                }
            }
            printf("\n");
        }
	}
	return 0;
}
