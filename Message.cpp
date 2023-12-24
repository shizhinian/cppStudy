#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>
#include"Message.h"
using namespace::std;

Message& Message:: operator=(const Message& mg) {
	remove_from_Folders();
	txt = mg.txt;
	folder = mg.folder;
	add_to_Folders(mg);
	return *this;
}

Message::Message(const Message& mg) :txt(mg.txt), folder(mg.folder) {
	add_to_Folders(mg);
}

Message::~Message() {
	remove_from_Folders();
}

void Message::save(Folder& fd) {
	//1、fd中的message的set中就有this的记录了，这里的this就是一个Message*
	//2、this->floder再将fd存入
	//思路是没错的
	//*fd.message.insert(this);
	//(*this).floder = &fd;
	//fd是一个引用类型，可以使用&运算符获取该变量的地址，并将其作为参数传递给insert函数
	folder.insert(&fd);
	fd.addMsg(this);

}
void Message::remove(Folder& fd) {
	folder.erase(&fd);
}

void Folder::addMsg(Message* mg) {
	message.insert(mg);
	//
}






void Folder::remMsg(Message* mg) {
	message.erase(mg);
}

void Message::add_to_Folders(const Message& mg) {
	for (auto f : mg.folder)
		f->addMsg(this);
}

void Message::remove_from_Folders() {
	for (auto f : folder)
		f->remMsg(this);
}

//int main() {
//	Folder fd1("floder-1");
//	Folder fd2("floder-2");
//	Message mg("this is a txt");
//	mg.save(fd1);
//	mg.save(fd2);
//	//mg.save(fd2);
//
//	//int i = 4;
//	//int& r = i;
//	////int&& rr = i;//无法将右值引用绑定到左值
//	////int& r2 = i * 4;//非常量引用的初始值必须为左值
//	//const int& r3 = i * 4;
//	//int&& rr2 = i * 4;
//	//int&& rr3 = rr2;
//
//	/*int f();
//	vector<int> vi(100);
//	int&& r1 = f();
//	int& r2 = vi[0];
//	int& r3 = r1;
//	int&& r4 = vi[0] * f();*/
//}