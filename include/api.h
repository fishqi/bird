int init(int size); //init kv table
int start(); //start kv table active
int add_key(const char *key, const char *value);
int del_key(const char *key);
int modify_key(const char *key, const char *value);
int find_key(const char *key, char *value);
