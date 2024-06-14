#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool nextPermutation(char list[], int len) {
    //Start from the end of the list
    int i = len - 1;
    //Loop until the list is not in descending order
    while (i > 0 && list[i - 1] >= list[i]) {
        i--;
    }
    // 已经是完全倒序排列了，比如 4321， descending 倒序
    //If the list is in descending order, return false
    if (i == 0) {
        return false;
    }

    //Start from the end of the list
    int j = len - 1; 
    //Loop until the list is not in ascending order
    // ascending 顺序 
    while (list[j] <= list[i - 1]) {
        j--;
    }
    //Swap the elements at index i-1 and j
    swap(list[i - 1], list[j]);
    //Reverse the list from index i to the end
    reverse(list + i, list + len);
    return true;
}

int main(){ 
    int i;
    char str[10];
    cin>>i;
    
    for (int j = 0; j < i; j++){
        str[j]='0'+j+1;
    }
    str[i]=0;

    int ans = 0;
    do{
        cout << str << endl;
        ans++;
    }while(nextPermutation(str, i));
    cout<<ans<<endl;
    return 0;
}