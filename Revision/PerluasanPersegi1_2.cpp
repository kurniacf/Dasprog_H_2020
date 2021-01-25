#include <iostream>
using namespace std;
//Bismillah Isok
int main(){
    unsigned long n, cek1, cek2;
    cin>>n;                                     //Angka input
    if(n==0){                                   //Jika 0 maka cetak 1
        cout<<"1"<<endl;                    
    } else {
        cek1=2*n+1;                             //Rumus pola aritmatika (2n-1)
        cek2=(cek1*(cek1+1)*(2*cek1+1))/6;    //perluasan persegi dengan jarak 2 kotak
        cout<<cek2<<endl;
    }
    cin.get();
    return 0;
}