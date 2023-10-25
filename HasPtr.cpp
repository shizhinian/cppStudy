#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>
#include"HasPtr.h"

using namespace::std;
//赋值运算符通常应该返回一个指向其左侧运算对象的引用
HasPtr& HasPtr::operator=(const HasPtr& hp) {
	auto newps = new string(*hp.ps);
	//newps = hp.ps;
	delete ps;//释放*this.ps旧内存
	ps = newps;
	//ps = hp.ps;
	i = hp.i;
	return *this;
}


int main() {
	HasPtr hp1("abc");

	HasPtr hp2("def");

	hp2 = hp1;

	//HasPtr(hp1);
}