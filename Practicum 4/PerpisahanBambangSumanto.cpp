#include <iostream>
using namespace std;
//Bismillah Isok

struct volume{									//struct
	int panjang, lebar, tinggi;					
};

int main (){
	volume v;									//memanggil volume 
	int n;		
	cin>>n;
	int tmp[n];
	for (int i=0; i<n; i++){
		cin>>v.panjang;							
		cin>>v.lebar;
		cin>>v.tinggi;
		tmp[i]=v.panjang*v.lebar*v.tinggi;			//hitung volume
		
	}
	for (int j=n-1; j>=0; j--){
		cout<<tmp[j]<<endl;						//print
	}
	
	
}
