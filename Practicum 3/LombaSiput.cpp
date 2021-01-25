#include <stdio.h> 
//bismillah isok 
//Batas 
  /*1<= t <=100
  	0<= n <=30 */
  
int rocky(int n);

int main() { 
    int n, jarak;
	scanf("%d", &n); 					//input jumlah test case
	for (int i=0; i<n; i++) {
		scanf("%d", &jarak);			//input jarak yg diingin
		printf("%d\n", rocky(jarak));	//print
	}
    return 0; 
} 

int rocky(int cek) { 
	if (cek==0) return 1; 				//cek==0 mengembalikan nilai 1
    if (cek<=2) return cek; 			//cek<=2 mengembalikan nilai cek
    
    int a=1, b=1, c=2, hasil;			//inisiasi
    for (int i=3; i<=cek; i++) { 		//contoh : cek->4   i=3
        hasil=a+b+c; 					//hasil=1+1+2
        a=b; 							//a=1
        b=c; 							//b=2
        c=hasil; 						//c=4
    } 
    return hasil; 
} 

/*		
 		input : 4
 		1-1-1-1 	= 4
		1-1-2		= 4
		1-2-1		= 4
		1-3			= 4
		2-1-1		= 4
		2-2			= 4
		3-1			= 4
*/
