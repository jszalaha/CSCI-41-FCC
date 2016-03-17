#include<iostream>
using namespace std;

int recurseSum(int a[], int n);
void recurseStr(char a[], int n);
int recurseLrg(int a[], int first, int last);

int main()
{
	int a[10]={5,5,13,6,28,4,9,31,1,50};
	char b[7]="zalaha";
	cout<<recurseSum(a, 10)<<endl;
	recurseStr(b, 7);
	cout<<recurseLrg(a, 1, 10)<<endl;

	system("pause");
	return 0;
}

int recurseSum(int a[], int n)
{
	int sum=0;
	if(n==1)
		sum=a[0];
	else if(n>1)
		sum=a[n-1]+recurseSum(a, n-1);
	return sum;
}

void recurseStr(char a[], int n)
{
	if(n==0){}
	else{
		cout<<a[n-1];
		recurseStr(a, n-1);
	}
}

int recurseLrg(int a[], int first, int last)
{
	int max=0;
	if(first==last)
		max=a[first];
	else{
		int mid=(first+last)/2;
		int left=recurseLrg(a,first, mid);
		int right=recurseLrg(a, mid+1, last);
		if(left>right)
			max=left;
		else
			max=right;
	}
	return max;
}