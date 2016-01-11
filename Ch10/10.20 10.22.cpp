#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
#include<functional>
using namespace std;
using namespace placeholders;

void elimDups(vector<string> &words){
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

bool check_size(const string &word, string::size_type sz)
{
	return word.size() >= sz;
}
int main()
{
	vector<string> word = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "the", "turtle" };
	elimDups(word);

	//10.20
	int sz = 6;
	cout << count_if(word.begin(), word.end(),
		[sz](const string &a){return a.size() >= sz; });

//	10.22
//	cout << count_if(word.begin(), word.end(),
//		bind(check_size, _1, 6));

	cout << endl;
	system("pause");
	return 0;
}