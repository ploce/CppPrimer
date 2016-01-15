#include<iostream>
#include<fstream>
#include<vector>
#include<memory>
#include<new>

using namespace std;

vector<int>* iVecMalloc(){
	vector<int> *p = new vector<int>();
	return p;
}

vector<int>* read(istream &in,vector<int> *p){
	int tmp;
	while (in >> tmp)
		p->push_back(tmp);
	return p;
}

vector<int>* print(vector<int> *p){
	for (auto &n : *p)
		cout << n << " ";
	cout << endl;
	return p;
}

int main(){
	ifstream fin("./num.txt");
	vector<int> *p = print(read(cin, iVecMalloc()));
//	auto p = iVecMalloc();
//	read(p);
//	print(p);
	
	delete p;
	p = nullptr;

	system("pause");
	return 0;
}