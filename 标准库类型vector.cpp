#include<vector>
#include<string>
using std::string;
using std::vector;

int main()
{
	vector<int> v1;
	vector<int>v2(v1);
	vector<int>v22 = v1;
	vector<int>v3(10, 1);
	vector<int>v4(10);
	vector<int>v5{ 1,2,3,4 };
	vector<int>v55 = { 1,2,3,4 };

	vector<vector<int>> ivec;
	//vector<string> svec=ivec;
	vector<string> svec(10, "null");

	vector<string> v7(10, "hi");
	vector<string> v8{ 10, "hi" };

	//向vector对象中添加元素
}