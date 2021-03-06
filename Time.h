#ifndef TIME_H
#define TIME_H
#include <istream>
#include <string>
using namespace std;
class Time{
private:
	int minutes=0;
	int	hours=0;
public:
	Time();
	Time(int hours_s, int minutes_s);
	~Time();
	void set(int hours_s,int minutes_s);
	void get(int &hours, int & minutes);
	friend ostream& operator<<(ostream &os,const Time temp);
	void operator++(int);
};
#endif