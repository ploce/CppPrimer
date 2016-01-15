#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){
	char* s = new char[255]();
	strcat(s, "abc ");
	strcat(s, "def");
	cout << s << endl;
	delete[]s;

	string str = string("abc ") + string("def");
	cout << str << endl;
	
	system("pause");
	return 0;
}