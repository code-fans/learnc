#include<iostream>
#include<cmath>
using namespace std;

int matrix[2][1001];
int main()
{
    int row, temp;
    cin >> row;
    int * curRow, * preRow;
    cin >> matrix[0][0];
    for(int i=1; i<row; i++){
        curRow = matrix[i%2];
        preRow = matrix[(i+1)%2];
        for(int j=0; j<=i; j++){
            cin >> temp;
            if(j==0)
                curRow[j] = temp + preRow[j];
            else
                curRow[j] = temp + max(preRow[j], preRow[j-1]);
        }
    }
    int maxNum = curRow[0];
    for(int i=1; i<row; i++){
        if(maxNum < curRow[i])
            maxNum = curRow[i];
    }
    cout << maxNum << endl;
    return 0;
}