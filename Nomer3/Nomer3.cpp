#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int x,y,kpk;
    kpk=0;

    cout<<"Masukkan bilangan ke-1 : ";
    cin>>x;
    cout<<"Masukkan bilangan ke-2 : ";
    cin>>y;

    for(int i=1;i<=y;i++){
        kpk=kpk+x;
        if(kpk%y==0){
            cout<<"KPK = "<<kpk;
            break;
        }
    }
    return 0;
}
