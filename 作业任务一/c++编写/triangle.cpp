#include "triangle.h"



triangle::triangle(void)
{
}


triangle::~triangle(void)
{
}

//���߶γ���
double triangle::line(point a1,point a2)
{
	double l;
	l=sqrt((a1.get_x()-a2.get_x())*(a1.get_x()-a2.get_x())+(a1.get_y()-a2.get_y())*(a1.get_y()-a2.get_y()));
	return l;
}
//�ж��Ƿ�Ϊ������,����֮�ʹ��ڵ�����
bool triangle::If_tri(point n1,point n2,point n3)
{
	bool flag=0;//Ϊ��
      double l1,l2,l3;
	  l1=line(n1,n2);cout<<"l1��Ϊ��"<<l1<<endl;
	  l2=line(n1,n3);cout<<"l2��Ϊ��"<<l2<<endl;
	  l3=line(n2,n3);cout<<"l3��Ϊ��"<<l3<<endl;
	  if((l1+l2>l3)&&(l2+l3>l1)&&(l2+l3>l1))flag=1;//Ϊ��
	  return flag;
}
//�ж��Ƿ�Ϊֱ��
bool  triangle::If_zhijiao(point n1,point n2,point n3)
{
	bool flag=0;//Ϊ��
      double l1,l2,l3;
	  l1=line(n1,n2);
	  l2=line(n1,n3);
	  l3=line(n2,n3);
	  if(l1*l1+l2*l2==l3*l3||l1*l1+l3*l3==l2*l2||l2*l2+l3*l3==l1*l1)flag=1;//Ϊ��
	    return flag;
}
//�жϵ���
bool triangle::If_dengyao(point n1,point n2,point n3)
{
	bool flag=0;//Ϊ��
      double l1,l2,l3;
	  l1=line(n1,n2);
	  l2=line(n1,n3);
	  l3=line(n2,n3);
	  if(l1==l2||l1==l3||l2==l3)flag=1;
	    return flag;
}
//�жϵȱ�
bool triangle::If_dengbian(point n1,point n2,point n3)
{
	bool flag=0;//Ϊ��
      double l1,l2,l3;
	  l1=line(n1,n2);
	  l2=line(n1,n3);
	  l3=line(n2,n3);
	  if(l1==l2&&l2==l3)flag=1;//Ϊ�ȱ�
	    return flag;
}