#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<numeric>
#include"Sales_item.h"
using namespace std;

bool compareIsbn(Sales_item &s1, Sales_item &s2)
{
	return s1.isbn() < s2.isbn();
}

int main()
{
	vector<Sales_item> saleData;
	ifstream in("./word.txt");
	istream_iterator<Sales_item> sin(in), eof;

	while (sin != eof)
		saleData.push_back(*sin++);

	//  头文件Sales_item.h中已经定义了函数compareIsbn，这里用lambda表达式代替
	sort(saleData.begin(), saleData.end(), 
		[](Sales_item &s1, Sales_item &s2){return s1.isbn() < s2.isbn(); });

	for (auto beg = saleData.begin(), end = beg; end != saleData.end(); beg = end)
	{
		end = find_if(beg, saleData.end(),
			[beg](Sales_item &s3){return s3.isbn() != beg->isbn(); });
		cout << accumulate(beg, end, Sales_item()) << endl;
	}

	system("pause");
	return 0;
}