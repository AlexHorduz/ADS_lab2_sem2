#pragma once

template <class T>
class BST {
public:
	virtual void insert(T data) = 0;
	virtual bool contains(T data) = 0;
	virtual bool erase(T data) = 0;
	virtual int size() = 0;
	virtual void clear() = 0;
};