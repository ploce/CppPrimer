#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
#include<list>

using namespace std;

int main(){
	vector<int> num = { 1, 23, 5, 2, 6, 22, 7, 27, 23, 77, 13,
						665, 3, 56, 4, 32, 57, 23, 23, 76, 1 };
	list<string> s = { "abc", "ab", "dca", "abc", "bc" };
	auto num_beg = num.begin();
	auto num_end = num.end();
	auto s_beg = s.begin();
	auto s_end = s.end();
	int val_i = 23;
	string val_s = "abc";

	int c_i = count(num_beg, num_end, val_i);
	int c_s = count(s_beg, s_end, val_s);
	int sum = accumulate(num_beg, num_end, 0);

	cout << "number of \"23\" is " << c_i << endl;
	cout << "number of \"abc\" is " << c_s << endl;
	cout << "sum is " << sum << endl;

	fill_n(num_beg, num.size(), 0);
	for (auto x : num)
		cout << x << " ";
	cout << endl;

	system("pause");
	return 0;
}