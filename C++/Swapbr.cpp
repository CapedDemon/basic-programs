#include <iostream>
using namespace std;
class S
{
	int n;

public:
	void input()
	{
		cin >> n;
	}
	static void swap(S *a, S *b)
	{
		S temp;
		temp.n = (*a).n;
		(*a).n = (*b).n;
		(*b).n = temp.n;
	}
	void display()
	{
		cout << n << " ";
	}
};
int main()
{
	S n1, n2;
	cout << "Enter the two numbers ";
	n1.input();
	n2.input();
	S::swap(&n1, &n2);
	cout << "After swapping: ";
	n1.display();
	n2.display();
}