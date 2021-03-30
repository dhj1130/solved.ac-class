#include <iostream>
using namespace std;

int fel(string str, int length) {
	for(int i = 0; i < length/2; i++) {
		if(str[i] != str[length-i-1]) return 0;
	}
	return 1;
}

int main(void) {
	string str;
	while(str != "0") {
		str ="";
		cin>>str;
		if(str == "0") return 0;
		int leng = str.length();
		if(fel(str, leng) == 1) cout<<"yes"<<endl;
		else if(fel(str, leng) == 0) cout<<"no"<<endl;
	}
}
