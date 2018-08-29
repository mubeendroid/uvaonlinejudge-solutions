#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,high,low;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        high=0;
        low=0;
        cin>>a;
        int b[a];
        for(int j=0;j<a;j++)
            cin>>b[j];
        for(int j=1;j<a;j++)
        {
            if(b[j]>b[j-1])
                high++;
            else if(b[j]<b[j-1])
                low++;
            else if(b[j]==b[j-1])
                continue;
        }
        cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;
    }
    return 0;
}
