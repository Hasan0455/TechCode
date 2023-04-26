#include <iostream>
using namespace std;
int main()
{
 string absen,angkatan,tahun_masuk,nim,prodi,ind0,ind1,ind2,ind3,ind4,ind5,ind6,ind7,ind8,ind9;
 
 cout<<"=============="<<endl;
  cout<<"DATA MAHASISWA"<<endl;
  cout<<"=============="<<endl;
  
  
 cout<<"Masukkan NIM : ";
 cin>> nim;
  
  ind0=nim[0];
  ind1=nim[1];
  ind2=nim[2];
  ind3=nim[3];
  ind4=nim[4];
  ind5=nim[5];
  ind6=nim[6];
  ind7=nim[7];
  ind8=nim[8];
  ind9=nim[9];
  prodi =ind0+ind1;
//proses
  if(prodi=="TI"||prodi=="ti"){
    cout<<"Teknik informatika"<<endl;
    angkatan =ind2+ind3;
    cout<<"Angkatan : "<< angkatan <<endl;
    tahun_masuk =ind4+ind5;
    cout<<"Tahun masuk : "<< tahun_masuk <<endl;
    absen =ind6+ind7+ind8+ind9;
    cout<<"No. Absen : "<< absen <<endl;
  } 
  else if(prodi=="SI"||prodi=="si"){
    cout<<"Sistem informasi"<<endl;
    angkatan =ind2+ind3;
    cout<<"Angkatan : "<< angkatan <<endl;
    tahun_masuk =ind4+ind5;
    cout<<"Tahun masuk : "<< tahun_masuk <<endl;
    absen =ind8+ind9;
    cout<<"No. Absen : "<< absen <<endl;
  }
  else{
    cout<<"NIM anda tidak terdaptar"<<endl;
   }
   return 0;
   
}