#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>
using namespace::std;

class QueryResult {

	friend ostream& print(ostream&, const QueryResult&);
public:
	QueryResult(string qw, set<int> ln, shared_ptr<vector<string>> te):queryWord(qw),lineNumber(ln),texts(te){}
private:
	string queryWord;//查询的单词
	set<int> lineNumber;//该单词所有出现过的行号
	shared_ptr<vector<string>> texts;

};

class TextQuery {
public:
	TextQuery(ifstream&);
	//TextQuery(ifstream& infile) :texts(make_shared<vector<string>>(infile)) {	}
	//private:
	//vector<string> text;//使用vector<string>来保存输入文件，输入文件的每一行保存为vector的一个元素
	//istringstream& ;
	//map<string, set<int>> map1;//使用一个map将每个单词与它出现的行号set关联起来，方便提取任意单词的set
	//set<int> lineNumber;//使用一个set来保存每个单词在输入文本中出现的行号，以保证每行只出现一次且行号按升序保存。"A":36 "set":36 "element":36
	QueryResult query(const string &)const;//函数/方法成员，返回一个QueryResult
private:
	shared_ptr<vector<string>> texts;
	map<string, set<int>> map2;

};


