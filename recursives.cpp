#include<iostream>
using namespace std;

int recurse(int n);

int main()
{
	
}

//print out the sum of first n integers in array
int recurse(int a[], int n)
{
	int sum=0;
	if(n==1)
		sum=a[0];
	else if(n>1)
		sum=a[n-1]+recurse(a, n-1);
	return sum;
}

//print out char array in reverse order
void recursestr(char a[], int n)//n is # of chars
{
	if(n==0){}
	else{
		cout<<a[n-1];
		recursestr(a, n-1);
	}
}	

//print out largest number in an array
int recurselrg(int a[], int first, int last)
{
	int max=0;
	if(first==last)
		max=a[first];
	else{
		int mid=(first+last)/2;
		int left=recurselrg(a,first, mid);
		int right=recurselrg(a, mid+1, last);
		if(left>right)
			max=left;
		else
			max=right;
	}
	return max;
}