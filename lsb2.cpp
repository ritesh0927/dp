#include <iostream>

using namespace std;

int max2(int a, int b) {
	return (a > b)? a:b;
}

int main() {
	int n, i, j, max = 0;
	cin >> n;
	int a[n], b[n];

	for(i = 0; i < n; i++) {
		cin >> a[i];
	}
	max = 0;

	for(i = 0; i < n; i++) {
		b[i] = 1;
		for(j = 0; j < i; j++) {
			if(a[i] > a[j]) {
				b[i] = max2(b[i], b[j] + 1);
			}
		}
		max = max2(max, b[i]);
	}

	cout << max << endl;

	return 0;
}
