#include <iostream.h>
#include <conio.h>
int main ()
{
   char Nama[20],Kode;
   int Pil,Harga,JumlahBelanja,Discount,TotalBelanja,TotalBayar,Bayar,Kembalian;
   cout<<"Hadiah Praktikum 6 \n";
   cin>>Nama;
   cout<<endl;
   cout<<"|Selamat Datang " <<Nama<< " Di Toko Perabot EKA |";
   cout<<endl;
   cout<<"\nNama Barang Perabot Rumah Tangga : \n";
   cout<<"A. Kursi \n";
   cout<<"B. Meja \n";
   cout<<"C. Lemari\n";
   cout<<"Pilih Barang Yang Ingin Dibeli (A-C) : "; cin>>Kode;
   switch(Kode)
{
   case 'A':
      Harga=1000000;
      cout<<"Kursi \n";
      cout<<"Harga Satuan : Rp. "<<Harga<<endl;
      break;
   case 'B':
      Harga=2000000;
      cout<<"Meja \n";
      cout<<"Harga Satuan : Rp. "<<Harga<<endl;
      break;
   case 'C':
      Harga=2500000;
      cout<<"Lemari \n:";
      cout<<"Harga Satuan : Rp. "<<Harga<<endl;
      break;}
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
   cout<<"|||Nota Belanja "<<Nama<< " Di Toko Perabot EKA ||| \n";
   cout<<"\nMasukkan Jumlah Barang Yang Ingin Dibeli : ";cin>>JumlahBelanja;
   TotalBelanja = JumlahBelanja * Harga;
   cout<<"Kode Barang Yang Dibeli "<<Kode<<endl;
   cout<<"Total Pembelanjaan Adalah :Rp. "<<TotalBelanja<<endl;
   if (TotalBelanja >= 1000000)
    {Discount = TotalBelanja * 20/100;}
   else
    {Discount = 0;}
   cout<<"Discount = Rp. " <<Discount<<endl;
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
   TotalBayar = TotalBelanja - Discount;
   cout<<"Total Yang Harus Dibayar : Rp. "<<TotalBayar<<endl;
   cout<<"\nMasukkan Uang Pembayaran :" ; cin >>Bayar;
   Kembalian = Bayar - TotalBayar;
   cout<<"Kembalian :Rp. "<<Kembalian<<endl;
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
   cout<<"\n||Terimakasih Telah Membeli Di Toko Kami||"<<endl;
   getch(); }

