#include<iostream>
#include<fstream>
#include<string>
#include<new>
#include<memory>

using namespace std;

int main()
{
	size_t n = 16, k = 0;
	string *word = new string[n];
	ifstream fin("./text2.txt");
	char x;
	while (fin >> x){
		if (k == n){
			string *word_copy = word;
			word = new string[n * 2];
			for (size_t m = 0; m < n; ++m)
				*(word + m) = *(word_copy + m);
			delete[] word_copy;
			n *= 2;
		}
		*(word + k) = x;
		++k;
	}

	//不能用范围for处理数组
	for (size_t i = 0; i < k; ++i)
		cout << *(word + i);
	cout << endl;
	system("pause");
	return 0;
}