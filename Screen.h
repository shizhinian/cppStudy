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
	//构造函数
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

	//pos Screen::size() const { return height * width; }//成员声明中不允许限定名
};
class Window_mgr {
public:
	using ScreenIndex = vector<Screen>::size_type;
	void clear(ScreenIndex);
	ScreenIndex addScreen(const Screen&);
private:
	vector<Screen> screens{ Screen(24,80,' ') };
};

//这里，我们定义了一个名为MyClass的类，它有一个接受istream&类型参数的构造函数。
//在这个构造函数中，我们将is设置为默认值为std::cin。
//这样，如果用户没有提供输入流参数，则默认使用标准输入流。
class Myclass {
public:
	Myclass(istream& is = cin) {};
};

class Debug {
public:
	constexpr Debug(bool b = true) :hw(b), io(b), other(b) { }
	constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(0) { }
	constexpr bool any() { return hw || io || other; }
	void set_io(bool b) { io = b; }
	void set_hw(bool b) { hw = b; }
	void set_other(bool b) { hw = b; }
private:
	bool hw;
	bool io;
	bool other;
};



#endif SCREEN_H

