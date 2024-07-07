#include <iostream>
using namespace std;
const int MaxSize=100;
typedef struct sqstack{
	int *top;//ջ��ָ��
	int *base;//ջ��ָ��
	int stackSize;//ջ���������
}stack;
void initStack(stack &s)
{
	s.base=new int[MaxSize];
	if(!s.base)	exit(0);//�ڴ����ʧ�ܣ�����
	s.top=s.base;//��ʼ��ʱ��ջ��top��base���
	s.stackSize=MaxSize;//ջ���������
}
int isEmpty(stack s)
{
	if(s.base==s.top)
		return 1;//��ʾΪ�գ���Ԫ��
	return 0;//��Ϊ��
}
int stackLength(stack s)
{
	return s.top-s.base;
}
void CleanStack(stack &s)
{
	if(s.base)
	{
		s.top=s.base;
		cout<<"�ɹ����"<<endl;
	}
	else
		cout<<"ջ�Ѿ������٣��������"<<endl;
}
void DestoryStack(stack &s)
{
	if(s.base)
	{
		delete s.base;
		s.stackSize=0;
		s.base=NULL;
		s.top=NULL;
		cout<<"�ɹ�����"<<endl;
	}
	else
		cout<<"ջ�Ѿ������٣���������"<<endl;
}
//��ջ
void push(stack &s,int e)
{
	if((s.top-s.base)==s.stackSize)
		cout<<"ջ���ˣ��޷������Ԫ��"<<endl;
	else
	{
		*(s.top)=e;
		s.top++;
		cout<<"��ӳɹ�"<<endl;
	}
}
//��ջ
void pop(stack &s,int &e)
{
	if(isEmpty(s))
	{
		cout<<"ջΪ�գ��޷�����"<<endl;
	}
	else
	{
		s.top--;
		e=*(s.top);
		cout<<"�ɹ�����"<<endl;
	}
}
int top(stack s)
{
	if(isEmpty(s))
	{
		cout<<"ջΪ�գ�û��ջ��Ԫ��"<<endl;
		return -1;
	}
	else
	{
		s.top--;
		return *(s.top);
	}
}
void traverse(stack s)
{
	int length=stackLength(s);

	if(length>0)
	{
		cout<<"˳��ջ��Ԫ��Ϊ:(��ջ�׿�ʼ����)"<<endl;
		for(int i=0;i<length;i++)
			cout<<s.base[i]<<" ";
	}
	else
		cout<<"˳��ջΪ��"<<endl;
}
void menu()
{
	cout<<"**********************************"<<endl;
	cout<<"***      1.��ʼ��              ***"<<endl;
	cout<<"***      2.�ж�ջ�Ƿ�Ϊ��      ***"<<endl;
	cout<<"***      3.�ж�ջ�ĳ���        ***"<<endl;
	cout<<"***      4.���ջ              ***"<<endl;
	cout<<"***      5.����ջ              ***"<<endl;
	cout<<"***      6.��ջ                ***"<<endl;
	cout<<"***      7.��ջ                ***"<<endl;
	cout<<"***      8.��ջ��Ԫ��          ***"<<endl;
	cout<<"***      9.����˳��ջ          ***"<<endl;
	cout<<"***      10.�˳�               ***"<<endl;
	cout<<"**********************************"<<endl;
	cout<<"���������ѡ��:";
}
int main()
{
	int choice;
	stack s;
	int e1,e2;
	while(1)
	{
		menu();
		cin>>choice;
		switch(choice)
		{
			case 1:
				initStack(s);
				cout<<"��ʼ���ɹ�"<<endl;
				break;
			case 2:
				if(isEmpty(s))
					cout<<"ջΪ��"<<endl;
				else
					cout<<"ջ��Ϊ��"<<endl;
				break;
			case 3:
				cout<<"ջ�ĳ���Ϊ"<<stackLength(s)<<endl;
				break;
			case 4:
				CleanStack(s);
				break;
			case 5:
				DestoryStack(s);
				break;
			case 6:
				cout<<"��������Ҫ��ջ��Ԫ��ֵ��"<<endl;
				cin>>e1;
				push(s,e1);
				break;
			case 7:
				pop(s,e2);
				cout<<"������Ԫ��Ϊ"<<e2<<endl;
				break;
			case 8:
				if(top(s)!=-1)
					cout<<"ջ��Ԫ��Ϊ"<<top(s)<<endl;
				break;
			case 9:
				traverse(s);
				cout<<endl;
				break;
			case 10:
				cout<<"�ɹ��˳�"<<endl;
				exit(0);
			default:
				cout<<"������������������"<<endl;
				break;
		}
	}
}
