#include <iostream>

using namespace std;

int iteratif (int suku, int a, int b, int c)
{
a=0, b=1;

if (suku == 1) return b;
if (suku == 0) return a;

else{
for(int i=2; i<=suku; i++){

c = a + b;
a = b;
b = c;
}
return c;
}
}

int main()
{
int suku, a, b,c;

cout<<"Masukkan nilai suku ke-: ";

cin>>suku;
cout<<"\nBilangan fibonaccinya untuk "<<suku<<" adalah ";
cout<< iteratif ( suku,  a,  b,  c)<<endl;
cout <<"=================================================="<<endl;
    cout << "Nama  : Fauzi Akbar"<<endl;
cout <<"=================================================="<<endl;
    cout << "NIM   : 311810855"<<endl;
cout <<"=================================================="<<endl;
    cout << "Kelas : TI.18.C.2"<<endl;
cout <<"=================================================="<<endl;
     return 0;
}
