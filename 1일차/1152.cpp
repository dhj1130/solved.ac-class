#include <iostream> 
#include <cstring> 

using namespace std;

int main() { 
	int count = 0; 
	int length, i=0; 
	string str;
    
	getline(cin, str);
	while(1){ 
		if(str[i]==0) break; 
		else if((str[i] != 32) &&((str[i+1]==32)||(str[i+1] ==0))) count++;
		i++; 
	} 
	cout<<count;
    
	return 0; 
}
