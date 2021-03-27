#include <iostream>
using namespace std;

int main(void) {
	string word;
	int count[26] = {0,};
	const string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ?";
	cin>>word;
	int a;
	for(int i = 0; i <= word.size(); i++) {
		if(65 <= word[i] && word[i] <= 90) {
			count[((int)word[i])-65]++;
		}
		else if(97 <= word[i] && word[i] <= 122) {
			count[((int)word[i])-97]++;
		} 
	}
	int max = count[0];
	int maxint;
	for(int i = 0; i <= 25; i++) {
		if (count[i] > max) {
			max = count[i];
			maxint = i;
		}
	}
	for(int i = 0; i <= 25; i++) {
		if(count[i] == max && maxint != i) {
			maxint = 26;
		}
	}
	cout<<str[maxint];
}
