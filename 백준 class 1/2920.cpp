#include <iostream>
using namespace std;

int main(void) {
	int a[8];
	for(int i = 0; i < 8; i++) {
		cin>>a[i];
	}
	int i = 0;
	while(a[i] < a[i+1]) {
		i++;
		if(i == 7) {
			cout<<"ascending";
			return 0;
		}
	}
	while(a[i] > a[i+1]) {
		i++;
		if(i == 7) {
			cout<<"descending";
			return 0;
		}
	}
	cout<<"mixed";
	return 0;
}
