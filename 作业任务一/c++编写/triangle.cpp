#include "triangle.h"



triangle::triangle(void)
{
}


triangle::~triangle(void)
{
}

//求线段长度
double triangle::line(point a1,point a2)
{
	double l;
	l=sqrt((a1.get_x()-a2.get_x())*(a1.get_x()-a2.get_x())+(a1.get_y()-a2.get_y())*(a1.get_y()-a2.get_y()));
	return l;
}
//判断是否为三角形,两边之和大于第三边
bool triangle::If_tri(point n1,point n2,point n3)
{
	bool flag=0;//为假
      double l1,l2,l3;
	  l1=line(n1,n2);cout<<"l1长为："<<l1<<endl;
	  l2=line(n1,n3);cout<<"l2长为："<<l2<<endl;
	  l3=line(n2,n3);cout<<"l3长为："<<l3<<endl;
	  if((l1+l2>l3)&&(l2+l3>l1)&&(l2+l3>l1))flag=1;//为真
	  return flag;
}
//判断是否为直角
bool  triangle::If_zhijiao(point n1,point n2,point n3)
{
	bool flag=0;//为假
      double l1,l2,l3;
	  l1=line(n1,n2);
	  l2=line(n1,n3);
	  l3=line(n2,n3);
	  if(l1*l1+l2*l2==l3*l3||l1*l1+l3*l3==l2*l2||l2*l2+l3*l3==l1*l1)flag=1;//为真
	    return flag;
}
//判断等腰
bool triangle::If_dengyao(point n1,point n2,point n3)
{
	bool flag=0;//为假
      double l1,l2,l3;
	  l1=line(n1,n2);
	  l2=line(n1,n3);
	  l3=line(n2,n3);
	  if(l1==l2||l1==l3||l2==l3)flag=1;
	    return flag;
}
//判断等边
bool triangle::If_dengbian(point n1,point n2,point n3)
{
	bool flag=0;//为假
      double l1,l2,l3;
	  l1=line(n1,n2);
	  l2=line(n1,n3);
	  l3=line(n2,n3);
	  if(l1==l2&&l2==l3)flag=1;//为等边
	    return flag;
}