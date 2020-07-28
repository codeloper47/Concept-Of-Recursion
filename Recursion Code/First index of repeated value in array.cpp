#include <iostream>
using namespace std;

// first index of repeated  element in array using recursion if no elemnt found output 1.

int find_first_index(int a[],int n,int num){
    //base case
    if(n==0){
        return -1;
    }
    if(a[0]==num){
        return 0;
    }
    //recursive call 
    int ans = find_first_index(a+1,n-1,num);
    
    if(ans!=-1){
        return ans+1;
    }else{
        return -1;
    }
    
}

int main() {
    int a[] = {6,4,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
	int ans  = find_first_index(a,n,4);
	cout<<ans;
	return 0;
}
