#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int kali (int m,int n)
{

int i,hasil =0;
for(i=1;i<=n;i++)
hasil+=m;
if(n<0){return(-hasil);}
else{return(hasil);}
}
int main()
{
int a,b;

cout <<"Masukkan bilangan : ";
cin >> a;
cout <<"Akan dikali dengan : ";
cin >> b;
cout << "\n\nHasil dari "<<a<<" x "<<b<<" = " <<kali(a,b)<<endl;
cout <<"=================================================="<<endl;
    cout << "Nama  : Fauzi Akbar"<<endl;
cout <<"=================================================="<<endl;
    cout << "NIM   : 311810855"<<endl;
cout <<"=================================================="<<endl;
    cout << "Kelas : TI.18.C.2"<<endl;
cout <<"=================================================="<<endl;

getch();
}
