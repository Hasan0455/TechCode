#include <iostream>
using namespace std;

int main()
{

// deklarasi variabel 
int mahasiswa;
int kelompok1, kelompok2,kelompok3;
float a,b,c;
string text1, text2, text3, text4, text5;

//input nilai

mahasiswa=40;
kelompok1=85;
kelompok2=82;
kelompok3=90;
text1="hasil dari a(jumlah anggota perkelompok) ;  ";
text2="hasil dari b(sisa bagi dari kelompok) : ";
text3="hasil dari c(nilai rata-rata semua kelompok) : ";
text4="hasil dari d(predikat masing-masing kelompok) : ";
text5="predikat dari ";

//proses operator aritmatika

a=mahasiswa/3;
b=mahasiswa%3;
c=(kelompok1+kelompok2+kelompok3)/3;

//output

cout << text1 << a << endl;
cout << text2 << b << endl; 
cout << text3 << c << endl;


//predikat masing-masing kelompok
cout << text4 << "\n" << endl;
int nilai;
cout<< text5 << "kelompok dengan nilai:";
cin >> nilai;
if (nilai<=82 && nilai>=78)
cout << "cukup baik";
else if (nilai<=87 && nilai>=83)
cout << "baik";
else if (nilai<=100 && nilai>=88)
cout << "sangat baik";

}