#include <iostream>
#include <cmath>

class vec2
{
public:
	float x;
	float y;
	
	float	getMagnitude()
	{
		return (sqrt(x * x + y * y));
	}
};

float	getmin(float a, float b)
{
	return (a < b ? a : b);
}

// �� ���� return �ϵ���
vec2	closestPair(vec2* v, int left, int right)
{
	if (right - left <= 3)
	{

	}
}

int main()
{
	// x�� ���� ���� �� ��ǥ��
	vec2 v[] = { {1,0}, {2,1}, {3,5}, {4,3} };
	
}