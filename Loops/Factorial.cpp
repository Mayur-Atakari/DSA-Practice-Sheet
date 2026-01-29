#include <iostream>
using namespace std;

int main() {
	long long n;
	long long fact=1;
	cin >> n;
	 
	for(long long i = n; i>=1; i--){
	    fact = fact * i;
	} 
	cout << fact;
}
