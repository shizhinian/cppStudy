#ifndef SCREEN_H
#define SCREEN_H
#include<string>
#include<vector>
using namespace std;

class Screen {
	friend class Window_mgr;
public:

	

	void some_member()const;

	typedef string::size_type pos;
	//¹¹Ôìº¯Êý
	Screen() = default;
	Screen(pos ht, pos wd, char c) :
		height(ht), width(wd), contents(ht* wd, c) {};
	char get()const { return contents[cursor]; };
	inline char get(pos ht, pos wd)const;
	Screen& move(pos r, pos c);
	Screen& set(char);
	Screen& set(pos, pos, char);
	Screen& display(ostream& os) {
		do_display(os);
		return *this;
	}
	const Screen& display(ostream& os)const {
		do_display(os);
		return *this;
	}
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;

	mutable size_t access_ctr;
	void do_display(ostream& os)const { os << contents; }
};
class Window_mgr {
public:
	using ScreenIndex = vector<Screen>::size_type;
	void clear(ScreenIndex);
private:
	vector<Screen> screens{ Screen(24,80,' ') };
};

#endif SCREEN_H

