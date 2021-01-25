#include<stdio.h>
//Bismillah Isok
int main() {
	int n, a, b;
	scanf("%d", &n);        //Input testcase
	int hasil[n];   
	for(int i=0; i<n; i++){
		hasil[i]=0;
		scanf("%d", &a);        //Input ukuran matriks peta
        scanf("%d", &b);
		char peta[a][b];
		for(int j=0; j<a; j++){
			scanf("%s", peta[j]);    //input peta dengan posisi bom dan orang
        }
		for(int k=0; k<a; k++) {
            for(int l=0; l<b; l++) {
                if(peta[k][l]=='X'){                        //jika ada X --> melambangkan bom air
                    for(int p=k-1; p<=k+1; p++){
                        for(int q=l-1; q<=l+1; q++){
                            if((p>-1 && q>-1) && (a>p && b>q)){
                                if(peta[p][q]=='O'){        //posisi orang
                                    hasil[i]++;             //maka potensi bertambah
                                }
                            }
                        }
                    }
                }	
            }
		}	
	}
	for(int i=0; i<n; i++){
		printf("Case #%d: %d\n", i+1, hasil[i]);        //print case potensi terkena bom semua orang
    }
}
