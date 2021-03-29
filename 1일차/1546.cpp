#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin>>n;
	int a[n];
	double sum = 0;
	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}
	int max = a[0];
	for(int i = 0; i < n; i++) {
		if(max <= a[i]) max = a[i];
	}
	for(int i = 0; i < n; i++) {
		sum += (double)a[i] * 100 / max;
	}
	printf("%.2f", sum / n);
}
