#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<memory>

using namespace std;

shared_ptr<vector<int>> vec(){
	return make_shared < vector<int> >();
}

shared_ptr<vector<int>> input(istream &in, shared_ptr<vector<int>> num){
	int n;
	while (in >> n)
		num->push_back(n);
	return num;
}

void print(shared_ptr<vector<int>> num){
	for (auto &x : *num)
		cout << x << " ";
	cout << endl;
}

int main()
{
	ifstream fin("./num.txt");
	print(input(fin, vec()));
	system("pause");
	return 0;
}