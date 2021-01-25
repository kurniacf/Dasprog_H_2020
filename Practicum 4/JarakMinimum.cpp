#include <iostream>
#include <cmath>
using namespace std;
//Bismillah Isok
// 1 <= n <= 10^4
// -10^9 <= x1, y1 <= 10^9
//Koordinat Kartesius
//Jarak = sqrt((x2-x1)^2 + (y2-y1)^2)

struct koordinat{											//struct koordinat
	int x, y, hasil;										
};

int main(){
	koordinat x1, x2, y1, y2, poin[101];
	int n, minimum = 1e6, kuadrat1, kuadrat2, cek1=0, cek2=0;			//inisiasi
	cin>>n;
	
	for (int i=0; i<n; i++){
		cin>>poin[i].x>>poin[i].y;								//input awal 
	}
	for (int j=0; j<n; ++j){
		for (int k=0; k<n; ++k){
			//kuadrat1 = (poin[j].y-poin[k].x*poin[j].y-poin[k].x);								
			//kuadrat2 = (poin[j].x-poin[k].y*poin[j].x-poin[k].y);
			kuadrat1 = pow(poin[j].y-poin[k].x, 2); 		//cari kuadrat
			kuadrat2 = pow(poin[j].x-poin[k].y, 2); 
			cek1 = kuadrat1+kuadrat2;
			cek2 = sqrt(cek1);								//akar
			if (cek2<=minimum-1){							//syarat
				minimum=cek2;
				x1.hasil=poin[j].x; y1.hasil=poin[j].x;
				x2.hasil=poin[k].x; y2.hasil=poin[k].x;
			}
		}
	}
	cout<<x1.hasil;
	cout<<" ";
	cout<<y1.hasil<<endl;
	cout<<x2.hasil;
	cout<<" ";
	cout<<y2.hasil<<endl;
	return 0;
}
