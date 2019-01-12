//Md. Imran Nazir Emon
//Dept. of Computer Science & Engineering
//University of Asia Pacific
//Email: 18201071@uap-bd.edu

#include<bits/stdc++.h>
using namespace std;

#define pf printf
#define sf scanf
#define vint vector<int>
#define vstr vector<string>
#define pb push_back
#define SS stringstream

#define f1(i, a) for(llu i=0; i<(a); i++)
#define f2(i, a) for(int i=1; i<=(a); i++)
#define f3(a, b) for(int i=(a); i<=(b); i++)
#define f4(i, a) for(int i=(a); i>0; i--)
#define test(z, a) for(int z=1; z<=(a); z++)

#define READ freopen("input.txt", "r", stdin)
#define ROUT freopen("output.txt", "w", stdout)

#define nouka "Yes"
#define dhan "No"

typedef double db;
typedef long long ll;
typedef unsigned long long llu;
typedef long long ll;

const db PI = acos(-1.0);
const llu MAX = LONG_MAX;

llu in() { llu a;scanf("%llu", &a); return a;}
db din(){ db a;scanf("%lf",&a); return a; }

ll gcd(ll a, ll b){ if(b==0) return a; else return gcd(b,a%b);}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

int lastDigitSum(llu a, llu b){ return (a%10)+(b%10);}
int binaryCal(int dn) {  if (dn == 0) return 0; else return (dn % 2 + 10 * binaryCal(dn / 2)); }

ll findBinary(ll decimal){
   if (decimal == 0)
      return 0;
   else
      return (decimal % 2 + 10 * findBinary(decimal / 2));
}

ll fact(int n){ if(n<=1) return 1; else return n * fact(n-1);}

void fasterIO() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

int cap = 10;
int weight [5];
int price [5];
int dp[100];

int ans (int index, int c){
    if(index = 0){
        if(weight[index] <= c) return price[index];
        return 0;
    }
    if(dp[index] != 0) return dp[index-1];
    int rate1 , rate2;
    if(weight[index] <= c ){
            rate1 = ans(index-1, c-weight[index]) + price[index];
            rate2 = ans(index-1, c);
    }
    rate2 = ans(index-1, c);
    return dp[index]= max(rate1, rate2);
}
int main()
{
    //READ;
    //fasterIO();
   // memset(dp, -1, sizeof(dp));
    int ans1;
    cout<<ans(4, 4)<<endl;
//    cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";

    return 0;
}

