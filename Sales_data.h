#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>

class  Sales_data
{
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend std::ostream& print(std::ostream&, const Sales_data&);
	friend std::istream& read(std::istream&, Sales_data&);
public:
	//¹¹Ôìº¯Êý
	Sales_data() = default;
	Sales_data(const std::string& s) :
		bookNo(s) {}
	Sales_data(const std::string& s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p* n) {}
	Sales_data(std::istream&) {}


	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

private:
	std::string isbn()const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price()const;
};

//sales_data add(const sales_data&, const sales_data&);
//std::ostream& print(std::ostream&, const sales_data&);
//std::istream& read(std::istream&, sales_data&);
#endif // !SALES_DATA_H


