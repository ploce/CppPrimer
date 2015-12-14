#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool f(const string &s1){
	return s1.size() > 4;
}

void elimDups(vector<string> &words){
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

int main()
{
	vector<string> word = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "the", "turtle" };
	elimDups(word);
	auto end_word = partition(word.begin(), word.end(), f);
	word.erase(end_word, word.end());
	for (auto &x : word)
		cout << x << " ";
	cout << endl;
	system("pause");
	return 0;
}