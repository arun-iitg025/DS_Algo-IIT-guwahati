#include<iostream>
#include<queue>


using namespace std;

void heapify(int arr[], int n, int i){
	int largest = i;
	int left = 2*i;
	int right = 2*i+1;

	if(left <= n && arr[largest] < arr[left]){
		largest = left;
	}


	if(right <= n && arr[largest] < arr[right]){
		largest = right;
	}


	if(largest != i){
		swap(arr[largest] , arr[i]);
		heapify(arr, n, largest);
	}
}

void heapSort(int arr[], int n){
	int size = n;

	while(size >1){
		// step.1 swap
		swap(arr[size], arr[1]);
		size--;

		// step.2 
		heapify(arr, size,1);
	}
}
int main(){

	

	int arr[6] = {-1, 54, 55, 53, 52, 50};

	int n =5;

	for(int i=n/2; i>0; i--){
		heapify(arr, n, i);
	}

	cout << endl << "\nPrinting the value: " << endl << endl;

	for(int i=1; i<=n;i++){
		cout << arr[i] << "\t";
	}

	// heap sort
	heapSort(arr, n);

	cout << endl << endl <<"\nHeap Sorted Array: " << endl << endl;
	for(int i=1; i<=n; i++){
		cout << arr[i] << "\t";
	}

	// max heap
	priority_queue<int> pq;

	pq.push(4);
	pq.push(2);
	pq.push(5);
	pq.push(3);

	cout  << endl << "\nElement at top: "<< pq.top() << endl;

	pq.pop();

	cout << "\nElement at top: "<< pq.top() << endl;

	cout << "\nSize is : "<< pq.size() << endl;

	// min heap

	priority_queue<int , vector<int>, greater<int> > minheap;

	minheap.push(4);
	minheap.push(2);
	minheap.push(5);
	minheap.push(3);

	cout  << endl << "\nElement at top: "<< minheap.top() << endl;

	minheap.pop();

	cout << "\nElement at top: "<< minheap.top() << endl;

	cout << "\nSize is : "<< minheap.size() << endl;

	return 0;
}