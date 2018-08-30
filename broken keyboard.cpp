#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(getline(cin,a))
    {
        list<char> l;
        list<char>::iterator it=l.begin();
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='[')
				it=l.begin();
			else if(a[i]==']')
				it=l.end();
			else
				l.insert(it,a[i]);
        }
        for(it=l.begin();it!=l.end();it++)
			cout<<*it;
        cout<<endl;
    }
    return 0;
}
