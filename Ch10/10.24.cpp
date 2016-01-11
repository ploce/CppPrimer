#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;
using namespace placeholders;

bool check_size(const string &word, string::size_type sz)
{
	return word.size() < sz;
}

int main(){
	string s{ "abcd" };
	vector<int> num{ 3, 2, 5, 4, 7 };

	auto x = find_if(num.begin(), num.end(),
		bind(check_size, s, _1));

	cout << *x << endl;
	system("pause");
	return 0;
}