#pragma once

#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>
#include"TextQuery.h"
using namespace std;

QueryResult TextQuery::query(const string& qw)const {
	auto map_it = map2.begin();
	while (map_it != map2.end())
	{
		if (map_it == map2.find(qw))
		{
			return QueryResult(qw, map_it->second, texts);//返回QueryResult的一个构造函数，此构造函数使用查询到的单词的属性进行初始化
			break;
		}
		++map_it;
	}

}

ostream& print(ostream& os, const QueryResult& qr) {
	os << qr.queryWord << " occurs" << qr.lineNumber.size() << " times" << endl;
	auto set_it = qr.lineNumber.begin();
	while (set_it != qr.lineNumber.end())
	{
		cout << "(line " << *set_it+1 << ")" << (*qr.texts)[*set_it] << endl;
		++set_it;
	}
	return os;
};

TextQuery::TextQuery(ifstream& infile) :texts(new vector<string>) {
	string line, word;
	//int lineNumber = 1;行号
	while (getline(infile, line))
	{
		texts->push_back(line);
		int lineNumber = texts->size() - 1;//行号
		istringstream record(line);
		while (record >> word) {
			map2[word].insert(lineNumber);
			/*auto& records = map2[word];
			if (!records)
			{
				records.reset(new set<lineNumber>);
			}
			records->insert(lineNumber);*/
		}
		//lineNumber++;
	}
}


//程序太繁琐，每一次都要重复输入TextQuery.
//不够结构化
//make_shared还没用上
//TextQuery.map[word].insert(lineNumber)是正规的赋值方法？

//string infile
//TextQuery tq(infile)
//tq.query("is")
//int main() {
//	string ifile = "D:/Desktop/try.txt";
//	ifstream in(ifile);
//	TextQuery tq(in);
//	print(cout, tq.query("is"));
//	//cout;
//	/*TextQuery TextQuery;
//	string ifile = "D:/Desktop/try.txt";
//	ifstream in(ifile);
//	string line, word;
//	int lineNumber = 1;
//	while (getline(in, line))
//	{
//		TextQuery.text.push_back(line);
//		istringstream record(line);
//		while (record >> word) {
//			TextQuery.map[word].insert(lineNumber);
//		}
//		lineNumber++;
//	}*/
//
//	//string queryword = "is";
//
//	//auto map_it = TextQuery.map.begin();
//
//	//while (map_it != TextQuery.map.end())
//	////while (true)
//	//{
//	//	if (map_it == TextQuery.map.find(queryword))
//	//	{
//	//		cout << "element " << queryword << " occurs " << map_it->second.size() << "times" << endl;
//	//		auto set_it = map_it->second.begin();
//	//		while (set_it != map_it->second.end())
//	//		{
//	//			cout << "(line " << *set_it << ")" << TextQuery.text[*set_it] << endl;
//	//			++set_it;
//	//		}
//	//		break;
//	//	}
//	//	++map_it;
//	//}
//
//}