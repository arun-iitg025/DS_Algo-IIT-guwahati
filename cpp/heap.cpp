// build heap with class

#include<iostream>

using namespace std;

class heap{

public:
	int arr[100];
	int size;

	heap(){
		arr[0] = -1;
		size = 0;
	}

	void insert(int val){

		size = size+1;
		int index = size;
		arr[index] = val;

		while(index > 1){
			int parent = index/2;

			if(arr[parent] < arr[index]){
				swap(arr[parent], arr[index]);

				index = parent;		// ye index ka matlab parent node check hote hi rahega 
			}
			else{
				return;
			}
		}
	}

	void print(){

		for(int i=1; i<=size; i++){
			cout << arr[i] << "\t";
		}
	}

	void deleteFromHeap(){

		// base case
		if(size == 0){
			cout << "\n nothing to delete: " << endl;
			return;
		}
		// step.1 replace kar do first node ko last node ke saath
		arr[1] = arr[size];

		// step.2 last node ko delete kar do
		size--;

		// step.3 root node ko sahi position par pahuncha do
		int i=1;
		while(i < size){
			int leftIndex = 2*i;
			int rightIndex = 2*i+1;

			if(arr[i] < arr[leftIndex]){
				swap(arr[i], arr[leftIndex]);
				i = leftIndex;
			}
			else if(arr[i] > arr[rightIndex]){
				swap(arr[i], arr[rightIndex]);
				i =  rightIndex;
			}
			else{
				return;
			}
		}
	}
};

void heapify(int arr[], int n, int i){
	int largest = i;
	int left = 2*i;
	int right = 2*i+1;

	if(left < n && arr[largest] < arr[left]){
		largest = left;
	}


	else if(right < n && arr[largest] < arr[right]){
		largest = right;
	}


	if(largest != i){
		swap(arr[largest] , arr[i]);
		heapify(arr, n, largest);
	}
}

int main(){

	heap h;
	
	h.insert(50);
	h.insert(55);
	h.insert(53);
	h.insert(52);
	h.insert(54);
	h.print();

	cout << endl << endl <<"\nDelete node: " << endl;
	// node delete karna hai
	h.deleteFromHeap();

	cout << endl << endl;
	// print karna hai
	h.print();

	int arr[6] = {-1, 54, 55, 53, 52, 50};

	int n =5;

	for(int i=n/2; i>0; i--){
		heapify(arr, n, i);
	}

	cout << endl << "\nPrinting the value: " << endl << endl;

	for(int i=1; i<=n;i++){
		cout << arr[i] << "\t";
	}
	return 0;
}