#include <iostream>
using namespace std ;
int main(){ 
  
int harga,harg_barang;
cout<< "jumlah pembayaran" << endl;
cin>>harga;
if (harga >= 250 ){
cout << "uang anda kelebihan bang" << endl;
}

else if (harga >= 200){
cout << "pas gati kepengm wak" << endl;
}
else if (harga >= 150){
cout << "terjangkau kepengm bang" << endl;
}
else if (harga >= 100){
cout << "murak lalok sik belakok" << endl;
}
else {
cout << "mohon maaf meton kurang kepengm" << endl;
}
}