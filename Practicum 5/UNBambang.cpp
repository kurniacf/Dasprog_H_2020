#include <iostream>
using namespace std;
//Bismillah Isok

struct siswa{                               //struct 
    int nrp, mat, ipa, ips;
};
void inputnilai(struct siswa nilai[], int n);
void ceknilai(struct siswa nilai[], int n);
void tukarurutan(int *p, int *q);                     //panggil fungsi tukar
void printnilai(struct siswa nilai[], int n);

//FUNGSI PUSAT
int main(){
    int n;
    cin>>n;                                   //Input testcase
    siswa nilai[n];
    inputnilai(nilai, n);        //Input nilai
    ceknilai(nilai, n);          //Pengecekan
    printnilai(nilai, n);       //Print nilai
    return 0;
}
//Fungsi input nilai
void inputnilai(struct siswa nilai[], int n){
    for(int i=0; i<n; i++){                 //INPUT
        cin>>nilai[i].nrp>>nilai[i].mat>>nilai[i].ipa>>nilai[i].ips;                  //input nilai
    }
}
//Fungsi menukar posisi
void tukarurutan(int *p, int *q){
    int cek;
    cek=*p;
    *p=*q;
    *q=cek;
}
//Fungsi print 
void printnilai(struct siswa nilai[], int n){
    for (int i=n-1; i>=0; i--){             //print
        cout<<nilai[i].nrp<<endl;
    }
}
//Fungsi cek nilai 
void ceknilai(struct siswa nilai[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<(2*n)/2; ++j){
            //urutan IPA-MAT-IPS
            if(nilai[i].ipa>nilai[j].ipa) {                    //cek nilai ipa
                tukarurutan(&nilai[i].nrp, &nilai[j].nrp);
                tukarurutan(&nilai[i].ipa, &nilai[j].ipa);
                tukarurutan(&nilai[i].mat, &nilai[j].mat);
                tukarurutan(&nilai[i].ips, &nilai[j].ips);
            } else if (nilai[i].ipa==nilai[j].ipa) {          //jika sama nilai ipa maka cek mat
                if(nilai[i].mat>nilai[j].mat){               //cek nilai mat
                    tukarurutan(&nilai[i].nrp, &nilai[j].nrp);
                    tukarurutan(&nilai[i].ipa, &nilai[j].ipa);
                    tukarurutan(&nilai[i].mat, &nilai[j].mat);
                    tukarurutan(&nilai[i].ips, &nilai[j].ips);
                } else if (nilai[i].mat==nilai[j].mat) {        //jika sama nilai mat maka cek nilai ips 
                    if(nilai[i].ips>nilai[j].ips) {           // cek nilai ips
                        tukarurutan(&nilai[i].nrp, &nilai[j].nrp);
                        tukarurutan(&nilai[i].ipa, &nilai[j].ipa);
                        tukarurutan(&nilai[i].mat, &nilai[j].mat);
                        tukarurutan(&nilai[i].ips, &nilai[j].ips);
                    }
                }
            }
        }
    }
}