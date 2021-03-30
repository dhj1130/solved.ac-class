#include <iostream>
using namespace std;

int main(void) {
	int m, n;
	cin>>m>>n;
	int a[n];
	for(int i = 2; i  <= n; i++) {
		a[i] = i;
	}
	for(int i = 2; i <= n; i++) {
		if(a[i] == 0) continue;
		for(int j = i + i; j <= n; j += i) {
			a[j] = 0;
		}
	}
	for(int i = 2; i <=  n; i++) {
		if(a[i] != 0 && a[i] >= m) cout<<a[i]<<"\n";
	}
	return 0;
}
