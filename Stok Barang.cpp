#include<iostream>
#include<stdlib.h>

using namespace std;

class penambahanData{

private:
int stock;

public :
void Pensil ();
void Buku();
void Penghapus();
};

void penambahanData::Pensil(){
int stock = 8, stockPensil, total;
cout<<"Masukkan jumlah stock barang =  "; cin>>stockPensil;
total = stock + stockPensil;
cout<<"Total stok pensil adalah "<<total<<endl;
}

void penambahanData::Buku(){
int stock = 10, stockBuku, total;
cout<<"Masukkan jumlah stock barang = "; cin>>stockBuku;
total = stock + stockBuku;
cout<<"Total stok buku adalah "<<total<<endl;
}

void penambahanData::Penghapus(){
int stock = 28, stockPenghapus, total;
cout<<"Masukkan jumlha stock barang = "; cin>>stockPenghapus;
total = stock + stockPenghapus;
cout<<"Total stok penghapus adalah "<<total<<endl;
}

int main (int argc, char** argv){
int  pilih;
cout<<"No. \t Nama Barang \t Stock "<<endl;
cout<<"1. \t Pensil \t 8" <<endl;
cout<<"2. \t Buku \t\t 10"<<endl;
cout<<"3. \t Penghapus \t 28 "<<endl;

cout<<"Pilih Barang Yang Akan Ditambah Stocknya [1,2,3] = ";cin>>pilih;

if (pilih == 1){
penambahanData Pensil;
Pensil.Pensil();
cout<<"Terima kasih"<<endl;
}
if (pilih == 2){
penambahanData Buku;
Buku.Buku();
cout<<"Terima kasih "<<endl;
}
if (pilih == 3){
penambahanData Penghapus;
Penghapus.Penghapus();
cout<<"Terima Kasih"<<endl;
}

return 0;
system ("PAUSE");
}
