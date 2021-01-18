#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main(){
    long long int a,b;
    cin >> a;
    b = a*a*a;
    if (b>=100000){
        b = (a%100000)*(a%100000)*(a%100000);
        b %= 100000  ;
        
       	cout << setw(5) << setfill('0') << b;
        //printf("%05lld\n", b);

    
    } else  {
		cout << setw(5) << setfill('0') << b;
	}
	//printf ("%05lld\n", b);
  	

    
}
