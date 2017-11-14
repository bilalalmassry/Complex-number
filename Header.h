#pragma once
#include<iostream>
using namespace std;
#ifndef HEADER_H
#define HEADER_H
class complex
{
private:
	int real;
	int img;
public:
	complex(){
		real = 0;
		img = 0;
	}
	//complex(int real, int img);
	~complex();
	void printcomplex();
	void readcomplex(int real,int img);
};
#endif
