#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a.length()==5)
            cout<<"3"<<endl;
        else if(a.length()==3)
        {
            if(a[0]=='t' && a[1]=='w')
                cout<<"2"<<endl;
            else if(a[1]=='w' && a[2]=='o')
                cout<<"2"<<endl;
            else if(a[0]=='t' && a[2]=='o')
                cout<<"2"<<endl;
            else if(a[0]=='o' || a[1]=='n' || a[2]=='e')
                cout<<"1"<<endl;
        }
    }
    return 0;
}
