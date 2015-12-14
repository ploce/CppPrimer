#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

bool isShorter(const string& s1, const string& s2){
	return s1.size() < s2.size();
}

void elimDups(vector<string>& words){
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

int main(){
	vector<string> words = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "the", "turtle" };

	elimDups(words);
	stable_sort(words.begin(), words.end(), isShorter);
	for (const auto &s : words)
		cout << s << " ";
	cout << endl;

	system("pause");
	return 0;
}