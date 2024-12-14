#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <iomanip>
#define endl '\n'
#define int long long
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define rep2(i,a,b) for(int i=(a);i>=(b);i--)
using namespace std;
template<typename T>
void cc(vector<T> tem) { for (auto x : tem) cout << x << ' '; cout << endl; }
void cc(int a) { cout << a << endl; }
void cc(int a, int b) { cout << a << ' ' << b << endl; }
void cc(int a, int b, int c) { cout << a << ' ' << b << ' ' << c << endl; }
void fileRead() {
#ifdef LOCALL
    freopen("D:\\AADVISE\\cppvscode\\CODE\\in.txt", "r", stdin);
    freopen("D:\\AADVISE\\cppvscode\\CODE\\out.txt", "w", stdout);
#endif
}
void kuaidu() { ios::sync_with_stdio(false), cin.tie(0), cout.tie(0); }
inline int max(int a, int b) { if (a < b) return b; return a; }
inline int min(int a, int b) { if (a < b) return a; return b; }
void cmax(int& a, const int b) { if (b > a) a = b; }
void cmin(int& a, const int b) { if (b < a) a = b; }
using PII = pair<int, int>;
using i128 = __int128;
//--------------------------------------------------------------------------------
const int N = 1e5 + 10;
const int M = 1e6 + 10;
const int mod = 1e9 + 7;
const int INF = 1e16;
int n, m, T;

//--------------------------------------------------------------------------------
int cnt;


signed main() {
    fileRead();
    kuaidu();
    T = 1;
    //cin >> T;
    while (T--) {
		cin>>n;
		cout<<n;
    }
    return 0;
}
/*


*/
