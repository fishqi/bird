#ifndef _KVSTORE_H_
#define _KVSTORE_H_

#include "item.h"

#define MAX_ARRAY_SIZE 1024

class KVStore{
public:
	int init(int size);
	int addItem(const char *key, const void *value, int type);
	int deleteItem(const char *key);
	int modify(const char *key, const void *value, int type);
	int find(const char *key, void *value, int &type);
private:
	item_st m_itemArray[MAX_ARRAY_SIZE];
};

#endif
