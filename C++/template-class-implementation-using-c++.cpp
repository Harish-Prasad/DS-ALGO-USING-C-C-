#include <iostream> 
using namespace std; 

template <typename T>                     //template class is used to implement all the types of data in the same function based on the value taken 
class Array 
{ 
private: 
	T *ptr; 
	int size; 
public: 
	Array(T arr[], int s); 
	void print(); 
}; 

template <typename T>                      //The effect of this template will be within the block,so each fuction we need to rewrite the template 
Array<T>::Array(T arr[], int s)              //Here <T> is the object of the class *template* with the class name *typename*
{ 
	ptr = new T[s]; 
	size = s; 
	for(int i = 0; i < size; i++) 
		ptr[i] = arr[i]; 
} 

template <typename T> 
void Array<T>::print()
 { 
	for (int i = 0; i < size; i++) 
		cout<<" "<<*(ptr + i); 
	cout<<endl; 
} 

int main() 
{ 
	int arr[5] = {1, 2, 3, 4, 5}; 
	Array<int> a(arr, 5); 
	a.print(); 
	return 0; 
} 

