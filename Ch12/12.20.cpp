#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>
#include"StrBlob.h"

using namespace std;

int main(){
	ifstream fin("text.txt");
	string line,word;
	StrBlob str;

	while (getline(fin, line)){
		istringstream sin(line);
		while (sin >> word)
			str.push_back(word);
	}

	for (StrBlobPtr pbeg(str.begin()), pend(str.end()); pbeg != pend; pbeg.incr())
		cout << pbeg.deref << endl;
	system("pause");
	return 0;
}