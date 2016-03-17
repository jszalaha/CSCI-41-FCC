#include <iostream>
#include<time.h>
using namespace std;

int main()
{
	//User input
	int N;
	cout<<"Please enter an integer to determine the amount of numbers to be generated."<<endl;
	cin>>N;

	//Dynamic allocation of array/random number seed
	int *randoBrando=new int[N];
	srand(time(NULL));

	//Put randoms into array
	for(int i=0;i<N;i++){
		randoBrando[i]=rand()%100;
	}

	//Bubble Sort array in acsending order
	int temp=0;
	for(int k=0;k<N;k++){
		for(int j=0;j<N-1;j++){
			if(randoBrando[j]>randoBrando[j+1]){
				temp=randoBrando[j];
				randoBrando[j]=randoBrando[j+1];
				randoBrando[j+1]=temp;
			}
		}
	}

	//Find median
	int median;
	if(N%2==0){
		median=(randoBrando[(N/2)-1]+randoBrando[N/2])/2;
	}
	else
		median=randoBrando[(N/2)-1];

	//Print array
	cout<<endl;
	for(int h=0;h<N;h++){
		if(h%5!=0)
			cout<<randoBrando[h]<<" ";
		else
			cout<<randoBrando[h]<<endl;
	}

	//Print median
	cout<<"\nThe median is: "<<median<<endl;
	system("pause");

	return 0;
}

