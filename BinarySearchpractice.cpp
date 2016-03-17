#include<iostream>
using namespace std;

//sort array into ascending order
//compare the middle element with the item searched
//if it is greater, then search lower portion
//less, search upper

int binarySearch(int a[], int item, int low, int high);
//low is index of first item in the array
//high is index of last item in the array

int main()
{

}

int binarySearch(int a[], int item, int low, int high)
{
	if(low==high){
		if(a[low]==item)
			return low;
		else
			return -1;
	}

	else{
		int mid=(low + high)/2;
		if(a[mid]==item){
			return mid;
		}
		else{
			if(a[mid]>item){
				return binarySearch(a, item, low, mid-1);
			}
			else
				return binarySearch(a, item, mid+1, high);
		}
}