#include <iostream>

void sort(int arr[],int size){
	int tmp;
	bool flag = false;
	for(int i = 0;i < size - 1;i++){
		for(int j = i + 1;j < size - i - 1;j++){
			if(arr[i] > arr[j]){
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				flag = true;
			}
		}
		// 阿亮优化了冒泡排序
		if(!flag) break;
	}
}

int main(){
	int arr[] = {1,4,2,5,7,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr,size);
	return 0;
}
