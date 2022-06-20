#include <iostream>

using namespace std;


template<class T>
void printArray(const T& pArray, const int n);
template<class T>
void insertSort(T* pArray, const int n);
int main(){
	
	unsigned int count,n;
	count = 0;
	int *vArray = new int[n];
	cout << "Enter size of array: " << endl;
	cin >> n;
	do{
		cout << "Enter the " << count+1 << "th entry of the array: " << endl;
		cin >> vArray[count];
		count++;
	}
	while(count<n);
	cout << "Unsorted array: " << endl;
	printArray(vArray,n);
	cout << "Sorted array: " << endl;
	insertSort(vArray,n);
	printArray(vArray,n);
	return 0;
}
template<class T>
void printArray(const T& pArray, const int n){
	for(unsigned int i = 0; i < n; i++){
		cout << pArray[i] << " ";
	}
	cout << endl;
}
template<class T>
void insertSort(T* pArray, const int n){
	T temp;
	for(unsigned int i = 1; i < n; i++){
		T cur = pArray[i];
		int j = i -1;
		while((j>=0)&&(pArray[j]>cur)){
			pArray[j+1] = pArray[j];
			j--; 
		}
		pArray[j+1] = cur;
	}
}