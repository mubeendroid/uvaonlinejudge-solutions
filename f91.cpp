#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(true)
    {
        cin>>n;
        if(n==0)
            break;
        if(n>100)
            cout<<"f91("<<n<<") = "<<(n-10)<<endl;
        else
            cout<<"f91("<<n<<") = 91"<<endl;
    }
    return 0;
}
