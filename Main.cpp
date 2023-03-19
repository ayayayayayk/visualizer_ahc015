# include <Siv3D.hpp>

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
using str = string;
using vs = vector<str>;
using vvs = vector<vs>;
using pii = pair<int, int>;
using vpii = vector<pii>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
using psl = pair<str, ll>;
using vpsl = vector<psl>;
using pls = pair<ll, str>;
using vpls = vector<pls>;
using psi = pair<str, int>;
using vpsi = vector<psi>;
using pis = pair<int, str>;
using vpis = vector<pis>;
using tiii = tuple<int, int, int>;
using tiil = tuple<int, int, ll>;
using tili = tuple<int, ll, int>;
using tlii = tuple<ll, int, int>;
using till = tuple<int, ll, ll>;
using tlil = tuple<ll, int, ll>;
using tlli = tuple<ll, ll, int>;
using tiis = tuple<int, int, str>;
using tisi = tuple<int, str, int>;
using tsii = tuple<str, int, int>;
using tiss = tuple<int, str, str>;
using tsis = tuple<str, int, str>;
using tssi = tuple<str, str, int>;
using tlll = tuple<ll, ll, ll>;
using tsss = tuple<str, str, str>;
using tssl = tuple<str, str, ll>;
using tsls = tuple<str, ll, str>;
using tlss = tuple<ll, str, str>;
using tsll = tuple<str, ll, ll>;
using tlsl = tuple<ll, str, ll>;
using tlls = tuple<ll, ll, str>;
using tils = tuple<int, ll, str>;
using tisl = tuple<int, str, ll>;
using tlis = tuple<ll, int, str>;
using tsil = tuple<str, int, ll>;
using tlsi = tuple<ll, str, int>;
using tsli = tuple<str, ll, int>;
const ll INF = (ll)9223372036854775807;
const int IINF = (int)2147483647;
const ld PI = acos((ld)-1);
const str yes = "Yes";
const str no = "No";
const ld EPS = 1E-12;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
#define repi(j, i, n) for (int j = i; j < (int)(n); j++)
#define repr(i, n) for (int i = (int)(n-1); i >= 0; i--)
#define repin(e, a) for (auto&& e: (a))
#define pb push_back
#define prt(a) cout << a << endl
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define str(s) to_string(s)
template<class T> ld lg(const T& a, const T& b) { return log(a) / log(b); }
template <class T, class U> ll count(T& a, U b) { ll x = 0; repin(i, a)if (i == b)x += 1; return x; }
inline str toUpper(str s) {
	transform(s.cbegin(), s.cend(), s.begin(), ::toupper);
	return s;
}
inline str toLower(str s) {
	transform(s.cbegin(), s.cend(), s.begin(), ::tolower);
	return s;
}

// vector
#define srt(a) sort(all(a))
#define srtr(a) sort(rall(a))
#define len(a) (ll)(a).size()
template<class T> inline void print(const T& a) { ll x = len(a); rep(i, x) x > 1 ? i < x - 1 ? i>0 ? cout << " " << a[i] : cout << a[i] : cout << " " << a[i] << endl : prt(a[i]); }
template<class T> inline void scan(T& a) { ll x = len(a); rep(i, x) cin >> a[i]; }
template<class T>inline void vec_sortl(vector<T>& s) { sort(all(s), [](T& x, T& y) { return len(x) < len(y); }); }
template<class T> inline ll vec_max(T& a) { return *max_element(all(a)); }
template<class T> inline ll vec_min(T& a) { return *min_element(all(a)); }
template<class T> inline ll vec_sum(T& a) { ll x = 0; repin(i, a) x += i; return x; }
template<class T, class U> inline ll lbd(T& a, U x) { ll y; len(a) > 0 ? y = lower_bound(all(a), x) - a.begin() : y = -1; return y; }
template<class T, class U> inline ll ubd(T& a, U x) { ll y; len(a) > 0 ? y = upper_bound(all(a), x) - a.begin() : y = -1; return y; }
template<class T> inline void ers(T& a) { srt(a); a.erase(unique(all(a)), a.end()); }

// xoroshiro128++
struct xoroshiro128pp {
	vector<uint64_t> xoro_seed;
	inline void set_seed(const uint64_t s0, const uint64_t s1) {
		if (len(xoro_seed) == 0) {
			xoro_seed.push_back(s0);
			xoro_seed.push_back(s1);
		}
		else {
			xoro_seed[0] = s0;
			xoro_seed[1] = s1;
		}
	}
	static inline uint64_t rotl(const uint64_t x, int k) {
		return (x << k) | (x >> (64 - k));
	}
	uint64_t next(void) {
		const uint64_t s0 = xoro_seed[0];
		uint64_t s1 = xoro_seed[1];
		const uint64_t result = rotl(s0 + s1, 17) + s0;
		s1 ^= s0;
		xoro_seed[0] = rotl(s0, 49) ^ s1 ^ (s1 << 21);
		xoro_seed[1] = rotl(s1, 28);
		return result;
	}
	template<class T, class U> inline int64 rand(T a, U b) {
		assert(a < b);
		return next() % (b - a) + a;
	}
};

struct ahc015 {
	vi f;

	void f_input(const vi a) {
		if (f.size() == 0)for (auto&& i : (a))f.push_back(i);
		else for(int i=0;i<100;i++)f[i] = a[i];
	}

	char operations(int p, int count) {
		if (count == 99)return 'X';
		ll x = f[count], y = f[count + 1];
		if (y == 1)return 'F';
		else if (x == 1) return 'B';
		else if (y == 2) return 'L';
		else return 'R';
	}
};

void Main()
{

	TextEditState seed;
	const Array<int32> candy = { 1,2,3 };
	vector<char> operation(100);
	ahc015 solution;
	xoroshiro128pp xoro;
	Grid<int> grid(10, 10, 0);
	vector<ColorF> colors = { Palette::White ,{Palette::Green,0.2} ,{Palette::Blue,0.2} ,{Palette::Red,0.2} };
	Texture candy_tex{ U"🍬"_emoji }, choco_tex{ U"🍫"_emoji }, lolli_tex{ U"🍭"_emoji };
	vector<Texture> texture = { candy_tex,choco_tex,lolli_tex };
	int count = 200;
	double spawnTime = 0.0;
	double accumulator = 0.0;
	vector<int> a(100);
	const Font font{ 30 };
	ll score = 0;

	// the system will continue to run until U close the window.
	while (System::Update()) {
		for (auto y : step(grid.height()))
		{
			for (auto x : step(grid.width()))
			{
				Rect{ (x * 50 + 30), (y * 50 + 50), 50 }.draw(colors[0]);
				if (grid[y][x] > 0) {
					texture[grid[y][x] - 1].scaled(0.3).draw((x * 50 + 30), (y * 50 + 50));
					Rect{ (x * 50 + 30), (y * 50 + 50), 50 }.draw(colors[grid[y][x]]);
				}

			}
		}
		font(U"seed").draw(Vec2{ 560,50 }, Palette::White);
		font(U"score:", score).draw(Vec2{ 560,250 }, Palette::White);

		if (SimpleGUI::TextBox(seed, Vec2{ 560, 100 }) && seed.text.narrow().size() > 0) {
			count = 0;
			spawnTime = 0.0;
			score = 0;
			for (auto y : step(grid.height()))
			{
				for (auto x : step(grid.width()))
				{
					grid[y][x] = 0;
				}
			}
		}
		if (SimpleGUI::Button(U"Repeat", Vec2{ 560, 150 }) && seed.text.narrow().size() > 0) {
			count = 0;
			for (auto y : step(grid.height()))
			{
				for (auto x : step(grid.width()))
				{
					grid[y][x] = 0;
				}
			}
		}
		SimpleGUI::Slider(U"Speed", spawnTime, 0, 1, Vec2{ 560, 200 });
		accumulator += Scene::DeltaTime();
		if (count<200 && accumulator>spawnTime) {
			accumulator = 0;
			if (count == 0) {
				xoro.set_seed(((uint64_t)stoll(seed.text.narrow()) + 123456789), ((uint64_t)stoll(seed.text.narrow()) + 362436069));
				for (int i = 0; i < 100; i++) {
					a[i] = xoro.rand(1, 4);
				}
				solution.f_input(a);
			}
			if (count % 2 == 0) {
				int p = xoro.rand(0, 100 - count / 2) + 1;
				for (int j = 0; j < 10; j++) {
					for (int k = 0; k < 10; k++) {
						if (grid[j][k] == 0)p--;
						if (p == 0) {
							grid[j][k] = a[count / 2];
							break;
						}
					}
					if (p == 0)break;
				}
				operation[count / 2] = solution.operations(p, count / 2);
			}
			else {
				if (operation[count / 2] == 'F') {
					for(int k=0;k<10;k++) {
						int idx = 0;
						for(int j=0;j<10;j++) {
							if (grid[j][k] > 0) {
								swap(grid[j][k], grid[idx][k]);
								idx++;
							}
						}
					}
				}
				else if (operation[count / 2] == 'B') {
					for(int k=0;k<10;k++) {
						int idx = 9;
						for(int j=9;j>=0;j--) {
							if (grid[j][k] > 0) {
								swap(grid[j][k], grid[idx][k]);
								idx--;
							}
						}
					}
				}
				else if (operation[count / 2] == 'L') {
					for(int j=0;j<10;j++) {
						int idx = 0;
						for(int k=0;k<10;k++) {
							if (grid[j][k] > 0) {
								swap(grid[j][k], grid[j][idx]);
								idx++;
							}
						}
					}
				}
				else if (operation[count / 2] == 'R') {
					for(int j=0;j<10;j++) {
						int idx = 9;
						for(int k=9;k>=0;k--) {
							if (grid[j][k] > 0) {
								swap(grid[j][k], grid[j][idx]);
								idx--;
							}
						}
					}
				}
			}
			if (count == 199) {
				score = 0;
				int connected_component = 0;
				vector<vector<int>> c(10, vector<int>(10));
				vector<long long> candy_count(4);
				for(int i=0;i<10;i++)for(int j=0;j<10;j++) {
					candy_count[grid[i][j]]++;
					if (c[i][j] > 0)continue;
					set<pair<int, int>> s;
					s.insert(make_pair(i, j));
					while (s.size() > 0) {
						int y = (*begin(s)).first, x = (*begin(s)).second;
						s.erase(*begin(s));
						c[y][x] = 1;
						connected_component++;
						vector<vector<int>> root = { {1,0},{0,1},{-1,0},{0,-1} };
						for (auto&& k : (root)) {
							if (y + k[0] >= 0 && y + k[0] < 10 && x + k[1] >= 0 && x + k[1] < 10 && grid[y + k[0]][x + k[1]] == grid[y][x] && c[y + k[0]][x + k[1]] == 0) {
								s.insert(make_pair(y + k[0], x + k[1]));
							}
						}
					}
					score += connected_component * connected_component;
					connected_component = 0;
				}
				for(int i=1;i<4;i++)candy_count[0] += candy_count[i] * candy_count[i];
				score = score * 1000000 / candy_count[0];
			}
			count++;
		}
	}
}
