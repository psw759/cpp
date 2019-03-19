#pragma once
#ifndef _CD_H_
#define _CD_H_
#include <iostream>
class Cd {
private:
	char * performers ;
	char * laber;
	int selection;
	double playtime;
public:
	Cd(const char * s1, const char * s2, int n, double x);
	Cd(const Cd & d);//복사생성자
	Cd();
	virtual ~Cd();
	virtual void Report() const;
	Cd & operator=(const Cd & d);
};
class Classic : public Cd {
private:
	char * famous;
public:
	Classic(const Cd & d, const char * s);
	Classic(const char * s1, const char * s2, const char * s3, int n, double x);
	Classic();
	virtual ~Classic();
	virtual void Report() const;
	Classic & operator=(const Classic & c);//실행 안될시 virtual 추가

};

#endif