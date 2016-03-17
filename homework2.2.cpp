#include<iostream>
using namespace std;

void ascending(int n);
int sum(int n);
void reverse(int n);
int sumSE(int start, int end);

int main()
{
	ascending(10);
	cout<<endl;
	cout<<sum(10);
	cout<<endl;
	reverse(3.1415);
	cout<<endl;
	cout<<sumSE(2, 15);
	system("pause");
	return 0;
}

void ascending(int n)
{
	if(n==0)
          return;
 
     ascending(n-1);
     cout<<n<<"  ";
}	

int sum(int n)
{
	int sum2=0;
	if(n==0)
		return sum2;
	else
		sum2=n+sum(n-1);
}

void reverse(int n)
{  cout << n % 10;
   if (n < 10) { 
	   cout << endl; 
	   return; 
   }
   reverse(n / 10);
}

int sumSE(int start, int end)
{
	int sum=0;
	if(start==end)
		return start;
	else{
		sum=start+sumSE(start+1, end);
	}
	return sum;
}

