#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        int m[128]={};
        for(int j=0;j<a.length();j++)
            m[a[j]]++;
        int minimum = INT_MAX;
        minimum = min(minimum, m['M']/1);
        minimum = min(minimum, m['A']/3);
        minimum = min(minimum, m['R']/2);
        minimum = min(minimum, m['G']/1);
        minimum = min(minimum, m['T']/1);
        minimum = min(minimum, m['I']/1);
        cout<<minimum<<endl;
    }
    return 0;
}
