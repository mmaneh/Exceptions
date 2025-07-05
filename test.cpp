#include <gtest/gtest.h>
#include "exception.h"

TEST(DivisionTest, NoZeroInput) {
	EXPECT_EQ(divide(4, 2), 2);
}

TEST(DivisionTest, ZeroInput) {
	EXPECT_THROW(divide(5,0), myExcept);
}

TEST(DivisionTest, Nothrow) {
	EXPECT_NO_THROW(divide(4,2));
}

TEST(DivisionTest, HandlesException) {
	try {
		divide(5,0);
		FAIL() << "Expected exception";
	}catch(const myExcept& e){
		EXPECT_STREQ("Division by 0", e.what());
	}
}
