#include<iostream>
#include<fstream>
#include<sstream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

void elimDups(vector<string>& words){
	for (auto &x : words)
		cout << x << " ";
	cout << endl;

	sort(words.begin(), words.end());
	for (auto &y : words)
		cout << y << " ";
	cout << endl;

	auto end_unique = unique(words.begin(), words.end());
	for (auto &z : words)
		cout << z << " ";
	cout << endl;

	words.erase(end_unique, words.end());
	for (auto &u : words)
		cout << u << " ";
	cout << endl;
}

int main(){
	string line, word;
	ifstream fin("word.txt");
	vector<string> words;

	while (getline(fin, line)){
		istringstream sin(line);
		while (sin >> word)
			words.push_back(word);
	}

	elimDups(words);

	system("pause");
	return 0;
}