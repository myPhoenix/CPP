#include <iostream>

class String 
{
	char* p;
	int len;

public:
	String (const char* s = "")
	{
		len = strlen(s);
		p = new char[len + 1];
		strcpy_s(p, len + 1, s);
	}
	{
		len = from.len;
		char* p1 = new char[len + 1];
		strcpy_s(p1, len + 1, from.p);
		delete [] p;
		p = p1;
		return *this;
	}
	{
		p = new char[len + 1];
		strcpy_s(p, len + 1, from.p);
	}
	{
		delete[] p;
	}