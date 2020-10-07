#include <iostream>

using namespace std;

int main()
{
    int x,y;
    int hasil=1;

    cout<<"Masukkan bilangan : ";
    cin>>x;
    cout<<"Masukkan pencacah : ";
    cin>>y;

    for(int i=1; i<=y; i++){
        hasil=hasil*x;
    }
    cout<<"Hasil Pangkat : "<<hasil<<endl;
    return 0;
}
