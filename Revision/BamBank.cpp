#include <iostream>
using namespace std;
// Bismillah Isok
struct bambank {                    //Struct bank untuk isinya
    int id;
    char nama[21];
    long int saldo;
};
struct transaksi {                  //Struct transaksi untuk fitur banknya
    int cekid, cekuang, cektombol;
};
int main(){
    int n, cek=0;
    cin>>n;                         //Input test case
    struct bambank bni[n];     
    struct transaksi cari[101];

    for(int i=0; i<n; i++){
        cin>>bni[i].id;             //input id
        cin>>bni[i].nama;           //input nama
        bni[i].saldo = 100;         //saldo awal
    }
    do {
        cin>>cari[cek].cektombol;   //input tombol (0, 1, 2)
        if(cari[cek].cektombol==0){
            break;
        }
        cin>>cari[cek].cekid;       //input id yang mau melakukan transaksi
        cin>>cari[cek].cekuang;     //input uang yang mau dibuat transaksi
        cek++;
    } while(true);  
    for (int i=0; i<cek; i++){
        for(int j=0; j<n; j++){
            if(bni[j].id == cari[i].cekid){
                if(cari[i].cektombol==1){                       //jika input tombol 1 maka setor
                    bni[j].saldo=bni[j].saldo+cari[i].cekuang;
                    if(bni[j].saldo>1000){                  //jika uang melebihi 1000
                        bni[j].saldo=bni[j].saldo-20;       //maka dikurangi 20
                    }
                    break;
                } else if(cari[i].cektombol==2){                //jika input tombol 2 maka tarik
                    bni[j].saldo=bni[j].saldo-cari[i].cekuang;  //mengurangi nilai uang
                    if(bni[j].saldo<0){                         //jika kurang dari 0 maka saldo jadi 0
                        bni[j].saldo=0;
                    }
                    break;
                } else if(cari[i].cektombol==0){        //keluar jika bernilai 0
                    break;
                }
            break;
            }
        }
    }
    for(int k=0; k<n; k++){                     //cetak print
        cout<<"Akun "<<k+1<<endl;
        cout<<bni[k].id<<endl;
        cout<<bni[k].nama<<endl;
        cout<<bni[k].saldo<<endl;
    }
    cin.get();
    return 0;
}