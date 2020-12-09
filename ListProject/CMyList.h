#pragma once
#include <iostream>
using namespace std;

struct  Node
{
	int data;
	Node* headlink;
	Node* taillink;
};

class CMyList {
public:
	CMyList() {}
	~CMyList() {}
	void insert(int num);
	void PrintData();
	void Start();
	Node* getHead();
	Node* getTail();
	void setHead(Node* num);
	void setTail(Node* num);
private:
	Node* pHead = nullptr;
	Node* pTail = nullptr;
	int m_nLength = 0;
};