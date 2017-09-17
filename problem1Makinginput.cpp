#include<iostream>

using namespace std;

int N;
int arr[100][100];
void proc() {
	for (int i = N - 2; i >= 0; i--)
		for (int j = 0; j <= N-2-i; j++)
			if(arr[i+1][j]>arr[i+1][j+1])
			 arr[i][j]+= arr[i + 1][j];
			else
				arr[i][j] += arr[i + 1][j+1];
}
	
int main() {
	//freopen("testin.txt", "r", stdin);
	cin >> N;
	int j;
	for (int i = 0; i < N; i++)
		for (j = 0; j <= i; j++)
			cin >> arr[i][j];

	proc();
	cout << arr[0][0];
	return 0;
}