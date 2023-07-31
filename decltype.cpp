//#include<iostream>
//using namespace std;
//
//int main() {
//
//	//decltype 类型指示符
//
//	//const int ci = 0, & cj = ci;
//	//decltype(ci) x = 0;//x:const int 
//	//decltype(cj) y = x;//y:const int &
//	//decltype(cj) z;//未初始化本地变量,z是一个引用，必须初始化
//	
//
//	//decltype 和引用
//	/*int i = 42, *p = &i, &r = i;
//	decltype(r + 1) b;*/
//	//cout << (void*)p << endl;
//	//cout << *p<<endl;
//	//decltype(*p)c;//原句：c是int&，必须初始化，但是我觉得&在这里的作用是取址，*p解引用
//
//	//decltype((i))d;
//	//decltype(i)d;
//
//	/*
//	int a = 3, b = 4;
//	decltype(a) c = a;
//	decltype((b)) d = a;
//	++c;
//	++d;
//	*/
//	//c=4,int
//	//b=4,int
//	//d=4,int&
//	//a=4,int
//
//	/*
//	int a = 3, b = 4;
//	decltype(a)c = a;
//	decltype(a = b)d = a;
//	*/
//	//a=3,int
//	//b=4,int
//	//c=3,int
//	//d=3,int&
//
//}