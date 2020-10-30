#include <iostream>
#include "solution.h"
using namespace std;

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;
	}

	return 0;
}

int FindUnique(int * arr, int size){
   
int i,j;
  int temp=arr[0];
for(i=0; i<size; i++)
{
  for(i=1; i<size; i++)

  {
    temp=temp^arr[i];
  }
  return temp;
}
}



