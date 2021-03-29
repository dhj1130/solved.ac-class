#include <iostream>
using namespace std;

int main(void) {
	int a[10];
	int b[42] = {0,};
	int c, count = 0;
	for(int i = 0; i < 10; i++) {
		cin>>a[i];
		c = a[i] % 42;
		b[c]++;
	}
	for(int i = 0; i < 42; i++) {
		if(b[i] != 0) count++;
	}
	cout<<count;
}
