#pragma once
#include<iostream>
#include<cmath>
using namespace std;
class point
{
private:
	double x,y;//点的坐标
public:
	point(void);
	~point(void);
	void set()
	{
		cout<<"请输入坐标值：";
		cin>>x>>y;
	}
	//get 函数
	double get_x()
	{
		return x;
	}
	double get_y()
	{
		return y;
	}
};

