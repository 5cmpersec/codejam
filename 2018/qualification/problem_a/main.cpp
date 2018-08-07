#include <iostream>

using namespace std;

int main() {
	int t, n;
	string s;
	cin >> t;
	for (int i = 1; i <= t; ++i) {
		cin >> s >> n;
		cout << "Case #" << i << ":" << s << " " << n << endl;
	}
	return 0;
}
