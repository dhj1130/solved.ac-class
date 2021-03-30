#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	int t;
	cin>>t;
	for(int i = 0; i < t; i++) {
		int n, m, num, cnt = 0;
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		cin>>n>>m;
		for(int j = 0; j < n; j++) {
			cin>>num;
			q.push({j, num});
			pq.push(num);
		}
		while(!q.empty()) {
			int index = q.front().first;
			int value = q.front().second;
			q.pop();
			
			if(value == pq.top()) {
				pq.pop();
				cnt++;
				if(index == m) {
					cout<<cnt<<'\n';
					break;
				}
			}
			else {
				q.push({index, value});
			}
		}
	}
	return 0;
}
