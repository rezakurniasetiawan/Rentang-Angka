#include<iostream>
#include<conio.h>
using namespace std;
main ()
{
double NilaiUjian;
char skor;
     
cout << "================================ \n";     
cout << "SELAMAT DATANG DI RENTANG ANGKA \n";
cout << "Reza Kurnia Setiawan \n";
cout << "D4 Manajemen Informatika \n";
cout << "================================ \n";
     
cout<<"\n";

cout<<"Masukan Nilai Ujian : ";
cin>>NilaiUjian;

if(NilaiUjian >= 90)
skor= 'A' ;
else

if(NilaiUjian >= 70)
skor= 'B';
else

if(NilaiUjian >= 60)
skor= 'C';
else 

if(NilaiUjian >= 50)
skor= 'D';
else
skor= 'E';
    
cout<<" Skornya adalah : "<<skor<<endl;

return 0;
}
