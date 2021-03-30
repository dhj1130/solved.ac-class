#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}
	int k[1001], sum = 0;
	k[0] = 0; k[1] = 0;
	for(int i = 2; i <= 1000; i++) {
		k[i] = i;
	}
	for(int i = 2; i <= 1000; i++) {
		if(k[i] == 0) continue;
		for(int j = i + i; j <= 1000; j += i) {
			k[j] = 0;
		}
	}
	for(int i = 0; i < n; i++) {
		if(k[a[i]] != 0) sum++;
	}
	cout<<sum;
}
