#pragma once
#include"point.h"
class triangle:public point 
{
private:
	
public:point a1,a2,a3;
	triangle(void);
	~triangle(void);
	//void set_i();//输入函数
	double line(point n1,point n2);//求线段长度
	bool If_tri(point n1,point n2,point n3);//判断是否为三角形
	bool If_dengyao(point n1,point n2,point n3);//判断是否为等腰
	bool If_dengbian(point n1,point n2,point n3);//判断是否为等边
	bool If_zhijiao(point n1,point n2,point n3);//判断是否直角
};

