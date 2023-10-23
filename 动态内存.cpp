#include<iostream>
//#include<vector>
//#include<string>
#include"StrBlob.h"

using namespace::std;

void StrBlob::check(size_type i, const string& msg)const {
	if (i >= data->size())
	{
		throw out_of_range(msg);
	};
}

void StrBlob::pop_back() {
	check(0, "pop_back on empty StrBlob");
	return data->pop_back();
}

string& StrBlob::front() {
	check(0, "front on empty StrBlob");
	return data->front();
}
string& StrBlob::back() {
	check(0, "back on empty StrBlob");
	return data->back();
}

int main() {

	/*shared_ptr<string> p1;
	string p2;
	if (p1 && p1->empty())
	{
		*p1 = "Hello";
	}
	int b =42;
	string c = "abc";
	auto p3 = make_shared<int>(b);
	cout << *p3 << endl;*/

	StrBlob b1;

	StrBlob b2 = { "a","an","the" };

	

	b1 = b2;

	for (size_t i = 0; i != b1.size(); i++)
	{
		cout << (*b1.data)[i] << " ";
	}
	cout << endl;
	b2.push_back("about");

	for (size_t i = 0; i != b1.size(); i++)
	{
		cout << (*b1.data)[i] << " ";
	}

	cout << endl;

	StrBlob1 c1;
	StrBlob1 c2 = { "1","2","3" };
	c1 = c2;
	for (size_t i = 0; i != c1.size(); i++)
	{
		cout << (c1.data)[i] << " ";
	}
	cout << endl;
	c2.push_back("4");
	for (size_t i = 0; i != c1.size(); i++)
	{
		cout << (c1.data)[i] << " ";
	}
}