#include<iostream>
#include<vector>
#include<string>
using namespace std;

//int main()
//{
	/*vector<int> ivec;
	auto b = ivec.begin(), e = ivec.end();*/


	//string s("some string");
	//if (s.begin()!=s.end())//确保s非空
	//{
	//	auto it = s.begin();
	//	*it = toupper(*it);
	//}
	//cout << s << endl;

	/*vector<int> ivec = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int> ivec1(10, 2);*/

	//auto it = ivec.begin();


	//使用迭代器将所有元素的值都变成原来的两倍。输出vector对象的内容，检验程序是否正确
	/*for (auto it = ivec.begin(); it != ivec.end(); it++)
	{
		*it *= 2;
		cout << *it << endl;
	}*/

	//二分搜索
	/*auto beg = ivec.begin();
	auto end = ivec.end();
	auto mid = ivec.begin() + (end - beg) / 2;

	while (mid != end && *mid != sought)
	{
		if (sought < *mid)
			end = mid;
		else
			beg = mid + 1;
		mid = beg + (end - beg) / 2;
	}*/

	//将每对相邻整数的和输出

	/*vector<int> ivec = { 1,2,3,4,5,6,7,8,9,10 };

	auto end = ivec.end();

	for (auto it = ivec.begin(); it != end-1; it++)
	{
		cout << *it +*(it+1) << endl;
	}*/


	//先输出第一个和最后一个元素的和接着输出第二个和倒数第二个元素的和
	//vector<int> ivec = { 1,2,3,4,6,7,8,9,10 };
	//auto beg = ivec.begin();
	//auto end = ivec.end();
	//
	//int i;
	//

	//for (i = 0; beg + i != end - 1 - i && end - beg - 2 - 2 * i != 0; i++)
	//{
	//	cout << *(beg + i) + *(end - 1 - i) << endl;
	//	//beg += i;
	//	//end -= i;
	//}
	////vector为奇数个
	//if (beg + i == end - 1 - i)
	//{
	//	cout << *(beg + i) << endl << "奇数个";
	//}
	////vector为偶数个
	//if (end - beg - 2 - 2 * i == 0)
	//{
	//	cout << *(beg + i) + *(end - 1 - i) << endl << "偶数个";
	//}

	//为什么是mid1 = beg + (end - beg) / 2;
	//而不是(beg + end) / 2
	//vector<int> ivec = { 1,2,3,4,6,7,8,9,10 };
	//auto beg = ivec.begin();
	//auto end = ivec.end();

	//auto mid1 = beg + (end - beg) / 2;
	//auto mid2 = (beg + end) / 2;//没有与这些操作数匹配的"+"运算符



//}