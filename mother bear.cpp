#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c="";
    while(true)
    {
        getline(cin,a);
        if(a.compare("DONE")==0)
            break;
        for(int i=0;i<a.length();i++)
            if(isalpha(a[i]))
            {
                char ch=tolower(a[i]);
                c+=ch;
            }
        b=c;
        a=c;
        reverse(a.begin(),a.end());
        if(a.compare(b)==0)
            cout<<"You won't be eaten!"<<endl;
        else if(a.compare(b)!=0)
            cout<<"Uh oh.."<<endl;
        a="";
        c="";
    }
    return 0;
}
