#include <bits/stdc++.h>
using namespace std;

#define LL long long 
#define DEB(x) cout << #x << "=" << x << endl
#define DEB2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define PB push_back
#define F first
#define S second
#define ALL(x) x.begin(), x.end()
typedef pair<int, int>  PII;
typedef pair<LL, LL>    PLL;
const int MOD = 1000000007;
#define PI 3.1415926535897932384626

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL t;
    cin>>t;
    while(t--){
        vector<LL> x(4),y(4);
        LL res=0;
        cin>>x[0]>>y[0];
        for(LL i=1;i<4;i++){
            cin>>x[i]>>y[i];

            if(x[i]-x[i-1]!=0) {
                if(x[i]<x[i-1]) swap(x[i-1], x[i]);

                res= x[i]- x[i-1];
                res*=res;
            }
            

        }

        cout<<res<<endl;
    
    }
}



