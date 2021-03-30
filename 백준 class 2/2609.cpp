#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main(void) {
	int num1, num2;
	cin>>num1>>num2;
	cout<<gcd(num1, num2)<<endl;
	cout<<lcm(num1, num2)<<endl;
}
