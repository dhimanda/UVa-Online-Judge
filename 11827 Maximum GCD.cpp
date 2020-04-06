/// Coded by Dhiman Sarker Bappi (Dhimanda) - RMSTU
//Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2927

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
    int t=Int;
    cin.ignore();
    while(t--){
        //printf("Case %d: ", i);
            string s;
            getline(cin,s);

            vector <int> v;
            v.clear();
            s+= ' ';
            int sz=0;
            string tmp="";
            for(int i=0 ; i < s.size() ; i++){
                if(s[i]!=' ') tmp += s[i];
                else {
                    stringstream geek(tmp);
                    int x;
                    geek >> x;
                    //cout << x <<endl ;
                    v.pb(x);
                    sz++;
                    tmp = "";
                }
            }
            int ans = 1;
            for(int i=0; i < sz ; i++) {
                for(int j=i ; j < sz ; j++){
                    if(v[i]!=v[j] and gcd(v[i],v[j])> ans) ans = gcd(v[i],v[j]);
                }
            }
            cout << ans << endl ;


    }
    return 0;
}


// Contact : chessdhiman@gmail.com
