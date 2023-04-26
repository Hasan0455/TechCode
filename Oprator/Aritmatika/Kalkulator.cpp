#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   float a;
   float b;
   float hasil;
   char aritmatika;
   
   
  cout << "masukkan nilai pertama = ";
  cin >> a;
  
  //operator algoritma
 cout<<" pilih oprator +,-,*,/ : ";
 cin >> aritmatika;

cout<< "masukkan nilai ke dua = ";
  cin >> b;
  
  
  //aritmatika = +
  if (aritmatika=='+'){
  hasil= a+b; 
  } 
  
   else if (aritmatika =='-'){
    
    hasil= a-b;
    
  } 
  else if (aritmatika == '*'){
    
   hasil= a*b ;
    
  } 
  else if (aritmatika == '/'){
    
   hasil= a/b ;
    
  } 
 
  
  cout<<"maka hasilnya adalah = "<< hasil << endl;
  
  cout<<"========================="<<endl;
  
  cout<<"proses menakjubkan"<<endl;
  
}