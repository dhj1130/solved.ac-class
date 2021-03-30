#include <iostream>
using namespace std;

int main(void) {
	int n1, n2;
	cin>>n1>>n2;
	if(n2 < 45 && n1 > 0) {
		n1--;
		n2 += 15;
	}
	else if(n1 == 0 && n2 < 45) {
		n1 += 23;
		n2 += 15;
	}
	else if(n2 >= 45) {
		n2 -= 45;
	}
	cout<<n1<<" "<<n2;
}
