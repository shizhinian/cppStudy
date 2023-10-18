//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//
//size_t count_calls() {
//	static size_t ctr = 0;
//	return ++ctr;
//}
////传值参数
//void reset(int* p) {
//	*p = 0;
//}
////传引用参数
//void reset(int& p) {
//	p = 0;
//}
//
//string::size_type find_char(const string& s, char c, string::size_type& occurs) {
//	auto ret = s.size();
//	occurs = 0;
//	for (decltype(ret) i = 0; i != s.size(); i++)
//	{
//		if (s[i] == c)
//		{
//			if (ret == s.size())
//			{
//				ret = i;
//			}
//			++occurs;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	/*for (size_t i = 0; i < 10; i++)
//	{
//		cout << count_calls() << endl;
//	}*/
//
//	int i = 42;
//	cout << "i = " << i << endl;
//	cout << "&i = " << &i << endl;
//	reset(i);
//	cout << "i = " << i << endl;
//	cout << "&i = " << &i << endl;
//	/*reset(&i);
//	cout << "i = " << i << endl;
//	cout << "&i = " << &i << endl;*/
//
//
//	string s = "this is an example";
//	char c = 'a';
//	string::size_type ctr;
//	auto index = find_char(s, c, ctr);
//	cout << s << "字符串中共出现'" << c <<"'" << ctr << "次，第一次出现的位置是" << index << endl;
//	return 0;
//}