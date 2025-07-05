#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <exception>

class myExcept : public std::exception {

public:
	const char* what() const noexcept override{ 
		return "Division by 0";
	}
};

int divide(int a, int b);
#endif
