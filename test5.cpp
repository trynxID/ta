#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    string a[3]={"saya","suka","makan"};
    cout<<"  PENGHAPUSAN DATA PADA ARRAY"<<endl;
    cout<<"==============================="<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nData yang akan dihapus : ";
    string hapus;
    cin>>hapus;
    int total=0;

    for(int i=0;i<3;i++)
    {
        if(a[i]==hapus)
        {
            a[i]=" ";
            total=total+1;
        }
    }
    cout<<"\nData "<<hapus<<" berhasil dihapus!\n";
    cout<<"\nData yang dihapus sebanyak : "<<total<<" data\n";
    cout<<"\nData sekarang : \n";
    for(int i=0;i<3;i++)
    {
        if(a[i]!=" ")
        {
        cout<<a[i]<<" ";
        }
    }
}