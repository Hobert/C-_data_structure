#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//class Person
//{
//	
//	public:
////		Person operator+(Person &p)
////		{
////			Person temp;
////			temp.m_a = this->m_a + p.m_a;
////			temp.m_b = this->m_b + p.m_b;
////			return temp;		
////		} 
//		int m_a = 10;
//		int m_b = 10;
//};
//
//Person operator+(Person p1,Person p2)
//{
//	
//	Person temp;
//	temp.m_a = p1.m_a + p2.m_b;
//	temp.m_b = p1.m_b + p2.m_b;
//	return temp;
//} 
//
//
//Person operator+(Person p1,int num)
//{
//	
//	
//	Person temp;
//	temp.m_a = p1.m_a + num;
//	temp.m_b = p1.m_b + num;
//	return temp;
//	
//} 
//
//
//void test01()
//{
//	
//	Person p1;
//	Person p2;
//	
//	//��Ա�������ر��ʵ���
//	//Person p3 = p1.operator+(p2);
//	
//	//ȫ�ֺ������ر��ʵ���
//	//Person p3 = operator+(p1, p2);
//	
//	Person p3 = p1 + p2;
//	Person p4 = p1 + 100;
//	
//	cout << "p3.m_a:" << p3.m_a << endl;
//	cout << "p3.m_b:" << p3.m_b << endl;
//	
//	cout << "p4.m_a:" << p4.m_a << endl;
//	cout << "p4.m_b:" << p4.m_b << endl;
//}
//
//
//int main(int argc, char** argv) {
//	test01();
//	
//	return 0;
//}


//------------------------------------------------------------------------------------------

//class Person
//{
//	//���ó�Ա�����������������p.operator<<(cout)�򻯰汾Ϊp << cout
//	//�������ó�Ա��������<<���������Ϊ�޷�ʵ��cout�����
//	//void operator<<( cout )
//
//	friend ostream operator<<(ostream &cout ,Person &p);
//	
//	private:
//		int m_a;
//		int m_b;
//		
//};
//
//ostream& operator<<(ostream &cout ,Person &p)
//{
//	cout << "m_a:" << p.m_a << "m_b:" << p.m_b;
//	return cout;
//}
//
//int main()
//{
//	Person p;
//	
//	cout << p << endl;//�����ӡ����һ����ʽ���˼�� 
//	
//	return 0;
//}


//-----------------------------------------------------------------------------------------
class My_int
{
	
	public:
		My_int()
		{
			this->m_value = 0;
			
		}
		
		//ǰ�õ�������
		//ǰ�÷���ֵ���ͱ��������ã��������������ӡ���ǰ��++����ʼ��������ͬһ���������磺++(++i); 
		
		My_int& operator++()
		{

			this->m_value++;
			return *this;
		}
		
		//���õ�������
		//Ϊ������ǰ�úͺ��ú������أ���Ҫʹ��ռλ����int,ֻ��ʹ��int��ʹ���������������ͻᱨ�� 
		//���ﷵ��ֵ����д�����ã���Ϊ�����temp�Ǿֲ������ں����������ͷŶ����ڴ棬�ٽ��е��ûᱨ��
		
		My_int operator++(int) 
		{
			
			//�ȼ�¼��ʱ���
			
			//�����
			
			//��󽫼�¼���������
			
			My_int temp = *this;//�Ƚ�δ++�ı�������
			
			m_value++;
			return temp;
		}
		
		int m_value;	
};

void test01()
{
	My_int i;
	++i;
	cout << i.m_value << endl;
	i++; 
	cout << i.m_value << endl;
	
}

int main()
{
	test01();
	
	 
	
	return 0;
} 
