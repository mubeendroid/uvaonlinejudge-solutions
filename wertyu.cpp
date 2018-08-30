#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    char ch[]={'1','2','3','4','5','6','7','8','9','0','-','=',
                'Q','W','E','R','T','Y','U','I','O','P','[',']','\\',
                'A','S','D','F','G','H','J','K','L',';','\'','\n',
                'Z','X','C','V','B','N','M',',','.','/'};
    while(getline(cin,a))
    {
        for(int i=0;i<a.length();i++)
            for(int j=0;j<47;j++)
            {
                if(a[i]==ch[j])
                {
                    a[i]=ch[j-1];
                    break;
                }
            }
        cout<<a<<endl;
    }
    return 0;
}
