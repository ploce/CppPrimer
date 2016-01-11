#include<iostream>
#include<fstream>
#include<vector>
#include<iterator>

using namespace std;

int main(){
	string input = "./input.txt";
	string odd_out = "./odd_out.txt";
	string even_out = "./even_out.txt";
	ifstream fin(input);
	ofstream fout_odd(odd_out), fout_even(even_out);
	istream_iterator<int> in(fin), eof;
	ostream_iterator<int> out_odd(fout_odd, " "), out_even(fout_even, "\n");

	while (in != eof){
		auto n = *in++;
		if (n % 2 == 1)
			*out_odd++ = n;
		else
			*out_even++ = n;
	}

	return 0;
}