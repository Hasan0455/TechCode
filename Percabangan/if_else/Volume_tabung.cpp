#include <iostream>
using namespace std;

int main(){
  
 
 int r,t;
 float volume;
 
 cout<<"Tinggi : ";
 cin>> t;
 
 cout<<"Jari - Jari : ";
 cin>> r;
 
 volume = 3.14*r*r*t;
 
 cout<<"Volume : "<< volume << endl;
  
  
  
  cout<<"=============================================="<<endl;
 
  
  int L,s;
  
  cout<<"MENCARI LUAS PERSEGI "<<endl;
  cout<<"==================== "<<endl;
   cout<<"Sisi : ";
   cin>> s; 
 
   L = s*s;
   cout<<"Luas persegi : "<< L <<endl;

 if(L<25){
   cout<<"Kamu hebat ganteng ";
 }
  else if(L>=25){
    cout<<"Kamu Luar biasa";
  }
 return 0;
}