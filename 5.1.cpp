#include <iostream>
using namespace std;

int main() {
	int a1, a2, n;
	cin >> a1 >> a2 >> n;
	int t = a2 - a1;
	int ans = a1;
	for (int i = 1; i < n; i++) {
		ans += t;
	}
	cout << ans;
	return 0;
}