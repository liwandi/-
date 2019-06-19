#include"triangle.h"
void main()
{
	triangle a;
	
		a.a1.set();
		a.a2.set();
		a.a3.set();
	    cout<<"点("<<a.a1.get_x()<<","<<a.a1.get_y()<<")("<<a.a2.get_x()<<","<<a.a2.get_y()<<")("<<a.a3.get_x()<<","<<a.a3.get_y()<<")三边长"<<endl;
		if(a.If_tri(a.a1,a.a2,a.a3)==1)
			cout<<"它是三角形"<<endl;
		else 
			cout<<"它不是三角形"<<endl;
	
		if(a.If_dengyao(a.a1,a.a2,a.a3)==1)
			cout<<"它是等腰三角形"<<endl;
	else 
		cout<<"它不是等腰三角形"<<endl;
	
	if(a.If_zhijiao(a.a1,a.a2,a.a3)==1)
		cout<<"它是直角三角形"<<endl;
	else 
		cout<<"它不是直角三角形"<<endl;
	
	if(a.If_dengbian(a.a1,a.a2,a.a3)==1)
		cout<<"它是等边三角形"<<endl;
	else 
		cout<<"它不是等边三角形"<<endl;
	system("pause");
}