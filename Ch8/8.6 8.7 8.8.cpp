#include<iostream>
#include<fstream>
#include<string>
#include"Sales_data.h"

using namespace std;

int main(string filename_src,string filename_dst){
	Sales_data total;
	ifstream fin(filename_src);
	ofstream fout(filename_dst);
//	ofstream fout(filename_src, ofstream::app); // 8.8

	if (read(fin, total)){
		Sales_data trans;
		while (read(fin, trans)){
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else{
				print(fout, total) << endl;
				total = trans;
			}
		}
		print(fout, total) << endl;
	}
	else{
		cerr << "No data?!" << endl;
	}
	return 0;
}