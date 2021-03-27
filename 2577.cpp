#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	int d = a * b * c;
	string str = to_string(d);
	int num[10];
	for (int i = 0; i < str.size(); i++)
	{
		num[atoi((str[i]).c_str())]++;
	}
}
