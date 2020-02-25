#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
//Write your code here.
int a ;
for(int A = 1; A < N ;A++){
	for(int j=0;j<N ;j++){
		a = A ;
		if(j==A){
			cout << "["<<d[j]<<"] " ;
		 }
		 else cout <<d[j] <<" ";
		 
		}
		cout << "=> " ;
		for(int i=A ;i>0; i--){
			if(d[i]>d[i-1]){
				 swap(d,i,i-1) ;
				 a = i-1 ;
			}
		}
	for(int j=0;j<N ;j++){
		if(j==a){
			cout << "["<<d[j]<<"] " ;
		 }
		 else cout <<d[j] <<" ";
		 
		}
		cout << endl ;

	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
