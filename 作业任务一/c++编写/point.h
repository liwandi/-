#pragma once
#include<iostream>
#include<cmath>
using namespace std;
class point
{
private:
	double x,y;//�������
public:
	point(void);
	~point(void);
	void set()
	{
		cout<<"����������ֵ��";
		cin>>x>>y;
	}
	//get ����
	double get_x()
	{
		return x;
	}
	double get_y()
	{
		return y;
	}
};

