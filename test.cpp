#include "pch.h"
#include <vector>
#include "C:\Users\AstroS\source\repos\ConsoleApplication11\ConsoleApplication11\Header.cpp"

std::vector<int> vc{ 1, 2, 3 , 4, 5 };
std::vector<int> vc1{ 6, 7, 8, 9, 10 };

TEST(Testadd, Test1) {
	EXPECT_TRUE(add2(vc, 5) == vc1);
}