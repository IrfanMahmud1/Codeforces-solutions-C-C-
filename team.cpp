#include<iostream>
using namespace std;
int main()
{
    int n,k,p,a;
    cin >> n;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        cin >> k >> p >> a;
        if(k+p+a>=2)
        {
            ans++;
        }
    }
    cout<<ans;
}
