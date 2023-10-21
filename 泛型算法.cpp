#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string make_plural(size_t ctr, const string& word, const string& ending) {
	return (ctr > 1) ? word + ending : word;
}



void elimDups(vector<string>& words) {
	sort(words.begin(), words.end());

	auto end_unique = unique(words.begin(), words.end());

	words.erase(end_unique, words.end());
}

void biggies(vector<string>& words, vector<string>::size_type sz) {
	elimDups(words);

	stable_sort(words.begin(), words.end(), [](const string& a, const string& b) {		return a.size() < b.size();		});

	auto wc = find_if(words.begin(), words.end(), [sz](const string& a) {return a.size() >= sz; });

	auto count = words.end() - wc;

	cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;

	for_each(wc, words.end(), [](const string& s) {cout << s << " "; });

	cout << endl;
}

int main() {
	vector<int> x = { 1,2,3,4,5 };
	int val = 2;
	auto result = find(x.begin(), x.end(), val);

	cout << "The value " << val << (result == x.cend() ? " is not present" : " is present") << endl;

	vector<string> s = { "fox","jumps","over","quick","red","slow","the","turtle" };

	biggies(s, 4);
}