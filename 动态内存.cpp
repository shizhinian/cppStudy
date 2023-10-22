#include<iostream>
//#include<vector>
//#include<string>

using namespace::std;

int main() {
	
	shared_ptr<string> p1;
	string p2;
	if (p1 && p1->empty())
	{
		*p1 = "Hello";
	}
	int b =42;
	string c = "abc";
	auto p3 = make_shared<int>(b);
	cout << *p3 << endl;
}