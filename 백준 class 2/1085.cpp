#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int x, y, w, h;
	cin>>x>>y>>w>>h;
	int num1 = min(h - y, y);
	int num2 = min(w - x, x);
	int num = min(num1, num2);
	cout<<num;
	return 0;
}
