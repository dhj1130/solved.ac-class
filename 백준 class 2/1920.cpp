#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> a;

int search(int start, int end, int target) {
	if(start > end) return 0;
	else {
		int mid = (start + end) / 2;
		if(a[mid] > target) return search(start, mid - 1, target);
		else if(a[mid] < target) return search(mid + 1, end, target);
		else return 1;
	}
}


int main(void)  {
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin.tie(0);
	int n, m;
	cin>>n;
	int num;
	for(int i = 0; i < n; i++) {
		cin>>num;
		a.push_back(num);
	}
	sort(a.begin(), a.end());
	cin>>m;
	for(int i = 0; i < m; i++) {
		cin>>num;
		cout<<search(0, n, num)<<"\n";
	}
}
