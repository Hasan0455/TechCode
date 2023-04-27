#include<iostream>
using namespace std;
int main(){
//Break
cout<<"Break"<<endl;
    for (int i = 0; i < 10; i++) {
  if (i == 7) {
    break;
  }
  cout << i << "\n";
}
//Continue
cout<<"Continue"<<endl;
    for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << "\n";
}
}