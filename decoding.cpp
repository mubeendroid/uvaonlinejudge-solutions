#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f,sum;
    string a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        cout<<"Case "<<i<<": ";
        for(int j=0;j<a.length();)
        {
            char ch;
            int num=0;
            ch=a[j];
            j++;
            while(isdigit(a[j]))
            {
                num=(num*10)+(a[j]-'0');
                j++;
            }
            for(int k=0;k<num;k++)
                cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}
