#include "KVStore.h"

int KVStore::init(){
	for(int i=0; i<MAX_ARRAY_SIZE; i++) {
	}
	return 0;
}

int KVStore::addItem(const char *key, const void *value, int type){
}

int KVStore::deleteItem(const char *key){
}

int KVStore::modify(const char *key, const void *value, int type){
}

int KVStore::find(const char *key, void *value, int &type){
}
