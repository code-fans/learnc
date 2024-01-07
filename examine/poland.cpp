#include <iostream>
#include <string>
using namespace std;

struct item{
    int dataType;
    double db;
};

item strToItem(string str){
    item it;
    it.dataType= 0;
    if(str=="+")
        it.dataType= 1;
    if(str=="-")
        it.dataType= 2;
    if(str=="*")
        it.dataType= 3;
    if(str=="/")
        it.dataType= 4;

    if(it.dataType==0)
        it.db = stod(str);
    return it;
}

int main(){

    item its [1000];
    int len = 0;
    string str;
    do{
        cin>>str;
        its[len] =  strToItem(str);
        len++;
        while(len>2 && its[len-1].dataType == 0 && its[len-2].dataType==0){
            if(its[len-3].dataType == 1 ){
                its [len-3].db=its[len-2].db+its[len-1].db;
            }
            if(its[len-3].dataType == 2 ){
                its [len-3].db=its[len-2].db-its[len-1].db;
            }
            if(its[len-3].dataType == 3 ){
                its [len-3].db=its[len-1].db*its[len-2].db;
            }
            if(its[len-3].dataType == 4 ){
                its [len-3].db=its[len-2].db/its[len-1].db;
            }
            its[len-3].dataType=0;
            len-=2;
        }

    } while(its[0].dataType != 0); 

    printf("%f\n", its[0].db);
    return 0;
}