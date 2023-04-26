#include <iostream>
#include <conio.h>
using namespace std;
int main(){
  
  string SKS[8][5]={
    {"B.indo","B.inggris","MTK","Produktif","T.kejuruan"},
    {"60","80","50","90","40"},
    {"70","80","70","90","60"},
    {"60","90","70","90","40"},
    {"60","80","80","90","60"},
    {"70","90","70","90","50"},
    {"70","80","60","90","40"},
    {"60","90","70","90","60"}
  };
  
  for(int i=0;i<9;i++){
    cout<< "[Merupakan element array ke] = "<<i <<endl;
   for(int j=0;j<5;j++){
         cout<<"    "<<SKS[i][j]<<" ";
        }
       }
       cout<<endl;
  return 0;
}