#include"triangle.h"
void main()
{
	triangle a;
	
		a.a1.set();
		a.a2.set();
		a.a3.set();
	    cout<<"��("<<a.a1.get_x()<<","<<a.a1.get_y()<<")("<<a.a2.get_x()<<","<<a.a2.get_y()<<")("<<a.a3.get_x()<<","<<a.a3.get_y()<<")���߳�"<<endl;
		if(a.If_tri(a.a1,a.a2,a.a3)==1)
			cout<<"����������"<<endl;
		else 
			cout<<"������������"<<endl;
	
		if(a.If_dengyao(a.a1,a.a2,a.a3)==1)
			cout<<"���ǵ���������"<<endl;
	else 
		cout<<"�����ǵ���������"<<endl;
	
	if(a.If_zhijiao(a.a1,a.a2,a.a3)==1)
		cout<<"����ֱ��������"<<endl;
	else 
		cout<<"������ֱ��������"<<endl;
	
	if(a.If_dengbian(a.a1,a.a2,a.a3)==1)
		cout<<"���ǵȱ�������"<<endl;
	else 
		cout<<"�����ǵȱ�������"<<endl;
	system("pause");
}