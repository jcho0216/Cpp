#include "CMyList.h"

void CMyList::Start() {
	int num;
	CMyList list;

	while (1) {
		cout << "------------------\n";
		cout << "CMyList �޴�\n";
		cout << "1 ����\n";
		cout << "2 ���\n";
		cout << "0 ����\n";
		cout << "------------------\n";
		cout << "�޴��� ������(���� �Է�) : ";

		cin >> num;
		if (num != 0) {
			switch (num)
			{
			case 1:
				cout << "������ �����͸� �Է����ּ���: ";
				cin >> num;
				list.insert(num);
			case 2:
				list.PrintData();
					
			default:
				cout << "0~2 ������ ���ڸ� �������ּ���.~!\n";
			}
		}
		else {
			cout << "���α׷��� �����մϴ�~!\n";
			break;
		}


	}

}

Node* CMyList::getHead()
{
	return this->pHead;
}

Node* CMyList::getTail()
{
	return this->pTail;
}

void CMyList::setHead(Node* num)
{
	pHead = num;
}

void CMyList::setTail(Node* num)
{
	pTail = num;
}

void CMyList::insert(int num)
{
	Node* p2 = new Node;
	p2->data = num;
	p2->headlink = nullptr;
	p2->taillink = nullptr;

	if (getHead() == nullptr) {
		setHead(p2);
		setTail(p2);
	}

	else {
		getTail()->taillink = p2;
		p2->headlink = getTail();
		setTail(p2);
	}

}

void CMyList::PrintData()
{
	int count = 0;
	Node* follow = getHead();
	cout << "\n";
	cout << "CMyList ������ : ";
	while (follow != nullptr)
	{
		cout << follow->data << " ";
		follow = follow->taillink;
		count++;
	}

	cout << "\n";
	cout << "������ ����: ";
	cout << "[ " << count << "�� ]\n";
	cout << "\n";
}




