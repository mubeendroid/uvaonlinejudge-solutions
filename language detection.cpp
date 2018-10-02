#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    for(int i=1; ;i++)
    {
        cin>>a;
        if(a.compare("#")==0)
            break;
        else if(a.compare("HELLO")==0)
            cout<<"Case "<<i<<": ENGLISH"<<endl;
        else if(a.compare("HOLA")==0)
            cout<<"Case "<<i<<": SPANISH"<<endl;
        else if(a.compare("HALLO")==0)
            cout<<"Case "<<i<<": GERMAN"<<endl;
        else if(a.compare("BONJOUR")==0)
            cout<<"Case "<<i<<": FRENCH"<<endl;
        else if(a.compare("CIAO")==0)
            cout<<"Case "<<i<<": ITALIAN"<<endl;
        else if(a.compare("ZDRAVSTVUJTE")==0)
            cout<<"Case "<<i<<": RUSSIAN"<<endl;
        else
            cout<<"Case "<<i<<": UNKNOWN"<<endl;
    }
    return 0;
}
