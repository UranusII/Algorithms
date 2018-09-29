//https://codeforces.com/blog/entry/61587
//http://www.cplusplus.com/reference/chrono/
#include <bits/stdc++.h>

using namespace std;

using urand = mt19937;
using llurand = mt19937_64;

urand vrand(chrono::high_resolution_clock::now().time_since_epoch().count());
chrono::high_resolution_clock::time_point start_time = chrono::high_resolution_clock::now();

template<typename T>
inline T elapsed() {
	chrono::duration<long double> ans = (chrono::high_resolution_clock::now() - start_time);
	return (T) ans.count();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//unsigned x = vrand();
	//shuffle(v.begin(), v.end(), vrand);
	while(elapsed<int>() < 5);
	cout << "elapsed time = " << elapsed<int>() << '\n';
	return 0;
}