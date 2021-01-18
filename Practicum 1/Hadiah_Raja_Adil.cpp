#include <iostream>
using namespace std; 
int main()
{
	int a, b, c, k, l, m, n, o, p, x, y, z;
	
	cin>>k>>l;
	cin>>m>>n;
	cin>>o>>p;
	
	a=k%l;
	b=m%n;
	c=o%p;
	
	// 7/3=2	2+1=3 -->x
	// 3*3=9 		  -->y
	// 9-7=2   		  -->z
	
	//batas 1<=a, b<=10^9
	
	if (a!=0){
		x=(k/l)+1;
		y=l*x;
		z=y-k;
		cout<<z<<endl;
	} else if (a==0) {
		cout<<"0"<<endl;
	} 
	
	if (b!=0){
		x=m/n+1;
		y=n*x;
		z=y-m;
		cout<<z<<endl;
	} else if (b==0) {
		cout<<"0"<<endl;
	}
	
	if (c!=0){
		x=o/p+1;
		y=p*x;
		z=y-o;
		cout<<z<<endl;
	} else if (c==0) {
		cout<<"0"<<endl;
	} 
	else {
		cout<<"0"<<endl;
	}
	
		return 0;
}
