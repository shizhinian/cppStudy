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
	void addMsg(Message*);
	void remMsg(Message*);
private:
	string name;//文件夹的名字
	set<Message*> message;//包含哪些message
};

class Message {
	friend class Folder;
public:
	//构造函数
	Message(string txt):txt(txt){}
	Message(const Message& );
	Message& operator=(const Message&);

	void save(Folder& );
	void remove(Folder& );

	~Message();
private:
	string txt;//消息文本
	set<Folder*> folder;//所在Folder的指针的set

	void add_to_Folders(const Message&);
	void remove_from_Folders();

};
