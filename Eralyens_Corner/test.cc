#include <iostream>
using namespace std;

class test
{
	public:
		int T1, T2, T4, T5;

		test()
		{
			T1 = T2 = T4 = T5 = 0;
		}

		int test1()
		{
			return T1++;
		}

		int test2()
		{
			return ++T2;
		}
		
		int test3(int &x)
		{
			return ++x;
		}
		
		int test4()
		{
			return (T4++);
		}
		
		int test5(int & T5)
		{
			T5 = T5 + 1;
			return T5;
		}
};

int main()
{
	test t;
	int x= 0;
	cout << t.test1() << " " << t.T1 << endl;
	cout << t.test2() << " " << t.T2 << endl;
	cout << t.test3(x) << " " << x << endl;
	cout << t.test4() << " " << t.T4 << endl;
	cout << t.test5(t.T5) << " " << t.T5 << endl;
}
