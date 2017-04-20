#include <iostream>

using namespace std;

int max2(int a, int b) {
	return (a > b)? a:b;
}

int main() {

	int n, i, max;
	cin >> n;
	int a[n], b[n];

	for(i = 0; i < n; i++) {
		cin >> a[i];
	}
	max = 0;

	b[0] = 1;
	for(i = 1; i < n; i++) {	
		if(a[i] >= a[i - 1]) {
			b[i] = 1 + b[i - 1];
		}
		else {
			b[i] = 1;
		}
		max = max2(max, b[i]);
	}

	cout << max << endl;

	return 0;
}
