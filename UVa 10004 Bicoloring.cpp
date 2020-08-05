/// Coded by Dhiman Sarker Bappi (Dhimanda) - RMSTU

/// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=945


#include<bits/stdc++.h>
using namespace std;
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
#define    nl          '\n'
#define    endl        '\n'
#define    fori(i,b,e) for(int (i)=(b); (i) <= (e); (i)++)
#define    for0(i,n)   for(int (i)=0; (i) < (n); (i)++)
#define    sp          fixed << setprecision
#define    all(x)      x.begin(),x.end()

// ===================== DEBUG  ==========================
#ifdef dhimanpc
vector<string>vec_spltr(string s){s+=',';vector<string>res;while(!s.empty())
res.push_back(s.substr(0, s.find(','))),s=s.substr(s.find(',')+1);return res;}
void dbg_out(vector<string>__attribute__((unused))args,__attribute__((unused))int idx,
__attribute__((unused))int LINE_NUM){cerr<<endl;}template<typename Head,typename... Tail>
void dbg_out ( vector <string> args, int idx, int LINE_NUM, Head H, Tail... T)
{if(idx>0)cerr<<", ";else cerr << "Line(" << LINE_NUM << ") ";stringstream ss;ss<<H;
cerr<<args[idx]<<" = "<<ss.str();dbg_out(args,idx+1,LINE_NUM, T...);}
#define    debug(...) dbg_out(vec_spltr(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#define    in_file     freopen("input.c", "r", stdin)
#define    out_file    freopen("output.c", "w", stdout)
#define    fast        0
#else
#define    debug(...)  0
#define    in_file     0
#define    out_file    0
#define    fast        ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
#endif
// ===================== custom function ==========================
ll pow_mod(ll nn, ll pp, ll mm) { ll res = 1; while(pp > 0) { if(pp&1) res = (res * nn) % mm; pp = pp >> 1; nn = (nn * nn) % mm; } return res; }
int dhimanda();
// ===================== Main function ==========================
#define mx 10000+5
int vis[mx];
int col[mx];
std::vector<int> v[mx];
bool dfs(int s,int c){
    vis[s] = 1 ;
    col[s] = c;
    for(int i=0 ; i < v[s].size() ; i++) {
        int nxt = v[s][i];
        if(vis[nxt]==0){
            if(dfs(nxt,c^1)==false){
                return false;
            }
        }
        else{
            if(col[nxt]==col[s]) return false;
        }
    }
    return true;
}
int main()
{
    in_file;
    //out_file;
    //fast;
    int t=1;
    //cin >> t;
    while(1){
        int n,e;
        cin >> n;
        if(n!=0) cin >> e ;
        else return 0;
        for(int i=0 ; i < n+2 ; i++) {
            vis[i] = 0;
            col[i] = 0;
            v[i].clear();
        }
        for(int i=1 ; i <= e ; i++) {
            int x,y;
            cin>> x >> y;
            v[x].pb(y) , v[y].pb(x);
        }
        //col[1]=[1];
        if(dfs(1,1)==true) cout << "BICOLORABLE." << endl;
        else cout << "NOT BICOLORABLE." << endl; 
    }
    return 0;
}
// Contact : chessdhiman@gmail.com

