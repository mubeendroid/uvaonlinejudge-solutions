#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    for(int i=1; ;i++)
    {
        cin>>n;
        if(n<0)
            break;
        if(n==1)
        {
            cout<<"Case "<<i<<": 0"<<endl;
            continue;
        }
        int j=1;
        int counter=0;
        do
        {
            j=j*2;
            counter++;
        }while(j<n);
        cout<<"Case "<<i<<": "<<counter<<endl;
    }
    return 0;
}
