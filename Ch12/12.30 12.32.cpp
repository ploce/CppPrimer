#include<iostream>
#include<fstream>
#include"TextQuery.h"

using namespace std;

void runQueries(ifstream& infile){
	TextQuery tp(infile);
	while (true){ 
		cout << "enter word to look for, or q to qiut:";
		string s;
		if (!(cin >> s) || s == "q") break;
		print(cout, tp.query(s)) << endl;
	}
}

int main(){
	runQueries(ifstream("./test.txt"));
	system("pause");
	return 0;
}