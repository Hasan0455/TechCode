#include <iostream>
using namespace std;

struct data{
	int nilai=5;
	int &krs=nilai;
	int &mhs=krs;
};
int main(){
	 struct data dt;
cout<<dt.nilai<<endl;
cout<<dt.krs<<endl;
cout<<dt.mhs<<endl;
}
