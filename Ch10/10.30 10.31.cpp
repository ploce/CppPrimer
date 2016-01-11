#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main(){
	vector<int> num;
	istream_iterator<int> num_in(cin), num_eof;
	ostream_iterator<int> num_out(cout, " ");

	while (num_in != num_eof)
		num.push_back(*num_in++);

	sort(num.begin(), num.end());
	copy(num.begin(), num.end(), num_out);
//	unique_copy(num.begin(), num.end(), num_out);  10.31

	cout << endl;
	system("pause");
	return 0;
}