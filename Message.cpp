#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>
#include"Message.h"
using namespace::std;

Message& Message::save(Folder& fd) {
	//1、fd中的message的set中就有this的记录了，这里的this就是一个Message*
	//2、this->floder再将fd存入
	//思路是没错的
	//*fd.message.insert(this);
	//(*this).floder = &fd;
	
}

int main() {
	Folder fd1("floder-1");
	Folder fd2("floder-2");
	Message mg("this is a txt");
	mg.save(fd1);
	//mg.save(fd2);
}