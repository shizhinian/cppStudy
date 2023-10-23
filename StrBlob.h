#pragma once

#include<string>
#include<vector>
#include<memory>
using namespace::std;

class StrBlob {
public:
	typedef vector<string>::size_type size_type;

	
	StrBlob() :data(make_shared<vector<string>>()) {};
	StrBlob(initializer_list<string>il) :data(make_shared<vector<string>>(il)) {};

	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }

	void push_back(const string& t) { data->push_back(t); }
	void pop_back();

	string& front();
	string& back();
//private:
	shared_ptr<vector<string>> data;
	
	void check(size_type i, const string& msg)const;
};

class StrBlob1 {
public:
	typedef vector<string>::size_type size_type;


	StrBlob1() :data() {};
	StrBlob1(initializer_list<string>il) :data(vector<string>(il)) {};

	size_type size() const { return data.size(); }
	bool empty() const { return data.empty(); }

	void push_back(const string& t) { data.push_back(t); }
	void pop_back();

	string& front();
	string& back();
	//private:
	vector<string> data;

	void check(size_type i, const string& msg)const;
};
