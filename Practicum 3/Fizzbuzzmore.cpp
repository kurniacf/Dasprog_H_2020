#include <stdio.h>

int ubah(int kpk[],char huruf[][21],int m,int n,int bil);

int main(){
	int m, n, bil=1;									//inisiasi bilangan =1 karena dimulai dari satu
	scanf("%d", &m);									//input test case yg diinginkan
	int kpk[m];							
	char huruf[m][21];									//variable huruf menandakan berjumlah m buah dengan 20 batas huruf + 1 huruf\n

	for(int i=0 ; i<m ; i++){   						//perulangan untuk input angka dan huruf
		scanf("%d", &kpk[i]);							//input angka yg ingin diubah
		//fgets (huruf [i], 21, stdin);
		//gets(huruf);
		scanf(" %[^\n]", huruf[i]); 					//input huruf yg ingin dimasukkan 
		}

	scanf("%d", &n);									//input batas dari looping 
	ubah(kpk , huruf , m , n , bil);			
	
	
	return 0;
}

int ubah(int kpk[],char huruf[][21],int m,int n,int bil){
	int cek=0, cek2=bil+1;

	for(int i=0 ; i<m ; i++){
		
		if(bil % kpk[i]==0) {
			++cek;  										//agar bilangan bisa urut ke bawah saat pengecekan
			printf("%s", huruf[i]);  						//print huruf yang di mau
        }
    } 
    
    if(cek<=0){  											//jika cek <= 0, maka ia akan mencetak bilangan asli 
            printf("%d", bil);
             
    }
    printf("\n");											//biar output turun atas ke bawah/vertikal
	
	if(bil<n){ 												//jika bilangan < batas n maka program berlanjut
	  	ubah(kpk , huruf , m , n , cek2);  					//
    }
    return 0;
}


