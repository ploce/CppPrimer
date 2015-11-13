#include<iostream>
#include<string>
#include<map>
#include<set>

using namespace std;

int main(){
	map<string, size_t> word_count;
	set<string> exclude = { "The", "But", "And", "Or", "An", "A",
							"the", "but", "and", "or", "an", "a" };
	string word;

	while (cin >> word)
		if (exclude.find(word) == exclude.end())
			++word_count[word];
/*  11.20

	while (cin >> word){
		auto ret = word_count.insert({ word, 1 });
		if (!ret.second)
			++ret.first->second;
	}
*/	

	for (const auto &w : word_count)
		cout << w.first << " occurs " << w.second
			<< ((w.second > 1) ? "times" : "time") << endl;

	return 0;
}
