#include<iostream>
#include<vector>
#include<utility>
#include<string>

using namespace std;

int main(){
	vector<pair<string, int>> x;
	string s;
	int n;
	while (cin >> s >> n)
		x.push_back(make_pair(s, n));
//		x.push_back({ s, n });
//		x.emplace_back(s, n);  //��β������һ��Ԫ�أ�����void

	for (auto &a : x)
		cout << a.first << " " << a.second << endl;
	
	return 0;
}