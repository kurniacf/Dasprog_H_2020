#include<stdio.h>
#include<string.h>
//Bismillah Isok
/*
-(10^1000) <= A <= 10^1000
-(10^1000) <= B <= 10^1000
*/
void perkalian(int panjang1, int panjang2, int panjanggabung, char angka1[], char angka2[], char angkagabung[]){  //fungsi penghitungan
	for(int j=panjang2-1; j>= 0; j--){
		if(angka2[j]=='-'){                     //jika ada negatif dalam angka2 maka break 
            break;
        }
		for(int k=panjang1-1; k>=0; k--){
			if(angka1[k]=='-'){                 //jika ada negatif dalam angka1 maka break
                break;
            }
			angkagabung[j+k+1]=angkagabung[j+k+1]+(angka1[k]-'0')*(angka2[j]-'0');//menghitung perkalian angka1 dan angka 2 positif
        }                                                                         //dengan menghilangkan(abai) tanda negatif
		for(int l=panjang1+j+1; l>0; l--){
			if(angkagabung[l]>9){                                               //perhitungan perkalian
				angkagabung[l-1]=angkagabung[l-1]+(angkagabung[l]/10);
				angkagabung[l]=angkagabung[l]%10;
            }
        }
	}
}
int main(){
	char angka1[1000], angka2[1000], angkagabung[10000];
    int panjang1, panjang2, panjanggabung, cek=1;
	scanf("%s", angka1);                //input angka1
	scanf("%s", angka2);                //input angka2
	panjang1=strlen(angka1);            //hitung panjang angka1
    panjang2=strlen(angka2);            //hitung panjang angka2
    panjanggabung=panjang1+panjang2+1;  //hitung panjang gabungan
    perkalian(panjang1, panjang2, panjanggabung, angka1, angka2, angkagabung);      //fungsi hitung
    //Cetak print 
	if(angka1[0]=='-'|| angka2[0]=='-'){            //jika salah satu ada negatif
		if(angka1[0]!=angka2[0]){                   //maka cetak '-'
            printf("-");
        }
    }
	for(int i=0; i<panjanggabung-1; i++){
		if(angkagabung[i]==0 && cek==1){    
            continue;
        }
		printf("%d",angkagabung[i]);                //print angka yang telah dihitung
		cek=0;
    }
	printf("\n");
	return 0;
}