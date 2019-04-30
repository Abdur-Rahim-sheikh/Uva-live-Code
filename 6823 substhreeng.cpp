#include<bits/stdc++.h>
#define INF 1073741824
#define ll long long
#define PI 2*acos(0.0)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>

using namespace std;

int main()
{

   ll i,j,k,m,n,val,t=0,cnt,test;

    //freopen("000input.txt","r",stdin);
    string a;
    while(cin>>a){
        cnt=0;
        ll len = a.size();
        for(i=0;i<len;i++){

            if(a[i]>='0' && a[i]<='9'){
                ll current_run[3]={1,0,0},sum=0;
                while(a[i]>='0' && a[i]<='9'){
                    sum+=a[i]-'0';
                    sum=sum%3;
                    cnt+=current_run[sum];
                    current_run[sum]++;
                    i++;
                }
            }
        }
        printf("%lld\n",cnt);
    }
    //free();   //if pointer array
    return 0;
}
