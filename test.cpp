#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//普通实现页面
//JAVA页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册..." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图..." << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++..." << endl;
//	}
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
////Python页面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册..." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图..." << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++..." << endl;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
////C++页面
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册..." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图..." << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++..." << endl;
//	}
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//void test01()
//{
//	cout << "Java下载视频页面如下:" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "---------------------------------" << endl;
//	cout << "Python下载视频页面如下:" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "---------------------------------" << endl;
//	cout << "C++下载视频页面如下:" << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}

//继承实现页面
//公共页面类
//class BasePage
//{
//public:
//	void header()
//		{
//			cout << "首页、公开课、登录、注册..." << endl;
//		}
//		void footer()
//		{
//			cout << "帮助中心、交流合作、站内地图..." << endl;
//		}
//		void left()
//		{
//			cout << "Java、Python、C++..." << endl;
//		}
//};
////继承的好处，减少重复代码
//// 语法：class 子类 ：继承方式  父类
//// 子类  也称为  派生类
//// 父类  也成为  基类
//// 
////JAVA页面
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
////Python页面
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
////C++页面
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "CPP学科视频" << endl;
//	}
//};
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//继承方式
//公共继承
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A = 10;//父类中公共权限成员到子类中依然是公共权限
//		m_B = 10;//父类中保护权限成员到子类中依然是保护权限
//		//m_C = 10;//父类中私有权限成员到子类不可访问
//	}
//};
////保护继承
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;//到了Son1中m_B是保护权限，不可访问
//}
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_A = 100;//父类中公共权限成员到子类中变为保护权限
//		m_B = 100;//父类中保护权限成员到子类中依然是保护权限
//		//m_C = 100;//父类中私有成员子类访问不到
//	}
//};
//void test02()
//{
//	Son2 s1;
//	//s1.m_A = 1000;//Son2中m_A，m_B是保护权限类外访问不到
//}
////私有继承
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_A = 100;//父类中公共权限成员到子类中变为私有权限
//		m_B = 100;//父类中保护权限成员到子类中变为私有权限
//		//m_C = 100;//父类中私有成员子类访问不到
//	}
//};
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//m_A = 1000;//到了Son3中，m_A变为私有，即使是数儿子，也无法访问
//		//m_B = 1000;
//	}
//};
//void test03()
//{
//	Son3 s1;
//	//s1.m_A = 1000;Son3中变为私有成员，无法访问
//	//s1.m_B = 1000;Son3中变为私有成员，无法访问
//	//s1.m_C = 1000;Son3中变为私有成员，无法访问
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//继承中的对象模型
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son :public Base
//{
//public:
//	int m_D;
//};
////利用开发人员命令提示工具查看对象模型
////跳转盘符  
////跳转文件路径  cd..具体路径
////查看命令
////cl /d1 reportSingleClassLayout类名 文件名
//void test01()
//{
//	//16
//	cout << "size of Son = " << sizeof(Son) << endl;
//	//父类中所有非静态成员属性全部被子类继承
//	//父类中私有成员属性被编译器隐藏不能访问，但是确实被继承
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//继承中的构造与析构的顺序
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base构造函数!" << endl;
//	}
//	~Base()
//	{
//		cout << "Base析构函数!" << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << " Son构造函数!" << endl;
//	}
//	~Son()
//	{
//		cout << " Son析构函数!" << endl;
//	}
//};
//void test01()
//{
//	//Base b;
//	Son s;//继承中的构造与析构顺序
//	//先构造父类再构造子类
//	//析构的顺序与构造顺序相反
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//继承中同名成员处理方式
//class Base
//{
//public: 
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base--func()调用" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base--func(int a)调用" << endl;
//	}
//	int m_A;
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << "Son--func()调用" << endl;
//	}
//	int m_A;
//};
////同名成员属性
//void test01()
//{
//	Son s;
//	cout << "Son m_A = " << s.m_A << endl;
//	//如果通过子类访问到父类中同名成员，需要加作用域
//	cout << "Base m_A = " << s.Base::m_A << endl;
//}
////同名成员函数
//void test02()
//{
//	Son s;
//	s.func();//直接调用是调用子类中的成员
//	//如何调用父类中同名的成员
//	s.Base::func();
//	//如果子类中出现与父类中同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
//	//如果想访问，需要加作用域
//	s.Base::func(100);
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//继承中的同名静态成员处理方式
//class Base
//{
//public:
//	
//	static int m_A;
//	static void func()
//	{
//		cout << "Base - static void func()" << endl;
//	}
//};
//int Base::m_A = 100;
//class Son :public Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "Son - static void func()" << endl;
//	}
//};
//int Son::m_A = 200;
////同名静态成员属性
//void test01()
//{
//	//1.通过对象访问数据
//	cout << "通过对象访问:" << endl;
//	Son s;
//	cout << "Son m_A = " << s.m_A << endl;
//	cout << "Base m_A = " << s.Base::m_A << endl;
//	//2.通过类名访问数据
//	cout << "通过类名访问:" << endl;
//	cout << "Son m_A = " << Son::m_A << endl;
//	cout << "Base m_A = " << Son::Base::m_A << endl;
//	//Son::通过类名访问，Base::访问父类作用域下的
//}
////同名静态成员函数
//void test02()
//{
//	//1.通过对象访问
//	cout << "通过对象访问:" << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//	//2.通过类名访问
//	cout << "通过类名访问:" << endl;
//	Son::func();
//	Son::Base::func();
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}


//多继承语法
//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 100;
//	}
//	int m_A;
//};
//class Base2
//{
//public:
//	Base2()
//	{
//		m_A = 200;
//	}
//	int m_A;
//};
////子类需要继承Base1 Base2
//class Son :public Base1,public Base2
//{
//public:
//	Son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//	int m_C;
//	int m_D;
//};
//void test01()
//{
//	Son s;
//	cout << "size of Son = " << sizeof(s) << endl;
//	cout << "m_A=" << s.Base1::m_A << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//菱形继承
//动物类
class Animal 
{
public:
	int m_Age;
};
//利用虚继承，解决菱形继承的问题
//在继承之前加关键字virtual，变虚继承
// Animal类称为 虚基类
//羊类
class Sheep:virtual public Animal {};
//驼类
class Tuo:virtual public Animal {};
//羊驼类
class SheepTuo:public Sheep,public Tuo{};
void test01()
{
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//菱形继承时有两个父类拥有相同数据，需要加作用域作为区分
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	//这份数据只要一份就行，菱形继承导致数据有两份，导致资源浪费
	cout << "st.m_Age = " << st.m_Age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}