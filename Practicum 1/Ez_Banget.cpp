#include <iostream>
#include <iomanip>
using namespace std;


int main(){
  
  	float c, r, f, k, n;
  	char x, y;
  	cin>>n;
  	cin>>x;
  	cin>>y;
  	
  
  	
	if( x == 'C'){
		if (y=='R'){
			r = n*0.8;
			cout<<fixed<<setprecision(2)<<r<<" R"<<endl;
		} else if (y=='F'){
			f = (n*9)/5+32;
			cout<<fixed<<setprecision(2)<<f<<" F"<<endl;
		} else if (y=='K'){
			k = n+273;
			cout<<fixed<<setprecision(2)<<k<<" K"<<endl;
		} else {
			cout<<"Jenis temperatur yang dimasukkan tidak ada"<<endl;
		}         
    } else if (x == 'R'){
      	if (y== 'C'){
			c = n*1.25;
			cout<<fixed<<setprecision(2)<<c<<" C"<<endl;
		} else if (y=='F'){
			f = (n*9)/4+32;
			cout<<fixed<<setprecision(2)<<f<<" F"<<endl;
		} else if (y=='K'){
			 k = (n*1.25)+273;
			cout<<fixed<<setprecision(2)<<k<<" K"<<endl;
		} else {
			cout<<"Jenis temperatur yang dimasukkan tidak ada"<<endl;
		}       		
    } else if (x == 'F'){
      	if (y== 'C'){
			c = (5*(n-32))/9;
			cout<<fixed<<setprecision(2)<<c<<" C"<<endl;
		} else if (y=='R'){
			r = (4*(n-32))/9;
			cout<<fixed<<setprecision(2)<<r<<" R"<<endl;
		} else if (y=='K'){
			k = (5*(n-32))/9+273; 
			cout<<fixed<<setprecision(2)<<k<<" K"<<endl;
		} else {
			cout<<"Jenis temperatur yang dimasukkan tidak ada"<<endl;
		}      
    } else if(x == 'K') {
    	if (y== 'C'){
			c = n-273;
			cout<<fixed<<setprecision(2)<<c<<" C"<<endl;
		} else if (y=='R'){
			r = (4*(n-273))/5;
			cout<<fixed<<setprecision(2)<<r<<" R"<<endl;
		} else if (y=='F'){
			f = (9*(n-273))/5 +32;
			cout<<fixed<<setprecision(2)<<f<<" F"<<endl;
		} else {
			cout<<"Jenis temperatur yang dimasukkan tidak ada"<<endl;
		}      
    } else {
    	cout<<"Jenis temperatur yang dimasukkan tidak ada"<<endl;
	}

  return 0;
}

