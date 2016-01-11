#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<functional>

using namespace std;

using namespace placeholders;

bool check_size(const string &word, string::size_type sz)
{
	return word.size() >= sz;
}

string make_plural(size_t ctr, const string &word, const string &ending){
	return (ctr > 1) ? word + ending : word;
}

void elimDups(vector<string> &words){
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz){
	elimDups(words);
	stable_sort(words.begin(), words.end(),
		[](const string &a, const string &b) {return a.size() < b.size(); });

	auto wc = find_if(words.begin(), words.end(),
		bind(check_size, _1, sz));
	
	auto count = words.end() - wc;

	cout << count << " " << make_plural(count, "word", "s")
		<< " of length " << sz << " or longer" << endl;
	for_each(wc, words.end(),
		[](const string &s){cout << s << " "; });
	cout << endl;
}

int main(){
	vector<string> word = { "the", "quick", "red", "fox", "jumps",
		"over", "the", "slow", "the", "turtle" };
	biggies(word, 4);
	cout << endl;
	system("pause");
	return 0;
}