#include <iostream>

using namespace std;

int min(int a, int b) {
	return (a < b)? a:b;
}

int main() {
	
	int ncoins = 3, s = 11;
	int c[3] = {1, 3, 5}, n[s + 1];

	n[0] = 0;
	for(int i = 0; i <= s; i++) {
		n[i] = i;
		for(int j = 0; j < ncoins; j++) {
			if((i - c[j]) >= 0) {
				n[i] = min(1 + n[i - c[j]], n[i]);
			}
		}
	}

	cout << n[s] << endl;

	return 0;
}
