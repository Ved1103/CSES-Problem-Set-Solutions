//author: VedBrahmbhatt
#include <bits/stdc++.h>
using namespace std;

#define arr array
#define pb push_back
#define mk make_pair
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define pii pair<int, int>
#define umap unordered_map
#define imax INT_MAX
#define imin INT_MIN
#define nL "\n"
#define vll vector<long long>
#define PI 3.1415926535897932384626433832795
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()

string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

typedef vector<int> v;
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

// void solve() {
    
// }

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int tc = 1;
    // // cin >> tc;
    // for (int t = 1; t <= tc; t++) {
    //     // cout << "Case #" << t << ": ";
    //     solve();
    // }
    int n;
    cin >> n;
    if(n%2==0){
        cout<< "NO"<<endl;
    }
    else{
        cout<< "YES"<<endl;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            a[i]=i+1;
        }
        for(int i=0;i<n;i++){
            b[i]=i+1;
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                swap(b[i],b[i+1]);
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }

        
    }
}