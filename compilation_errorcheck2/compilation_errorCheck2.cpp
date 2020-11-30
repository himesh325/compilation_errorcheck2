#include<iostream>

using namespace std;

int main()
{

	int row;
	int col;

	int A[10][10];
	int TA[10][10];

	cin >> row >> col;

	for (int i = 0; i < row; i++)
	{
		

		for (int j = 0; j < col; j++)
		{

			cin >> A[i][j];
		}
	}

	cout << "\n";

	for (int i = 0; i < row; i++)
	{

		for (int j = 0; j < col; j++)
		{
			TA[j][i] = A[i][j];


		}
	}



	for (int i = 0; i < col; i++)
	{


		for (int j = 0; j < row; j++)
		{

			cout<< TA[i][j];
			cout <<" ";
		}

		cout << "\n";
	}


	return 0;
}
