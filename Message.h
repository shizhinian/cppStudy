#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>
using namespace::std;

class Folder {
	friend class Message;
public:
	Folder(string name) :name(name) {};
private:
	string name;//文件夹的名字
	set<Message*> message;//包含哪些message
};

class Message {
	friend class Folder;
public:
	//构造函数
	Message(string txt):txt(txt){}

	Message& save(Folder& );
	Message& remove(Folder& );

	~Message();
private:
	string txt;//消息文本
	set<Folder*> floder;//所在Folder的指针的set

};
