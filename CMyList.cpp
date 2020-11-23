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
	// 1. 새로운 노드를 동적으로 생성
	Node* p2 = new Node;

	// 2. 노드 멤버를 초기화
	// data = num
	// link = nullptr
	p2->data = num;
	p2->link = nullptr;

	if (pHead == nullptr) {
		// pHead == nullptr
		// pHead 를 새로운 노드로 연결
		pHead = p2;
	}
	else {
		// pHead != nullptr
		// 노드의 link = pHead
		// pHead 를 새로운 노드로 연결
		p2->link = pHead;
		pHead = p2;

	}


}
void CMyList::PrintData()
{
	int count = 0;
	Node* follow = pHead;
	cout << "리스트 데이터 : ";
	while (follow != nullptr)
	{
		cout << follow->data << " - ";
		follow = follow->link;
		count++;
	}
	cout << "[ " << count << "개 ]";
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

