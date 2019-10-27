#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
using namespace std;


class Shape  //定义几何形状类
{
private:
	float x;
public:
	Shape(float l, float w) //构造函数
	{
		x = l;
		x = w;

	}
	Shape() //构造函数
	{

	}
	float getArea()
	{
		return 0.0;
	}
};


class   Circle : public Shape//定义圆类
{
protected:
	float R;
public:
	Circle (float r) //带参构造函数
	{
		R = r;
	}	
	Circle(Circle &circle1)  //拷贝构造函数
	{
		R = circle1.R;
	}
	~Circle()     //析构函数
	{

	}
	float getArea()   //面积函数
	{
		float area;
		area = M_PI * R*R;    
		return area;
	}

};



class   Ract : public Shape//定义矩形类
{
protected:
	float L;
	float W;
public:
	Ract(float l, float w) //带参构造函数
	{
		L = l, W = w;
		 
	}
	Ract(Ract &circle1) //拷贝构造函数
	{
		L = circle1.L;
		W = circle1.W;
	}
	~Ract()//析构函数
	{

	}

	float getArea()   //面积函数
	{
		float area;
		area =L*W;
		return area;
	}
};


int main()
{
	Circle circle_one(5);
	Ract ract_one(3, 4);
	cout << circle_one.getArea() << endl;
	cout << ract_one.getArea() << endl;
}
