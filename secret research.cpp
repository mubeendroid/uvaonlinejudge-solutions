#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n;
    string a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        int b=a.length();
        if(a=="1" || a=="4" || a=="78")
            cout<<"+"<<endl;
        else if(a.at(b-2)=='3' && a.at(b-1)=='5')
            cout<<"-"<<endl;
        else if(a.at(0)=='9' && a.at(b-1)=='4')
            cout<<"*"<<endl;
        else if(a.at(0)=='1' && a.at(1)=='9' && a.at(2)=='0')
            cout<<"?"<<endl;
    }
    return 0;
}
