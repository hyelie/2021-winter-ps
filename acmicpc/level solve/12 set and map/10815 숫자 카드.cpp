#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <cmath>
#include <map>
#include <cmath>
#include <set>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main(void) {
	cin.tie(0);
	cout.tie(0);
	std::ios_base::sync_with_stdio(0);

	int N, M, input;
	set<int> s;
	cin>>N;
	while(N--){
		cin>>input;
		s.insert(input);
	}

	cin>>M;
	while(M--){
		cin>>input;
		if(s.find(input) == s.end()) cout<<"0 ";
		else cout<<"1 ";
	}
	

	return 0;
}