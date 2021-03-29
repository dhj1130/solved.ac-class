#include <iostream>
using namespace std;

int main(void) {
	string str;
	cin>>str;
	int a[26];
	for(int i = 0; i < 26; i++) {
		a[i] = -1;
	}
	int num;
	for(int i = 0; i < str.length(); i++) {
		if(a[str[i] - 97] == -1) {
			a[str[i] - 97] += i + 1;
		}
	}
	for(int i = 0; i < 26; i++) {
		cout<<a[i]<<" ";
	}
}
