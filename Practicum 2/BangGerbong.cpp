#include <stdio.h> 

//bilangan palindrome
//batas 0<=n<2^64-1
int main(){
	unsigned long int n, a, cek, balik=0;
	scanf("%lu", &n);				//54345
	
	cek=n;							
	while(n != 0)
    {
        a = n % 10;        			// nilai terakhir 	5
        n = n / 10;					// Mengurangi digit 5434
        balik = balik * 10 + a;  	// membalik nilai	5 54 543 5434 54345
    }
	if (cek==balik){
		printf("YAK BISA\n");
	} else {
		printf("SALAH BAMBANG\n");
	}
}
