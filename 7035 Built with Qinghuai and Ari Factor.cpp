#include<bits/stdc++.h>
using namespace std;
int a,b,c,test,t,n,val;
int main(){
    cin>>test;
    while(test--){
        int cnt=0;
        printf("Case #%d: ",++t);
        scanf("%d",&n);
        while(n--)scanf("%d",&val),cnt+=val%3;

        ///Yes only if all integer divides by zero,means if cnt == 0

        printf(cnt>0?"No\n":"Yes\n");
    }
}
