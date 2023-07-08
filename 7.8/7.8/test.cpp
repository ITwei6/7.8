#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void Test1()
{
	vector<char>strV;

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	//���õ���������

	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << endl;
		it++;
	}
	for (auto e : v)
	{
		cout << e;
	}
}
void Test2()
{
	vector<string> v;
	string name1("xxxxx");
	v.push_back(name1);
	v.push_back(string("xxxxxxx"));
	v.push_back("xxxxxxx");
}

void Test3()
{
	//vector�Ĺ��캯��
	vector<int> v1(10, 1);
	vector<string> v2(10, "xxxxx");
	//���ٶ��ģ���ʲô��ʼ��
	for (auto e : v1)
	{
		cout << e;
	}
	for (auto e : v2)
	{
		cout << e;
	}
	//�������ò�ͬ���͵ĵ�����������
	vector<int> v3(v1.begin(), v1.end());

	for (auto e : v3)
	{
		cout << e << endl;
	}
	string str("heloxiaoyao");
	vector<char> v4(str.begin(), str.end());
	for (auto e : v4)
	{
		cout << e << endl;
	}
	//������������ʵ����ָ�룬����ָ��Ҳ����������
	int a[] = { 1,5,3,2,4 };
	vector<int> v5(a, a + 5);
	for (auto e : v5)
	{
		cout << e;
	}
}
void Test4()
{
	int a[] = { 1,5,3,2,4 };
	vector<int> v5(a, a + 5);
	//����=====�㷨sort
	//����<
	//less
	sort(v5.begin(), v5.end());
	
	for (auto e : v5)
	{
		cout << e;
	}
	//����
	//  >
	greater<int> g;
    //sort(v5.begin(), v5.end(), g);
	sort(v5.begin(), v5.end(), greater<int>());//����
	//�����������Ǿ��ǽ���
	//sort(v5.rbegin(), v5.rend());
	for (auto e : v5)
	{
		cout << e;
	}
	string str("helloxias");
	sort(str.begin(), str.end());
	for (auto e : str)
	{
		cout << e;
	}
}
void Test5()
{
	vector<int> v1;
	//cout << v1.max_size();
	//v1.reserve(10);
	
	v1.resize(10);
	for (int i = 0; i < 10; i++)
	{
		v1[i] = i;
	}
	for (auto e : v1)
	{
		cout << e;
	}
	//����д�ǲ��Ϸ��ģ��±�[]Ҫ��i<size

	vector<int> v2;
	v2.resize(10);
	for (int i = 0; i < 10; i++)
	{
		v2.push_back(i);
	}
	for (auto e : v1)
	{
		cout << e;
	}
}
void Test6()
{
	int a[] = { 100,12,5,6,48,44,75,3,26,54,11 };
	vector<int> v1(a, a + sizeof(a) / sizeof(a[0]));
	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;
	//ͷɾ
	v1.erase(v1.begin());
	for (auto e : v1)
	{
		cout << e << " ";
	}
	//ͷ��
	v1.insert(v1.begin(), 100);
	for (auto e : v1)
	{
		cout << e << " ";
	}
	//ɾ������������
	v1.erase(v1.begin() + 2);
	vector<int>::iterator pos = find(v1.begin(), v1.end(), 3);
	//auto pos
	v1.erase(pos);
	//ɾ�����е�3�ظ���
	while (pos != v1.end())
	{
		pos = find(v1.begin(), v1.end(), 3);
		v1.erase(pos);
	}
}
int main()
{
	Test6();
}