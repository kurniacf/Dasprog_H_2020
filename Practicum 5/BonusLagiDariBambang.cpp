#include <iostream>
using namespace std;
//Bismillah Isok
/*
    1<=T<=100
    1<=T<=100
*/
int main(){
    int n, cek=0;
    cin>>n;                //input test case
    int bilangan[n];        //array bilangan 
    for(int i=0; i<n; i++){
        cin>>bilangan[i];       //input bilangan array
    }
    //perhitungan
    for(int i=0; i<n; i++){ 
        for(int j=i+1;j<n;j++){
            if(bilangan[i]==bilangan[j]){       //jika sama cek=1
                cek=1;
            } 
        }
    }
    //cetak(print)
    if (cek==1){
        cout<<"AWAS"<<endl;
    } else if (cek==0){
        cout<<"AMAN"<<endl;
    }
    return 0;
}
