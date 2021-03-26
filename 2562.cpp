#include <iostream>
using namespace std;
int main(void) {
	int a[9];
	for(int i = 0; i < 9; i++) {
		cin>>a[i];
	}
	int max = a[0];
	int maxint;
	for(int i = 0; i < 9; i++) {
		if(a[i] >= max) {
			max = a[i];
			maxint = i+1;
		}
	}
	cout<<max<<endl;
	cout<<maxint;
	return 0;
}
