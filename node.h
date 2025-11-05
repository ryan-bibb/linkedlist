#ifndef NODE_H
#define NODE_H

//*****************************************************************************************************

template<typename TYPE>
struct Node
{
	Node<TYPE>* next;
	TYPE data;

	Node();
	Node(const TYPE& dat, Node<TYPE>* nex = nullptr);
};

//*****************************************************************************************************

template<typename TYPE>
Node<TYPE>::Node()
{
	data = 0;
	next = nullptr;
}

//*****************************************************************************************************

template<typename TYPE>
Node<TYPE>::Node(const TYPE& dat, Node<TYPE>* nex)
{
	data = dat;
	next = nex;
}

//*****************************************************************************************************

#endif
