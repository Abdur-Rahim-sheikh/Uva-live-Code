#include<bits/stdc++.h>
#define INF 1073741824
#define ll long long
#define PI 2*acos(0.0)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>

using namespace std;
double solve(int n,string base,int p[]){
    double sum=0;
    for(int i=0;i<n;i++){
        if(p[i]==0)continue;
        double prob =(double) p[i]/100;

        if(base=="bit")sum+=prob*log2(prob);
        else if(base == "nat") sum+=prob * log(prob);
        else sum+=prob * log10(prob);
    }
    return -sum;
}
int main()
{

    int i,j,k,m,n,val,cnt,test,t=0;

    //freopen("000input.txt","r",stdin);
    cin>>test;
    string a;
    while(test--){
        cin>>n>>a;
        int p[n+10];
        for(i=0;i<n;i++)scanf("%d",&p[i]);

       printf("%0.8lf\n",solve(n,a,p));
    }

    //free();   //if pointer array
    return 0;
}
