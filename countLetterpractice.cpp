#include<iostream>
using namespace std;

int countLetter(char a[], int length, char b);

int main()
{
	
}

int countLetter(char a[], int length, char b)
{
	if(length==1){
		if (a[length-1]==b){
			return 1;
		}
		else
			return 0;
	}
	else{
		int l;
		if(a[length-1]==b){
			l=1;
		}
		else
			l=0;
		return l+countLetter(a, length-1, b);
	}
}