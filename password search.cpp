#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a,output="";
    while(cin>>n>>a)
    {
        string b[a.length()];
        map<string,int> mp;
        map<string,int> :: iterator it;
        for(int i=0;i<=a.length()-n;i++)
            mp[a.substr(i,n)]++;
        int maximum=0;
        for(it=mp.begin(); it!=mp.end(); it++)
            if(it->second>maximum)
            {
                maximum=it->second;
                output=it->first;
            }
        cout<<output<<endl;
    }
    return 0;
}
