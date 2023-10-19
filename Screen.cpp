#include<iostream>
#include<vector>
#include<string>
#include "Screen.h"
using namespace std;

inline
Screen& Screen::move(pos r, pos c) {
	pos row = r * width;
	cursor = row + c;
	return *this;
}
char Screen::get(pos r, pos c)const {
	pos row = r * width;
	return contents[row + c];
}
Screen& Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}
Screen& Screen::set(pos r, pos col, char ch) {
	contents[r * width + col] = ch;
	return *this;
}

void Screen::some_member()const {
	++access_ctr;
}
void Window_mgr::clear(ScreenIndex i)
{
	Screen& s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}

Window_mgr::ScreenIndex
Window_mgr::addScreen(const Screen& s) {
	screens.push_back(s);
	return screens.size() - 1;
}


int main() {
	/*Screen myscreen;
	char ch = myscreen.get();
	ch = myscreen.get(0, 0);
	myscreen.move(4, 0).set('#');
	cout << "123";*/

	constexpr Debug io_sub(false, true, false); 
	if (io_sub.any())
	{
		cerr << "print appropriate error message" << endl;
	}
	constexpr Debug prod(false);
	if (prod.any())
	{
		cerr << "print an error message" << endl;
	}
}