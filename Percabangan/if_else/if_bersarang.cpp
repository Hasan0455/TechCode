#include <iostream>
using namespace std;
int main(){

int kas , ulang ,Y,G ;
cout << " masukkan jumlah kas perusahaan < 11M " << endl;
cin >> kas;


if ( kas  <= 10 ){
  if (kas == 10){
    cout << " perusahaan makro kelas A " << endl;
  }
  
  else if ( kas == 9){
    cout << " perusahaan makro kelas B " << endl;
  }
  
  else if ( kas == 8){
    cout << " perusahaan makro kelas C" << endl;
  
  }
  
  else if ( kas == 7){
    cout << " perusahaan makro kelas D " << endl;
  }
  else{
 if ( kas <= 6){
    if ( kas == 6){
    cout << " perusahaan menengah kelas A" << endl;
    }
    else if( kas == 5){
      cout << " perusahaan menengah kelas B" << endl;
    }
  else if( kas == 4){
      cout << " perusahaan menengah kelas C" << endl;
    }
    
    else if( kas == 3){
      cout << " perusahaan menengah kelas D" << endl;
    }
    
    else if( kas == 2){
      cout << " perusahaan menengah kelas E" << endl;
    }
    
    else if( kas == 1){
      cout << " perusahaan menengah kelas F" << endl;
    }
  else {
    cout << " perusahaan belum terdaftar" << endl;
    }
   }
  }  
 }
}





