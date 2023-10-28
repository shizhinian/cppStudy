#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>
using namespace::std;

class HasPtr {
	friend int main();
public:
	//默认构造函数
	//HasPtr()=default;

	//拷贝构造函数
	//HasPtr(const string& s=string()):ps(new string(s)),i(0){}
	HasPtr(const string& s=string()):ps(new string(s)),i(0),use(new size_t(1)){}


	//HasPtr(const HasPtr& p) :ps(p.ps), i(p.i) {}
	HasPtr(const HasPtr& p) :ps(p.ps), i(p.i), use(p.use) { ++*use; }

	//拷贝赋值运算符,如果类未定义自己的拷贝赋值运算符，编译器会生成一个合成拷贝运算符
	HasPtr& operator=(const HasPtr&);
	~HasPtr();

	//移动构造函数

	HasPtr(HasPtr&& p) noexcept :ps(p.ps), i(p.i) { p.ps = 0; }
private:
	string* ps;
	int i;
	size_t* use;
};
