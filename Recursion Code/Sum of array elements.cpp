#include <iostream>
using namespace std;

// sum of all element of array using recursion

int find_sum(int a[],int n){
    //base case
    if(n==0){
        return 0;
    }
    // recursion call
    int subproblem = find_sum(a+1,n-1);
    
    return a[0]+subproblem;
}

int main() {
    int a[] = {10,20,30,40,50};
    int n = sizeof(a)/sizeof(a[0]);
	int ans  = find_sum(a,n);
	cout<<ans;
	return 0;
}
