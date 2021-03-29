#include <iostream>
using namespace std;

int main(void) {
	int n1, n2;
	cin>>n1>>n2;
	int n3 = (n1%10 * 100) + ((n1/10)%10)*10 + n1/100;
	int n4 = (n2%10 * 100) + ((n2/10)%10)*10 + n2/100;
	if(n3 > n4) cout<<n3;
	else cout<<n4;
}
