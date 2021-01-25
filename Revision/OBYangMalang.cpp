#include<stdio.h>
#include<string.h>
//Bismillah Isok
int main(){
	int n;
	scanf("%d",&n);                //Input Testcase
    int panjang, ukuran=0;         //Inisiasi
	char nama[n][1000], cek;
	for(int i=0; i<n; i++){
		scanf(" %[^\n]", nama[i]);      //Input nama sesuai test case
	}
	for(int j=0; j<n; j++){
		panjang=strlen(nama[j]);        //Mengitung panjang nama string
        if(ukuran<panjang){             //Jika ukuran kurang dari panjang string maka ukuran=panjang
            ukuran=panjang;
        } else {
            ukuran=ukuran;            //jika bukan maka nilai panjang adalah panjang itu sendiri
        }
		for(int k=0; k<panjang-1; k+=2){
			if(nama[j][k]==' '){        //menskip jika bertemu whitespace
				k=k-1;                  
				continue;
            } else if(nama[j][k+1]!=' ') {    //membalik nilai string
				cek=nama[j][k];
				nama[j][k]=nama[j][k+1];
				nama[j][k+1]=cek;	
			} else {
                continue;
            }
		}
	}
    //Cetak Bingkai
	for(int l=0; l<=ukuran+3; l++){             //Bingkai bagian atas
        printf("*");                        
        if(l==ukuran+3){
            printf("\n");
        }
    }
	for(int i=0; i<n; i++){                     //Bingkai bagian kanan & kiri
		panjang=strlen(nama[i]);
		printf("* %s",nama[i]);
		for(int j=panjang; j<ukuran; j++){
            printf(" ");
        }
		printf(" *\n");
	}
	for(int m=0; m<=ukuran+3; m++){             //Bingkai bagian bawah
        printf("*");
    }   
    printf("\n");
	return 0;
}
