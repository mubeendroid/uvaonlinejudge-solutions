#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,a,w;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        l=(a*100)/20;
        w=(a*60)/20;
        cout<<"Case "<<i<<":"<<endl;
        cout<<-((l*45)/100)<<" "<<w/2<<endl;
        cout<<((l*55)/100)<<" "<<w/2<<endl;
        cout<<((l*55)/100)<<" "<<-(w/2)<<endl;
        cout<<-((l*45)/100)<<" "<<-(w/2)<<endl;
    }
    return 0;
}
