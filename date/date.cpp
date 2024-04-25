#include"date.h"

Date& Date::operator+=(int day) {
	_day += day;
	while (_day > GetMonthDay(_year, _month)) {
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13) {
			_year++;
			_month = 1;
		}
	}
	return *this;
}



// ����+����

Date Date::operator+(int day) {
	Date tmp = *this;
	tmp += day;
	return tmp;
	
}



// ����-����

Date Date::operator-(int day) {
	Date tmp = *this;
	tmp -= day;
	return tmp;
}



// ����-=����

Date& Date::operator-=(int day) {
	_day -= day;
	while (_day<1) {
		_month--;
		if (_month < 1) {
			_year--;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}



// ǰ��++

Date& Date::operator++() {
	++_day;
	if (_day > GetMonthDay(_year, _month)) {
		++_month;
		if (_month > 12) {
			++_year;
			_month = 1;
		}
	}
	return *this;
}



// ����++

Date Date::operator++(int) {
	Date tmp = *this;
	*this += 1;
	return tmp;
}



// ����--

Date Date::operator--(int) {
	Date tmp = *this;
	*this -= 1;
	return tmp;
}



// ǰ��--

Date& Date::operator--() {
	--_day;
	if (_day <1) {
		--_month;
		if (_month < 1) {
			--_year;
			_month = 12;
		}
	}
	return *this;
}



// >���������

bool Date::operator>(const Date& d) {
	if (_year > d._year) {
		return true;
	}
	else if(_year == d._year) {
		if (_month > d._month) {
			return true;
		}
		else if (_month == d._month) {
			if (_day > d._day) {
				return true;
			}
		}
	}
	return false;
}



// ==���������

bool Date::operator==(const Date& d) {
	return (_day == d._day) && (_month == d._month) && (_year == d._year);
}



// >=���������

bool Date::operator >= (const Date& d) {
	return (*this > d) || (*this == d);
}



// <���������

bool Date::operator < (const Date& d) {
	return !(*this >= d);
}



// <=���������

bool Date::operator <= (const Date& d) {
	return !(*this > d);
}



// !=���������

bool Date::operator != (const Date& d) {
	return !(*this == d);
}



// ����-���� ��������

int Date::operator-(const Date& d) {
	int flag = 1;
	int n = 0;
	Date max = *this;
	Date min = d;
	if (*this < d) {
		flag = -1;
		max = d;
		min = *this;
	}
	while (min != max) {
		min++;
		n++;
	}
	return n * flag;
}