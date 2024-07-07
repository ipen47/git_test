#include <iostream>
using namespace std;
const int MaxSize=100;
typedef struct sqstack{
	int *top;//栈顶指针
	int *base;//栈底指针
	int stackSize;//栈的最大容量
}stack;
void initStack(stack &s)
{
	s.base=new int[MaxSize];
	if(!s.base)	exit(0);//内存分配失败，结束
	s.top=s.base;//初始的时候栈的top与base相等
	s.stackSize=MaxSize;//栈的最大容量
}
int isEmpty(stack s)
{
	if(s.base==s.top)
		return 1;//表示为空，无元素
	return 0;//不为空
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
		cout<<"成功清空"<<endl;
	}
	else
		cout<<"栈已经被销毁，无需清空"<<endl;
}
void DestoryStack(stack &s)
{
	if(s.base)
	{
		delete s.base;
		s.stackSize=0;
		s.base=NULL;
		s.top=NULL;
		cout<<"成功销毁"<<endl;
	}
	else
		cout<<"栈已经被销毁，无需销毁"<<endl;
}
//入栈
void push(stack &s,int e)
{
	if((s.top-s.base)==s.stackSize)
		cout<<"栈满了，无法添加新元素"<<endl;
	else
	{
		*(s.top)=e;
		s.top++;
		cout<<"添加成功"<<endl;
	}
}
//出栈
void pop(stack &s,int &e)
{
	if(isEmpty(s))
	{
		cout<<"栈为空，无法弹出"<<endl;
	}
	else
	{
		s.top--;
		e=*(s.top);
		cout<<"成功弹出"<<endl;
	}
}
int top(stack s)
{
	if(isEmpty(s))
	{
		cout<<"栈为空，没有栈顶元素"<<endl;
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
		cout<<"顺序栈的元素为:(从栈底开始遍历)"<<endl;
		for(int i=0;i<length;i++)
			cout<<s.base[i]<<" ";
	}
	else
		cout<<"顺序栈为空"<<endl;
}
void menu()
{
	cout<<"**********************************"<<endl;
	cout<<"***      1.初始化              ***"<<endl;
	cout<<"***      2.判断栈是否为空      ***"<<endl;
	cout<<"***      3.判断栈的长度        ***"<<endl;
	cout<<"***      4.清空栈              ***"<<endl;
	cout<<"***      5.销毁栈              ***"<<endl;
	cout<<"***      6.入栈                ***"<<endl;
	cout<<"***      7.出栈                ***"<<endl;
	cout<<"***      8.求栈顶元素          ***"<<endl;
	cout<<"***      9.遍历顺序栈          ***"<<endl;
	cout<<"***      10.退出               ***"<<endl;
	cout<<"**********************************"<<endl;
	cout<<"请输入你的选择:";
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
				cout<<"初始化成功"<<endl;
				break;
			case 2:
				if(isEmpty(s))
					cout<<"栈为空"<<endl;
				else
					cout<<"栈不为空"<<endl;
				break;
			case 3:
				cout<<"栈的长度为"<<stackLength(s)<<endl;
				break;
			case 4:
				CleanStack(s);
				break;
			case 5:
				DestoryStack(s);
				break;
			case 6:
				cout<<"请输入想要入栈的元素值："<<endl;
				cin>>e1;
				push(s,e1);
				break;
			case 7:
				pop(s,e2);
				cout<<"弹出的元素为"<<e2<<endl;
				break;
			case 8:
				if(top(s)!=-1)
					cout<<"栈顶元素为"<<top(s)<<endl;
				break;
			case 9:
				traverse(s);
				cout<<endl;
				break;
			case 10:
				cout<<"成功退出"<<endl;
				exit(0);
			default:
				cout<<"输入有误，请重新输入"<<endl;
				break;
		}
	}
}
