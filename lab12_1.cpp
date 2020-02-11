#include <iostream>
#include <cmath>


using namespace std;

void stat(const double arr[],int n,double ans[4]);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

void stat(const double arr[],int n,double ans[4]){
   	ans[2]=arr[0];
   	ans[3]=arr[0];
   	for( int i =0; i< n ; i++){
   		ans[0] +=arr[i];
		ans[1] += pow(arr[i],2);
		if(ans[2] < arr[i]) ans[2]=arr[i];
		if(ans[3]> arr[i]) ans[3]=arr[i];    
	   }
    ans[0] /=n;
    ans[1]= sqrt((ans[1]/n)- pow(ans[0],2));
}
