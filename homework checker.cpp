#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,counter=0;
    char s,c[1000];
    while(scanf("%d%c%d=%s",&a,&s,&b,c)==4)
    {
        if(s=='+')
        {
            if(a+b==atoi(c))
                counter++;
        }
        else if(s=='-')
        {
            if(a-b==atoi(c))
                counter++;
        }
    }
    cout <<counter<< endl;
    return 0;
}
