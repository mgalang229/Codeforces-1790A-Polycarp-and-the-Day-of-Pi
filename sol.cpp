#include <bits/stdc++.h>
using namespace std;

void test_case(int tc) {
	string s;
	cin >> s;
	string pi = "314159265358979323846264338327";
	int cnt = 0;
	for (int i = 0; i < (int) s.size(); i++) {
		if (s[i] != pi[i]) {
			break;
		}
		cnt++;
	}
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
