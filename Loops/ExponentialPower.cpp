#include <iostream>
using namespace std;

int main() {
	long long x, n, expo=1;
	cin >> x >> n;
	
	for(long long i = 1; i <= n; i++){
	    expo = expo * x;
	}
	cout << expo;
}
