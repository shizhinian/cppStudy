#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{

	//aaa 台式机


	//aaa 笔记本
	/*const unsigned sz = 3;
	int iap[sz] = { 1,2,3 };
	int a2[] = { 0,1,2 };
	int a3[5] = { 0,1,2 };
	string a4[3] = { "hi","bye" };*/
	//int a5[2] = { 0,1,2 };//error:初始值设定项太多


	//int* ptrs[10];
	//int(*parray)[10] = &arr;
	//int(&arrayref)[10] = arr;

	/*string nums[] = { "one","two","three" };
	string* p = &nums[0];*/
	//string* p = nums;

	//int ia[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	//auto ia2(ia);
	//int a = 12;
	//ia2 = &a;

	//C风格字符串
	/*char ca[] = { 'c','+','+' ,'\0' };
	cout << strlen(ca) << endl;

	const char ca1[] = "A string example";
	const char ca2[] = "A different string";
	if (ca1 < ca2)
	{
		;
	}*/

	//多维数组（数组的数组）
	//int(&row)[4] = ia[1];

	/*constexpr size_t rowCnt = 3, colCnt = 4;
	int ia[rowCnt][colCnt];*/
	/*for (size_t i = 0; i!=rowCnt; i++)
	{
		for (size_t j = 0; j != colCnt; j++)
		{
			ia[i][j] = i * colCnt + j;
			cout << ia[i][j] << endl;
		}
	}*/

	/*size_t cnt = 0;
	for (auto& row : ia)
	{
		for (auto& col : row)
		{
			col = cnt;
			cnt++;

		}
	}*/

	//int ia[3][4];
	//int(*p)[4] = ia;//p是指向含有4个整数的指针
	//p = &ia[2];

	int i = 0, j;
	//j = ++i;
	//j = i++;
	cout << "i="<<i<<",j="<<j << endl;
}