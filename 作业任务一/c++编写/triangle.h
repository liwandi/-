#pragma once
#include"point.h"
class triangle:public point 
{
private:
	
public:point a1,a2,a3;
	triangle(void);
	~triangle(void);
	//void set_i();//���뺯��
	double line(point n1,point n2);//���߶γ���
	bool If_tri(point n1,point n2,point n3);//�ж��Ƿ�Ϊ������
	bool If_dengyao(point n1,point n2,point n3);//�ж��Ƿ�Ϊ����
	bool If_dengbian(point n1,point n2,point n3);//�ж��Ƿ�Ϊ�ȱ�
	bool If_zhijiao(point n1,point n2,point n3);//�ж��Ƿ�ֱ��
};

