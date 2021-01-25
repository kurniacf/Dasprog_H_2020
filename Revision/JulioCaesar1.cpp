#include<stdio.h>
#include<string.h>
//Bismillah Isok
/*
0 ≤ T ≤ 100
0 < C ≤ 2
0 ≤ K ≤ 26
kalimat tidak lebih dari 100 character
*/
int main(){
	int n;
	scanf("%d",&n);             //input testcase

	int kunci[n][3], panjang, berhenti;
	char kalimat[n][102], cek;
    //input kunci dari perubahan string kalimat
	for(int i=0; i<n; i++){
		scanf("%d", &kunci[i][n-n]);    //input kunci akan menentukan arah penambahan ascii
        scanf("%d", &kunci[i][n-n+1]);
		scanf(" %[^\n]", kalimat[i]);                       //input kalimat yg akan diubah
    }

    //Perhitungan
	for(int i=0; i<n; i++){
		panjang=strlen(kalimat[i]);           //hitung panjang dari kalimat 

		for(int j=0; j<panjang; j++){
			cek=kalimat[i][j];
			if (('Z'< kalimat[i][j] && kalimat[i][j]<'a')|| kalimat[i][j]<'A' || kalimat[i][j]>'z'){    //ASCII<65 atau >122
                berhenti=0;                                                                             //atau antara kapital dan huruf kecil
                if(berhenti==0){
                    continue;               //membatasi nilai yang bukan char 'A' s/d 'Z' dan 'a' s/d 'z'
                }
            }
            //Perhitungan alfabet char berdasar ascii
			if (kunci[i][0]==(n-n+1)){             //jika kunci benar maka melakukan perubahan gerak 
                kalimat[i][j]=kalimat[i][j]-kunci[i][n-n+1];        
            } else if (kunci[i][0]==n-n+2){
				if(kalimat[i][j]+kunci[i][n-n]>32){             //32==ASCII spasi
                    kalimat[i][j]=kalimat[i][j]-26;             //26 huruf alfabet
                }
				kalimat[i][j]=kalimat[i][j]+kunci[i][n-n+1];    //menghitung perpindahan ascii
            }
            //Pengitungan di luar char alfabet
			if (kalimat[i][j]<'A'){                             //jika kurang dari 'A' maka ascii kalimat yg terhitung ditambah 26
                kalimat[i][j]=kalimat[i][j]+26;
            } else if (cek<='Z' && kalimat[i][j]>'Z'){          //penghitungan di daerah antara kapital dan huruf kecil
                kalimat[i][j]=kalimat[i][j]-26; 
            } else if (cek>='a' && kalimat[i][j]<'a'){          //penghitungan di daerah antara kapital dan huruf kecil
                kalimat[i][j]=kalimat[i][j]+26;
            } else if (kalimat[i][j]>'z'){                      //jika lebih dari'z' maka ascii kalimat yg terhitung dikurangi 26
                kalimat[i][j]=kalimat[i][j]-26;
            } 
		}
	}
    //Print
	for(int k=0; k<n; k++){                   //cetak kalimat 
        printf("%s\n", kalimat[k]);
    }
	return 0;
}