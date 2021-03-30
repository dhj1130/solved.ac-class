#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
	int t, a, score = 0;
	cin>>t;
	string c;
	a = 0;
	for(int i = 0; i < t; i++) {
		score = a = 0;
		cin>>c;
		for(int j = 0; j < c.length(); j++) {
			if(c[j] == 'O') {
				a++;
			}
			else if(c[j] == 'X') {
				a = 0;
			}
			score += a;
		}
		cout<<score<<"\n";
		score = 0;
	}
}
