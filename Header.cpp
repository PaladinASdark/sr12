#include "Header.h"

std::vector<int> add2(std::vector<int> v, int n)
{
	for (int y = 0; y < 5; y++) {
		v[y] += n;
	}
	return v;
}
