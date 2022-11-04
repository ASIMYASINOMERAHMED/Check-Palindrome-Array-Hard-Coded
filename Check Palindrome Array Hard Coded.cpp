

#include <iostream>
using namespace std;



void FillArray(int Arr[100], int& Length)
{

	Length = 10;
	Arr[0] = 77;
	Arr[1] = 77;
	Arr[2] = 77;
	Arr[3] = 55;
	Arr[4] = 55;
	Arr[5] = 55;
	Arr[6] = 55;
	Arr[7] = 77;
	Arr[8] = 77;
	Arr[9] = 77;
}
void PrintArrayData(int Arr[100], int Length)
{
	for (int i = 0;i < Length;i++)
	{
		cout << Arr[i] << " ";
	}
}
bool IsPalindromeArray(int Arr[100],int Length)
{
	
	for (int i = 0; i < Length; i++)
	{
		if (Arr[i] != Arr[Length-i-1])
			return false;
	}return true;
}
int main()
{
	srand((unsigned)time(NULL));
	int Arr[100], Length = 0;

	FillArray(Arr, Length);
	PrintArrayData(Arr, Length);
	cout << endl;
	if (IsPalindromeArray(Arr,Length))
		cout << "Yes, Array is Palindrome\n";
	else
		cout << "No, Array is not Palindrome\n";




	

}

