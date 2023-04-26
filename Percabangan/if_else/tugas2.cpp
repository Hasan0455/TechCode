#include <iostream>
using namespace std;

int main(){
   
   
   string makanan,menu;
   int bayar,total;
   menu="sepageti,rendang,pecel";
  
     
   cout<<"pelanggan singgah"<< endl; 
   cout<<"pelayan menyerahkan menu"<<endl;  
   
   cout<<"menu : pelecing"<<endl;
   cout<<"menu : spageti"<<endl;
   cout<<"menu : rendang"<<endl;
   cout<<"menu : pecel  "<<endl;
   
   //proses 1
   
   cin>> menu;
   cin>> makanan;
  
  
   
   if(makanan == menu){
     cout<<"jadi pesan " <<endl;
   }
   
   else{
     cout<<"tidak jadi pesan"<<endl;
     }
     
   cout<<"======================================"<<endl; 
   
   //proses 2
   
   
  cin>> menu;
   cout<<"Menu : "<< menu <<endl;
   cin>> makanan;
   cout<<"pesanan : "<< makanan <<endl;
   
   
  if(makanan==menu){
    cout<<"menu terpilih : "<< menu <<endl;
  }
  
  else if(makanan!=menu){
    cout<<"silahkan pilih menu lain"<<endl;
    cout<<"menu yang anda pilih sudah habis"<<endl;
  }
;
   //semua proses telah di lalui
cout<<"#########################################"<<endl;
cin>> total;
cout<<"ini total bayarnya = "<< total <<endl;

cin>> bayar;
cout<<"uang yang di terima = "<< bayar <<endl;

if(total==bayar){
  cout<<"Terimakasi silakan datang kemabli"<<endl;
}
else{
  cout<<".........";

   }
   
} 