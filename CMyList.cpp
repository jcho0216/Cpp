#include <iostream>
using namespace std;

struct  Node
{
	int data;
	Node* link;
};

class CMyList {
public:
	CMyList() {}
	~CMyList(){}
	void insert(int num);
	void PrintData();
private:
	Node* pHead = nullptr;
};

void CMyList::insert(int num)
{
	// 1. ���ο� ��带 �������� ����
	Node* p2 = new Node;

	// 2. ��� ����� �ʱ�ȭ
	// data = num
	// link = nullptr
	p2->data = num;
	p2->link = nullptr;

	if (pHead == nullptr) {
		// pHead == nullptr
		// pHead �� ���ο� ���� ����
		pHead = p2;
	}
	else {
		// pHead != nullptr
		// ����� link = pHead
		// pHead �� ���ο� ���� ����
		p2->link = pHead;
		pHead = p2;

	}


}
void CMyList::PrintData()
{
	int count = 0;
	Node* follow = pHead;
	cout << "����Ʈ ������ : ";
	while (follow != nullptr)
	{
		cout << follow->data << " - ";
		follow = follow->link;
		count++;
	}
	cout << "[ " << count << "�� ]";
}


int main() {
	CMyList list;
	list.insert(20);
	list.insert(30);
	list.insert(40);
	list.insert(10);

	
	list.PrintData();

	return 0;
}

