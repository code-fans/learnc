#include <iostream>
#include <iomanip>
using namespace std;

// 显示数组
template<typename T> void displayArray(T data[], int len)
{
    for (int i = 0; i < len; i++)
        cout << setw(6) << data[i];
    cout << endl;
}

//交换数组元素
template<typename T> void swapData(T data[], int pos1, int pos2)
{
    if (pos1 != pos2){
        T temp = data[pos1];
        data[pos1] = data[pos2];
        data[pos2] = temp;
    }
}

// 选择排序
template<typename T>  void selectSort(T data[], int len, bool ascending)
{
    int min, m;
    for(int i=0; i<len-1; i++){
        min=i;
        for(int s=i+1; s<len; s++){
            if (data[min] > data[s] == ascending)
                min=s;
        }
        swapData(data, min, i);
    }
}

// 冒泡排序
template<typename T> void bubbleSort(T data[], int len, bool ascending)
{
    for(int i=0; i<len-1; i++) {
        //定义一个检查变量
        bool hasSorted = true;
        //减少没有必要的循环
        for(int k=0; k<len-1-i; k++) { 
            if (data[k] > data[k+1] == ascending) {
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
template<typename T> void insertSort(T data[], int len ,bool ascending){
    int j;
    T b;
    for (int i=1; i<len; i++){
        j = i;
        b = data[j];
        while (j>0 && b < data[j-1] == ascending) {
            data[j] = data[j-1];
            j--;
        }
        data[j] = b;
    }
}

int main()
{
    // 重定向标准输入
    freopen("data/srotdata.txt", "r", stdin);
    int len, asc;
    // 输入数组长度
    cin >> len >> asc;
    int a[1000];
    // 循环读取数组元素
    for (int i = 0; i < len; i++)
        cin >> a[i];
    // 显示排序前的数据
    displayArray(a, len);
    // 调用排序算法
    //insertSort(a, len, asc==1);
    //std::sort(a, a+len, [&](int & a, int & b){return a < b;});
    std::sort(a, a+len, greater<int>()); // less
    // 显示排序后的结果
    displayArray(a, len);
}