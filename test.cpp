#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//��ͨʵ��ҳ��
//JAVAҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��..." << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ..." << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++..." << endl;
//	}
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
////Pythonҳ��
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��..." << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ..." << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++..." << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
////C++ҳ��
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��..." << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ..." << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++..." << endl;
//	}
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//void test01()
//{
//	cout << "Java������Ƶҳ������:" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "---------------------------------" << endl;
//	cout << "Python������Ƶҳ������:" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "---------------------------------" << endl;
//	cout << "C++������Ƶҳ������:" << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}

//�̳�ʵ��ҳ��
//����ҳ����
//class BasePage
//{
//public:
//	void header()
//		{
//			cout << "��ҳ�������Ρ���¼��ע��..." << endl;
//		}
//		void footer()
//		{
//			cout << "�������ġ�����������վ�ڵ�ͼ..." << endl;
//		}
//		void left()
//		{
//			cout << "Java��Python��C++..." << endl;
//		}
//};
////�̳еĺô��������ظ�����
//// �﷨��class ���� ���̳з�ʽ  ����
//// ����  Ҳ��Ϊ  ������
//// ����  Ҳ��Ϊ  ����
//// 
////JAVAҳ��
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
////Pythonҳ��
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
////C++ҳ��
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "CPPѧ����Ƶ" << endl;
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

//�̳з�ʽ
//�����̳�
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
//		m_A = 10;//�����й���Ȩ�޳�Ա����������Ȼ�ǹ���Ȩ��
//		m_B = 10;//�����б���Ȩ�޳�Ա����������Ȼ�Ǳ���Ȩ��
//		//m_C = 10;//������˽��Ȩ�޳�Ա�����಻�ɷ���
//	}
//};
////�����̳�
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;//����Son1��m_B�Ǳ���Ȩ�ޣ����ɷ���
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
//		m_A = 100;//�����й���Ȩ�޳�Ա�������б�Ϊ����Ȩ��
//		m_B = 100;//�����б���Ȩ�޳�Ա����������Ȼ�Ǳ���Ȩ��
//		//m_C = 100;//������˽�г�Ա������ʲ���
//	}
//};
//void test02()
//{
//	Son2 s1;
//	//s1.m_A = 1000;//Son2��m_A��m_B�Ǳ���Ȩ��������ʲ���
//}
////˽�м̳�
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
//		m_A = 100;//�����й���Ȩ�޳�Ա�������б�Ϊ˽��Ȩ��
//		m_B = 100;//�����б���Ȩ�޳�Ա�������б�Ϊ˽��Ȩ��
//		//m_C = 100;//������˽�г�Ա������ʲ���
//	}
//};
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//m_A = 1000;//����Son3�У�m_A��Ϊ˽�У���ʹ�������ӣ�Ҳ�޷�����
//		//m_B = 1000;
//	}
//};
//void test03()
//{
//	Son3 s1;
//	//s1.m_A = 1000;Son3�б�Ϊ˽�г�Ա���޷�����
//	//s1.m_B = 1000;Son3�б�Ϊ˽�г�Ա���޷�����
//	//s1.m_C = 1000;Son3�б�Ϊ˽�г�Ա���޷�����
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//�̳��еĶ���ģ��
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
////���ÿ�����Ա������ʾ���߲鿴����ģ��
////��ת�̷�  
////��ת�ļ�·��  cd..����·��
////�鿴����
////cl /d1 reportSingleClassLayout���� �ļ���
//void test01()
//{
//	//16
//	cout << "size of Son = " << sizeof(Son) << endl;
//	//���������зǾ�̬��Ա����ȫ��������̳�
//	//������˽�г�Ա���Ա����������ز��ܷ��ʣ�����ȷʵ���̳�
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//�̳��еĹ�����������˳��
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base���캯��!" << endl;
//	}
//	~Base()
//	{
//		cout << "Base��������!" << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << " Son���캯��!" << endl;
//	}
//	~Son()
//	{
//		cout << " Son��������!" << endl;
//	}
//};
//void test01()
//{
//	//Base b;
//	Son s;//�̳��еĹ���������˳��
//	//�ȹ��츸���ٹ�������
//	//������˳���빹��˳���෴
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//�̳���ͬ����Ա����ʽ
//class Base
//{
//public: 
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base--func()����" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base--func(int a)����" << endl;
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
//		cout << "Son--func()����" << endl;
//	}
//	int m_A;
//};
////ͬ����Ա����
//void test01()
//{
//	Son s;
//	cout << "Son m_A = " << s.m_A << endl;
//	//���ͨ��������ʵ�������ͬ����Ա����Ҫ��������
//	cout << "Base m_A = " << s.Base::m_A << endl;
//}
////ͬ����Ա����
//void test02()
//{
//	Son s;
//	s.func();//ֱ�ӵ����ǵ��������еĳ�Ա
//	//��ε��ø�����ͬ���ĳ�Ա
//	s.Base::func();
//	//��������г����븸����ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
//	//�������ʣ���Ҫ��������
//	s.Base::func(100);
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//�̳��е�ͬ����̬��Ա����ʽ
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
////ͬ����̬��Ա����
//void test01()
//{
//	//1.ͨ�������������
//	cout << "ͨ���������:" << endl;
//	Son s;
//	cout << "Son m_A = " << s.m_A << endl;
//	cout << "Base m_A = " << s.Base::m_A << endl;
//	//2.ͨ��������������
//	cout << "ͨ����������:" << endl;
//	cout << "Son m_A = " << Son::m_A << endl;
//	cout << "Base m_A = " << Son::Base::m_A << endl;
//	//Son::ͨ���������ʣ�Base::���ʸ����������µ�
//}
////ͬ����̬��Ա����
//void test02()
//{
//	//1.ͨ���������
//	cout << "ͨ���������:" << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//	//2.ͨ����������
//	cout << "ͨ����������:" << endl;
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


//��̳��﷨
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
////������Ҫ�̳�Base1 Base2
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

//���μ̳�
//������
class Animal 
{
public:
	int m_Age;
};
//������̳У�������μ̳е�����
//�ڼ̳�֮ǰ�ӹؼ���virtual������̳�
// Animal���Ϊ �����
//����
class Sheep:virtual public Animal {};
//����
class Tuo:virtual public Animal {};
//������
class SheepTuo:public Sheep,public Tuo{};
void test01()
{
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//���μ̳�ʱ����������ӵ����ͬ���ݣ���Ҫ����������Ϊ����
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	//�������ֻҪһ�ݾ��У����μ̳е������������ݣ�������Դ�˷�
	cout << "st.m_Age = " << st.m_Age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}