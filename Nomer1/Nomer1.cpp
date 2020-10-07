#include <iostream>

using namespace std;

int main()
{
   int jml;
   long tambah=0;

   cout<<"Masukkan Bilangan : ";
   cin>>jml;
   cout<<jml<<" = ";

   for(int i=jml;i>=1;i--)
    {
        tambah +=i;
   if(i!=1){
        cout<<i<<"+";}
    else{
        cout<<i<<" =";
    }
   }
   cout<<tambah;
    return 0;

}
