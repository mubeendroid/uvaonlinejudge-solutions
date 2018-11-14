#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,counter;
    string a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        cin>>a;
        counter=0;
        for(int j=0;j<m;)
        {
            if(a[j]=='#')
                j++;
            else
            {
                counter++;
                j+=3;
            }
        }
        cout<<"Case "<<i<<": "<<counter<<endl;
    }
    return 0;
}
