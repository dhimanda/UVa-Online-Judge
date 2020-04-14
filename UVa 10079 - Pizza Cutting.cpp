/// Coded by Dhiman Sarker Bappi (Dhimanda) - RMSTU

#include<bits/stdc++.h>
using namespace std;
#define    in_file     freopen("input.txt", "r", stdin)
#define    out_file    freopen("output.txt", "w", stdout)
#define    fast        ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define    F           first
#define    S           second
#define    pb          push_back
#define    popb        pop_back
#define    pf          push_front
#define    popf        pop_front
#define    lcm(a,b)    (a*b)/gcd(a,b)
#define    gcd(a,b)    __gcd(a,b)
#define    pi          2*acos(0)
#define    elif        else if
#define    ll          long long
#define    sp          fixed<<setprecision
#define    nl          '\n'
#define    endl        '\n'
#define    forr(i,b,e) for(int (i)=(b); (i) <= (e); (i)++)
#define    fora(i,n)   for(int (i)=0; (i) < (n); (i)++)


int Int(){int x;scanf("%d", &x);return x;}
#define    Int         Int()
#define    mx          100010
void dhimanda();
int main()
{
    //fast;
    //in_file;
    //out_file;
    int t=1;
    //t=Int;
    forr(i,1,t){
        //printf("Case %d: ", i);
        dhimanda();
    }
    return 0;
}
void dhimanda(){
    while(1) {
        ll n;
        cin >> n;
        if(n<0) break;
        cout <<  (n * (n + 1) / 2 + 1) << endl ;
    }

}

// Contact : chessdhiman@gmail.com


