#include <iostream>
#include <algorithm>

using namespace std;

int main2()
{
    int make,boli,mani,nike;
    bool tj[4];
    for(make=1;make<=4;make++)
        for(boli=1;boli<=4;boli++)
            for(mani=1;mani<=4;mani++)    
            {
                nike=10-make-boli-mani;
                if (make* boli * mani * nike == 1*2*3*4)
                {
                    tj[0]=((make==1)+(boli==4)+(mani==3)+(nike==2)==2);
                    tj[1]=((boli==1)+(make==4)+(mani==2)+(nike==3)==2);
                    tj[2]=((boli==4)+(make==3)==1);
                    tj[3]=((make==1)+(nike==4)+(boli==3)+(mani==2)==2);

                    if (tj[0] && tj[1] && tj[2] && tj[3])
                    {
                        cout<<"马克"<< make<<endl;
                        cout<<"波力"<< boli<<endl;
                        cout<<"马尼"<< mani<<endl;
                        cout<<"尼克"<< nike<<endl;
                        break;
                    }
                }
            }   
    cout<<"done!"<<endl;              
    return 0;                                                                    
}

int main(){
    //int n=0;
    int arr[] = {1,2,3,4};
    bool tj[4];
    //cout<< "用next_permutation对数组进行排列"<<endl;
    do{
        //cout << arr[0]<< " "<< arr[1]<< " "<< arr[2]<< " "<< arr[3]<< endl;
        //n++;
        tj[0]=((arr[0]==1)+(arr[1]==4)+(arr[2]==3)+(arr[3]==2)==2);
        tj[1]=((arr[1]==1)+(arr[0]==4)+(arr[2]==2)+(arr[3]==3)==2);
        tj[2]=((arr[1]==4)+(arr[0]==3)==1);
        tj[3]=((arr[0]==1)+(arr[3]==4)+(arr[1]==3)+(arr[2]==2)==2);

        if (tj[0] && tj[1] && tj[2] && tj[3])
        {
            cout<<"马克"<< arr[0]<<endl;
            cout<<"波力"<< arr[1]<<endl;
            cout<<"马尼"<< arr[2]<<endl;
            cout<<"尼克"<< arr[3]<<endl;
            break;
        }
    } while (next_permutation(arr, arr+4));

    //cout<< "一共有"<<n<<"中排列"<<endl;
    return 0;
}