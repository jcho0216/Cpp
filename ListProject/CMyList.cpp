#include "CMyList.h"

void CMyList::Start() {
	int num;
	CMyList list;

	while (1) {
		cout << "------------------\n";
		cout << "CMyList 메뉴\n";
		cout << "1 삽입\n";
		cout << "2 출력\n";
		cout << "0 종료\n";
		cout << "------------------\n";
		cout << "메뉴를 고르세요(숫자 입력) : ";

		cin >> num;
		if (num != 0) {
			switch (num)
			{
			case 1:
				cout << "삽입할 데이터를 입력해주세요: ";
				cin >> num;
				list.insert(num);
			case 2:
				list.PrintData();
					
			default:
				cout << "0~2 사이의 숫자를 선택해주세요.~!\n";
			}
		}
		else {
			cout << "프로그램을 종료합니다~!\n";
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
	cout << "CMyList 데이터 : ";
	while (follow != nullptr)
	{
		cout << follow->data << " ";
		follow = follow->taillink;
		count++;
	}

	cout << "\n";
	cout << "데이터 개수: ";
	cout << "[ " << count << "개 ]\n";
	cout << "\n";
}




