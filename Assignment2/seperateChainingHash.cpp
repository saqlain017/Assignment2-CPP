#include <iostream>
#include <stdlib.h>
using namespace std;

int hashFn(int keyValue){
	return (keyValue % 50);
}

struct HTNode{
	int value;
	struct HTNode* next;
};
HTNode HTable[10];

for (int i; i<size;i++){
	HTable[i].value = -1;
}
int insertValue(){
	int keyValue;
	cout << "Insert Number you want to map \n";
	cin >> keyValue;
	int index = hashFn(keyValue);
	if (array[index]==-1){
		array[index] = keyValue;
		return 0;
	}
	for(int i = 0;i<50;i++){
		int newIndex = (index+1)%50;
		if (array[newIndex]==-1){
			array[newIndex] = keyValue;
			return 0;
		}
	}
	cout << "Array is full \n";
}
