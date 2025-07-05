#include "exception.h"

int divide(int a, int b) {
	if (b == 0) throw myExcept{};
	return a/b;
}
