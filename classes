#include <iostream>
using namespace std;
class queue
{
	int q[100];
	int sloc, rloc;
public:
	void init();
	void qput(int i);
	int qget();
};
void queue::init()
{
	rloc = sloc = 0;
}
void queue::qput(int i)
{
	setlocale(LC_ALL, "rus");
	if (sloc == 100)
	{
		cout << "Очередь заполнена";
		return;
	}
	sloc++;
	q[sloc] = i;
}
int queue::qget()
{
	if (rloc == sloc)
	{
		cout << "Очерердь пуста" << endl;
		return 0;
	}
	rloc++;
	return q[rloc];
}
int main()
{
	queue a, b;
	a.init();
	b.init();

	a.qput(10);
	b.qput(19);

	a.qput(20);
	b.qput(29);

	cout << "Содержимое очереди a: ";
	cout << a.qget() << ends;
	cout << a.qget() << endl;

	cout << "Содержимое очереди b: ";
	cout << b.qget() << ends;
	cout << b.qget() << endl;
	system("pause");
}
