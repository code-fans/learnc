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

//交换数组元素
void swapData(int data[], int pos1, int pos2)
{
    if (pos1 != pos2){
        int temp = data[pos1];
        data[pos1] = data[pos2];
        data[pos2] = temp;
    }
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
        swapData(data, min, i);
    }
}

// 冒泡排序
void bubbleSort(int data[], int len)
{
    for(int i=0; i<len-1; i++) {
        //定义一个检查变量
        bool hasSorted = true;
        //减少没有必要的循环
        for(int k=0; k<len-1-i; k++) { 
            if (data[k] < data[k+1]) {
                swapData(data, k, k+1);
                hasSorted = false;
            }
        }
        // 如果已经排序好了，直接跳出最外层循环
        if(hasSorted)
            break;
    }
}

// 插入排序
void insertSort(int data[], int len){

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
