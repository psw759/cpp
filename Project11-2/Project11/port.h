#pragma once
#ifndef _PORT_H_
#define _PORT_H_
#include <iostream>

class Port {
private:
	char * brand;
	char * style;
	int bottles;
public:
	Port(const char * br = "None", const char * st = "None", int b = 0);
	Port(const Port & p);
	virtual ~Port() { delete[] brand; delete[] style;}
	Port & operator=(const Port & p);
	Port & operator+=(int b);//bottles�� ����
	Port & operator-=(int b);
	int BottleCount() const { return bottles; }
	virtual void show() const;
	friend std::ostream & operator<<(std::ostream & os, const Port & p);
	//Ŭ���� �ܺ��Լ� �̹Ƿ� �����Լ��� �� �� ����.
};

class VintagePort : public Port {
private:
	char * nickname;
	int year;
public:
	VintagePort(const char * nn = "None", int ye = 0);
	VintagePort(const char * br, const char * st, int b, const char * nn, int ye);
	VintagePort(const Port & p, const char * nn, int ye);
	VintagePort(const VintagePort & vp);
	virtual ~VintagePort() { delete[] nickname; }
	VintagePort & operator=(const VintagePort & vp);
	void show() const;
	friend std::ostream & operator<<(std::ostream & os, const VintagePort & vp);
};
#endif
