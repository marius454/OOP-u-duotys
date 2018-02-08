#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    string v;
    cout<<"iveskite savo varda: ";
    cin>>v;
    if (v.back() == 's')
        a=13;
    else
        a=12;
    cout<<endl;
    for (int i=0;i<a+v.length();i++)
        cout<<"*";
    cout<<endl;
    cout<<"*";
    for (int i=0;i<a-2+v.length();i++)
        cout<<" ";
    cout<<"*"<<endl<<"*";
    if (v.back() == 's')
        cout<<" Sveikas, "<<v<<" *"<<endl;
    else
        cout<<" Sveika, "<<v<<" *"<<endl;

    cout<<"*";
    for (int i=0;i<a-2+v.length();i++)
        cout<<" ";
    cout<<"*"<<endl;
    for (int i=0;i<a+v.length();i++)
        cout<<"*";
    return 0;

}
