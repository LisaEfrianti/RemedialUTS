#include <iostream>
using namespace std;

int main(){
    float a,b;
    int kode;
    
    cout<<"pilih menu : \n";
    cout<<"1.Perkalian (*) \n";
    cout<<"2.Pembagian (/) \n\n";
    cout<<"Silahkan masukkan kode menu : ";cin>>kode;
    
      cout<<"masukkan angka pertama :";cin>>a;
      cout<<"masukkan angka kedua :";cin>>b;
      
    if (kode == 1) {
      cout<<"hasil perkalian dari "<<a<<" * "<<b<<" adalah : "<<a*b<<endl;
    }
    else if (kode == 2) {
      cout<<"hasil pembagian dari "<<a<<" / "<<b<<" adalah : "<<a/b<<endl;
    }
    
    return 0;
}
