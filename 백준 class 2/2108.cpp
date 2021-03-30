#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	cin>>n;
	int a[n];
	int sum = 0;
	int visit[8001] = {0,};
	for(int i = 0; i < n; i++) {
		cin>>a[i];
		sum += a[i];
		visit[a[i] + 4000]++;
	}
	double mean = (double)sum / n;
	if (mean > 0) mean += 0.5;
	else mean -= 0.5;
	cout<<(int)mean<<"\n";
	sort(a, a + n);
	cout<<a[n / 2]<<"\n";
	int freq = 0;
	int location = 0;
	for(int i = 0; i < 8001; i++) {
		if(freq < visit[i]) {
			freq = visit[i];
			location = i;
		}
	}
	for(int i = location + 1; i < 8001; i++) {
		if(freq == visit[i]) {
			location = i;
			break;
		}
	}
	cout<<location - 4000<<"\n";
	
	cout<<a[n-1] - a[0]<<"\n";
	
}
