#include<stdio.h> //harus perulangan

int main(){
	int n, angka, cek;
	scanf("%d", &n);						//3
	angka=0;
	cek=0;
	
	//2<=n<=9  
	//Atas
	for(int i=1; i<=n+1; i++) {				//(0 1 2 3) -> n+1
    	for(int j=i; j<=n; j++) {			//spasi
    		printf("  ");
    	}
		for(int k=1; k<=2*i-1; k++) {		//samakaki 
			if (k==i){						//nilai tengah
				cek=angka;
				printf("%d ", cek);
			} else if(k<i) {				//depan
				cek=angka++;
				printf("%d ", cek);	
			} else if(k>i) {				//belakang
				cek=angka--;
				cek=cek-1;
        		printf("%d ", cek);
      		}
		}
    printf("\n");
	}
	
	//Bawah
	for(int p=n; p>=1; p--) {
		for(int q=n; q>=p; q--) {
    		printf("  ");
    	}
    	for(int r=1; r<=2*p-1; r++) {
       		if (r==p){						//nilai tengah
				cek=angka;
				printf("%d ", cek);
			} else if(r<p) {				//depan
				cek=angka++;
				printf("%d ", cek);	
			} else if(r>p) {				//belakang
				cek=angka--;
				cek=cek-1;
        		printf("%d ", cek);
      		}
		}
	printf("\n");
	}
	return 0;
}


