#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b[10],maximum;
    string a[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<10;j++)
        {
            cin>>a[j];
            cin>>b[j];
        }
        maximum=b[0];
        for(int k=0;k<10;k++)
            if(b[k]>maximum)
                maximum=b[k];
        cout<<"Case #"<<i+1<<":"<<endl;
        for(int k=0;k<10;k++)
            if(b[k]==maximum)
                cout<<a[k]<<endl;
    }
    return 0;
}
