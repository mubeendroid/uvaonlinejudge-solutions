#include <bits/stdc++.h>
using namespace std;
int c[100000];
int finder(int n)
{
    if(c[n]<0)
        return n;
    return c[n]=finder(c[n]);
}
int main ()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        memset(c,-1,sizeof(c));
        int indexing=1;
        map<string,int> mp;
        for(int j=0;j<a;j++)
        {
            string str1,str2;
            cin>>str1>>str2;
            if(!mp[str1])
                mp[str1]=indexing++;
            if(!mp[str2])
                mp[str2]=indexing++;
            int p=finder(mp[str1]);
            int q=finder(mp[str2]);
            if(p==q)
            {
                cout<<c[p]*-1<<endl;
                continue;
            }
            if(c[p]<c[q])
            {
                c[p]+=c[q];
                c[q]=p;
                cout<<c[p]*-1<<endl;
            }
            else
            {
                c[q]+=c[p];
                c[p]=q;
                cout<<c[q]*-1<<endl;
            }
        }
    }
    return 0;
}
