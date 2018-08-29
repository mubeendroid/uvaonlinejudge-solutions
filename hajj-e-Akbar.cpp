#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    for(int i=1; ;i++)
    {
        cin>>a;
        if(a.compare("Hajj")==0)
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
        else if(a.compare("Umrah")==0)
            cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
        else if(a.compare("*")==0)
            break;
    }
    return 0;
}
