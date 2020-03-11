#include<iostream>
using namespace std;
int arr[11];
int sift_right(int l, int r)           /*Function to shift right*/
{
	for(int k = r; k >= l; k--)
		{
			arr[k+1] = arr[k];
		}
}
int sift_left(int l, int r)                         /*Function to shift left an Array*/
{
	for(int k = l; k <= r; k++)
		{
			arr[k] = arr[k+1];
		}
}
int main()
{
	//n
	int left, right;                         /*to store the operands (left & right)*/
	cout << "Original Data: " << endl;
	for(int i = 0; i < 10/*n-1*/; i++)
	{
		cin >> arr[i];
	}
	for(int i = 0; i < 10; i++)
	{
		if(arr[i] == 1 && arr[i+1] == 1 && arr[i+2] == 1 && arr[i+3] == 1 && arr[i+4] == 1)
		{
			left = i+5;
			right = 9;
			sift_right(i+5, 9);
			arr[left] = 0;
		}
	}
	cout << "At Sender: " << endl;
	for(int i = 0; i <= 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\nAt Receiver: " << endl;
	sift_left(left, right);
	for(int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
}
