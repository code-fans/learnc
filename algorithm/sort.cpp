#include <iostream>
#include <iomanip>
using namespace std;

// 显示数组
void displayArray(int data[], int len)
{
    for (int i = 0; i < len; i++)
        cout << setw(6) << data[i];
    cout << endl;
}

// 选择排序
void selectSort(int data[], int len)
{
    for (int i = 0; i < len - 1; i++) {
        int min = i;
        for (int j = i + 1; j < len; j++){
            if (data[j] < data[min]){
                min = j;
            }
        }
        if (min != i){
            int temp = data[min];
            data[min] = data[i];
            data[i] = temp;
        }
    }
}

// 冒泡排序
void bubbleSort(int data[], int len)
{
    int i,j,k;
    for(i=0;i<len;i++)
    {
        j=data[i];
        for(k=0;k<len-1;k++)
            {
                if (data[k]<data[k+1])
                    {
                        int temp = data[k];
                        data[k] = data[k+1];
                        data[k+1] = temp;  
                    }
            }
    }
}

int main()
{
    // 重定向标准输入
    freopen("algorithm/srotdata.txt", "r", stdin);
    int len;
    // 输入数组长度
    cin >> len;
    int a[1000];
    // 循环读取数组元素
    for (int i = 0; i < len; i++)
        cin >> a[i];
    // 显示排序前的数据
    displayArray(a, len);
    // 调用排序算法
    bubbleSort(a, len);
    // 显示排序后的结果
    displayArray(a, len);
    return 0;
}
