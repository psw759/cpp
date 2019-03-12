#pragma once
#include <iostream>
#ifndef _STACK_H_
#define _STACK_H_

struct customer {
	char fullname[35];
	double payment;
}typedef Item;


class Stack {
private:
	Item items[30];
	int top;
	double tot_payment;	
	bool isempty();
	bool isfull();
public:
	Stack();
	bool push(const Item &);
	bool pop();
	void print();
};

#endif