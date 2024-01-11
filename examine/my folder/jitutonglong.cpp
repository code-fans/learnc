#include <iostream>
using namespace std;
int main(){
    long long feet, heads;
    while(true){
        cout << "请分别输入鸡和兔的头的数量与腿的数量, 输入 0 0 退出："<<endl;
        cin>>feet>>heads;
        if(heads==0 &&  feet==0)
            break;
        if(heads*2>feet || heads*4<feet || feet %2==1){
            cout<<"输入错误，无解！"<<endl;
            continue;
        }
        long long a=(feet-heads *2 )/2;
        cout<<"兔子的数量："<<a<<' '<<"鸡的数量："<<heads-a<<endl;
    }
    return 0;
}