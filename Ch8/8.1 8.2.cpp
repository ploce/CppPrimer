#include<iostream>
#include<string>
using namespace std;

istream& func(istream& in){
	string data;
	while (in >> data){
		cout << data << endl;
	}
	in.clear();
	return in;
}

int main(){
	func(cin);
	system("pause");
	return 0;
}