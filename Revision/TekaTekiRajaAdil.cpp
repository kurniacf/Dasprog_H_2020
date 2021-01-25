#include<iostream>
using namespace std;
//Bismillah Isok
//ANAGRAM 8 HURUF
int main(){
	char huruf1, huruf2, huruf3, huruf4, huruf5, huruf6, huruf7, huruf8;
	int cek1=0, cek2=0, tanda1=0, tanda2=0, itungawal1, itungawal2, itungakhir1, itungakhir2;
	cin>>huruf1>>huruf2>>huruf3>>huruf4>>huruf5>>huruf6>>huruf7>>huruf8;    //input kalimat (Asli)
    //cek bilangan ASCII dalam kalimat inputan 
	itungawal1=huruf1+huruf2+huruf3+huruf4;
    itungawal2=huruf5+huruf6+huruf7+huruf8;
    cek1=itungawal1+itungawal2;
	tanda1=(huruf1%2)+(huruf2%2)+(huruf3%2)+(huruf4%2)+(huruf5%2)+(huruf6%2)+(huruf7%2)+(huruf8%2);
    //input kalimat yg diubah
	cin>>huruf1>>huruf2>>huruf3>>huruf4>>huruf5>>huruf6>>huruf7>>huruf8;    //input kalimat (anagram)
    //cek bilangan ASCII dalam kalimat yang diubah
	itungakhir1=huruf1+huruf2+huruf3;
    itungakhir2=huruf4+huruf5+huruf6+huruf7+huruf8;
    cek2=itungakhir1+itungakhir2;
	tanda2=(huruf1%2)+(huruf2%2)+(huruf3%2)+(huruf4%2)+(huruf5%2)+(huruf6%2)+(huruf7%2)+(huruf8%2);
    //syarat
	if ((cek1==cek2) || (tanda1<=4&&tanda2<=4)) {
        cout<<"YA"<<endl;
    } else {
        cout<<"TIDAK"<<endl;
    }
    cin.get();
    return 0;
}