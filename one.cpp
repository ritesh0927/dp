#include <iostream>

using namespace std;

int min(int a, int b) {
	return (a < b)? a:b;
}

int main() {

	int n;
	
	cin >> n;

	int a[n + 1];
	
	a[1] = 0;
	for(int i = 2; i <= n; i++) {
		a[i] = 1 + a[i - 1];
		if(i%2 == 0) {
			a[i] = min(a[i], 1 + a[i/2]);
		}
		if(i%3 == 0) {
			a[i] = min(a[i], 1 + a[i/3]);
		}
	}

	cout << a[n];

	return 0;
}
