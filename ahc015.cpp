#include <vector>
//#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using ld = long double;
using unit = unsigned int;
using ull = unsigned long long;
using vl = vector<ll>;
using vvl = vector<vl>;
using vi = vector<int>;
using vvi = vector<vi>;
using vb = vector<bool>;
using vvb = vector<vb>;
using vd = vector<ld>;
using vvd = vector<vd>;
using vc = vector<char>;
using vvc = vector<vc>;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
#define repi(j, i, n) for (int j = i; j < (int)(n); j++)
#define repr(i, n) for (int i = (int)(n-1); i >= 0; i--)
#define repin(e, a) for (auto&& e: (a))
#define len(v) v.size()
#define pb push_back


struct ahc015 {
    vl f;

    void f_input(const vl a) {
        if (len(f) == 0)repin(i, a)f.pb(i);
        else rep(i, 100)f[i] = a[i];
    }

    char operatons(int p, int count) {
        ll x = f[count], y = f[count + 1];
        if (y == 1)return 'F';
        else if (x == 1) return 'B';
        else if (y == 2) return 'L';
        else return 'R';
    }
};

//int main(){}