#include <iostream>
#include <algorithm>
using namespace std;


double median(double angka[], int ukuran);					//fungsi median

int main(){
	int n, ukuran; 
	cin>>n;													//input test case
	double angka[n];
	for (int i=0; i<n; i++){								
		cin>>angka[i];										//masukkan bilangan ke array
   	}
   	
	ukuran= sizeof(angka)/sizeof(angka[0]);					//mengukur panjang dari jumlah array
	

   	cout<<median(angka, ukuran)<<".0";						//print

	return 0;
}

double median(double angka[], int ukuran){						//fungsi median
   	sort(angka, angka+ukuran);									//mengurutkan angka							//1 2 3 4 5
   	double hasil=angka[ukuran/2];								//variabel mencari ganjil					//0 1 2 3 4
   	if (ukuran % 2 != 0)										//jika ukurannya ganjil maka return 
	    return (double) hasil;						
   	return (double) ((angka[(ukuran-1)/2] + hasil)/2);		//jika genap return
}
