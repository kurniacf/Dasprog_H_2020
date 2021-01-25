#include <stdio.h>
using namespace std;
//Bismillah Isok
/*
1 <= N <= 100
1 <= X, F <= 100000
*/
int main(){
    int bilangan[101], n, cari, cek=0;
    scanf("%d", &n);                             //input testcase
    for (int  i=0; i<n; i++){
        scanf("%d", &bilangan[i]);             //input bilangan array
    }
    scanf("%d", &cari);                       //input bilangan yang mau dicari
    //perulangan cek cari
    for(int  j=0; j<n; j++){
        if(bilangan[j]==cari){
            printf("Ahh Mantab !!!\n");       //print jika array sama dengan bilangan yang dicari
            break;
        }
        cek=j+1;
    }
    if(cek==n){                                    //syarat 
        printf("Jan Maen-Maen !!!\n");        //print jika array tidak sama dengan bilangan yang dicari
    }
    return 0;
}