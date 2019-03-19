#include <iostream>
#include <cstring>
#include "cd.h"
#define _CRT_SECURE_NO_WARNINGS

using std::strlen;
using std::strcpy;

Cd::Cd(const char * s1, const char * s2, int n, double x) {
	performers = new char[strlen(s1) + 1];
	strcpy(performers, s1);
	laber = new char[strlen(s2) + 1];
	strcpy(laber, s2);
	selection = n;
	playtime = x;
}

Cd::Cd(const Cd & d) {
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	laber = new char[strlen(d.laber) + 1];
	strcpy(laber, d.laber);
	selection = d.selection;
	playtime = d.playtime;
}

Cd::Cd() {
	performers = nullptr;
	laber = nullptr;
	selection = 0;
	playtime = 0;
}

Cd::~Cd() {
	delete[] performers;
	delete[] laber;
}

Cd & Cd::operator=(const Cd & d) {
	if (this == &d) {
		return *this;
	}
	delete[] performers;
	delete[] laber;
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	laber = new char[strlen(d.laber) + 1];
	strcpy(laber, d.laber);
	selection = d.selection;
	playtime = d.playtime;
	return *this;
}

void Cd::Report() const {
	using std::cout;
	using std::endl;

	cout << "Performers : " << performers << endl;
	cout << "Laber : " << laber << endl;
	cout << "Selections : " << selection << endl;
	cout << "Playtime : " << playtime << endl;

}

Classic::Classic(const Cd & d, const char * s) : Cd(d) {
	famous = new char[strlen(s) + 1];
	strcpy(famous, s);
}

Classic::Classic() : Cd() {
	famous = nullptr;
}

Classic::Classic(const char * s1, const char * s2, const char * s3, int n, double x)
	: Cd(s1, s2, n, x) {
	famous = new char[strlen(s3) + 1];
	strcpy(famous, s3);
}

Classic::~Classic() {
	delete[] famous;
}

Classic & Classic::operator=(const Classic & c){
	if (this == &c) {
		return *this;
	}
	Cd::operator=(c);
	delete[] famous;
	famous = new char[strlen(c.famous) + 1];
	strcpy(famous, c.famous);

	return *this;
}

void Classic::Report() const {
	using std::cout;
	using std::endl;

	Cd::Report();
	cout << "Famous : " << famous << endl;
	
}