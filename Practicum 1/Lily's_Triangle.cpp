#include <iostream>

using namespace std;

int main(){
	float a, b, c, d, e, f, g, h, i;
	
	scanf("%f %f %f", &a, &b, &c);
	
	//segitiga siku-siku
	d=(a*a)+(b*b);
	e=(b*b)+(c*c);
	f=(a*a)+(c*c);
	
	//segitiga sembarang
	g=a+b;
	h=b+c;
	i=a+c;
	
	
	
		if (a==b && a==c && b==c){
			cout<<"Dapat menjadi segitiga, yaitu segitiga sama sisi."<<endl;
		 
		
		} else if (d==c*c || e==a*a || f==b*b){
			cout<<"Dapat menjadi segitiga, yaitu segitiga siku-siku."<<endl;
		 
		
		} else if (a==c || b==c || a==b ){
			cout<<"Dapat menjadi segitiga, yaitu segitiga sama kaki."<<endl;
		
		} else if (g>c && h>a && i>b && a!=b && b!=c && a!=c){
			cout<<"Dapat menjadi segitiga, yaitu segitiga sembarang."<<endl;
		} 
		else {
			cout<<"Tidak dapat menjadi segitiga."<<endl;
		}
	
	
	return 0;
}
