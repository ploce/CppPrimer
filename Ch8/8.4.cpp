#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

int main(){
	vector<string> data;
	string text;
	ifstream fin("./test.txt");
	
	while (getline(fin, text))
		data.push_back(text);

//	8.5 将每个元素作为独立元素输入
//	while (fin >> text)
//		data.push_back(text);

	for (auto &x : data)
		cout << x << endl;

	system("pause");
	return 0;
}