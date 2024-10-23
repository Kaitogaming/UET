#include <iostream>
//#include <string>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    string b;
    cin>>a>>b;
    if(a.size()<b.size()) swap(a,b);
    if(a.size()==b.size())
    {
        for(ll i=0;i<a.size();i++)
        {
            if(a[i]<b[i])
            {
                swap(a,b);
                break;
            }
        }
    }
    //cout<<a<<endl<<b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    ll nho=0;
    string ans;
    for(ll i=0;i<b.size();i++)
    {
         ll num1=a[i]-'0';
         ll num2=b[i]-'0';
         ll check=num1+num2+nho;
         if(check<10)
         {
             ans+=check+'0';
             nho=0;
         }else
         {
             ans+=check%10+'0';
             nho=1;
         }
    }
    //cout<<nho<<endl;
    for(ll i=b.size();i<a.size();i++)
    {
        //cout<<a[i]<<"kt"<<endl;
        ll check=a[i]-'0'+nho;
        //cout<<check<<endl;
        if(check>9)
        {
            ans+='0';
            nho=1;
        }else
        {
            ans+=check+'0';
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
}
