#pragma once
#include<iostream>
#include<assert.h>
class Date

{

public:

	// ��ȡĳ��ĳ�µ�����

	int GetMonthDay(int year, int month) {
		assert(month > 0 && month < 13);
		static int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if ((0 == year % 4 && year % 100 != 0) || (0 == year % 400) && month == 2) {
			return 29;
		}
		return day[month];
	}

	void Print() {
		std::cout << _year << "/" << _month << "/" << _day<<std::endl;
	}

	// ȫȱʡ�Ĺ��캯��

	Date(int year = 1900, int month = 1, int day = 1) {
		_year = year;
		_month = month;
		_day = day;
	}



	// �������캯��

  // d2(d1)

	Date(const Date& d) {
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}



	// ��ֵ���������

  // d2 = d3 -> d2.operator=(&d2, d3)

	Date& operator=(const Date& d) {
		if (*this != d) {
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}



	// ��������

	~Date() {

	}



	// ����+=����

	Date& operator+=(int day);



	// ����+����

	Date operator+(int day);



	// ����-����

	Date operator-(int day);



	// ����-=����

	Date& operator-=(int day);



	// ǰ��++

	Date& operator++();



	// ����++

	Date operator++(int);



	// ����--

	Date operator--(int);



	// ǰ��--

	Date& operator--();



	// >���������

	bool operator>(const Date& d);



	// ==���������

	bool operator==(const Date& d);



	// >=���������

	bool operator >= (const Date& d);



	// <���������

	bool operator < (const Date& d);



	// <=���������

	bool operator <= (const Date& d);



	// !=���������

	bool operator != (const Date& d);



	// ����-���� ��������

	int operator-(const Date& d);

private:

	int _year;

	int _month;

	int _day;

};


