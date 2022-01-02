#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    map<int, int> mp;
    for(i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
    }
    cout<<"The non duplicate elements are: "<<endl;
    for(auto i=mp.begin();i!=mp.end();i++)
    {
        if(i->second==1)
            {cout<<i->first<<" ";}
    }
}
