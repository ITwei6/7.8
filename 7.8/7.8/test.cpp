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
	//利用迭代器遍历

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
	//vector的构造函数
	vector<int> v1(10, 1);
	vector<string> v2(10, "xxxxx");
	//开辟多大的，用什么初始化
	for (auto e : v1)
	{
		cout << e;
	}
	for (auto e : v2)
	{
		cout << e;
	}
	//还可以用不同类型的迭代器来构造
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
	//迭代器本质其实就是指针，所以指针也可以用类似
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
	//排序=====算法sort
	//升序<
	//less
	sort(v5.begin(), v5.end());
	
	for (auto e : v5)
	{
		cout << e;
	}
	//降序
	//  >
	greater<int> g;
    //sort(v5.begin(), v5.end(), g);
	sort(v5.begin(), v5.end(), greater<int>());//匿名
	//倒着排升序，那就是降序
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
	//这样写是不合法的？下标[]要求i<size

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
	//头删
	v1.erase(v1.begin());
	for (auto e : v1)
	{
		cout << e << " ";
	}
	//头插
	v1.insert(v1.begin(), 100);
	for (auto e : v1)
	{
		cout << e << " ";
	}
	//删除第三个数据
	v1.erase(v1.begin() + 2);
	vector<int>::iterator pos = find(v1.begin(), v1.end(), 3);
	//auto pos
	v1.erase(pos);
	//删除所有的3重复的
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