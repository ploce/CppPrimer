#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>

using namespace std;

int main(){
	ifstream in("./test.txt");
	istream_iterator<string> string_in(in), string_eof;
	ostream_iterator<string> string_out(cout, " ");
	vector<string> word;

	while (string_in != string_eof)
		word.push_back(*string_in++);

	copy(word.begin(), word.end(), string_out);
	cout << endl;

	system("pause");
	return 0;
}