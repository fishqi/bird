#include "decode.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strToInt(const char *str) {
	if(NULL==str || 0==strlen(str)) {
		return -1;
	}
	return atoi(str);
}

char* intToStr(int number) {
	char *str = (char *)malloc(sizeof(char)*128);	
	if(NULL == str) {
		return NULL;
	}

	snprintf(str, 128, "%d", number);
	return str;
}
