#include <iostream>
#include <algorithm>

using namespace std;
struct s
{
    int parent;
    int node;
    int sum;
    int haizi[110];
};

s y[210];
int main()
{
    int n,c,a,b;
    cin>>n>>c;
    int cnt = 0;
    for (int i = 0; i < c; i++){
        cin>>a;
        cin>>b;
        bool fd = false;
        for(int j=0; j<cnt; j++){
            if(y[j].node == a){
                fd = true;
                y[j].haizi[y[j].sum] = b;
                y[j].sum ++;
                break;
            }
        }
        if(!fd){
            y[cnt].parent=-1;
            y[cnt].node = a;
            y[cnt].sum = 1;
            y[cnt].haizi[0]=b;
            cnt++;
        }

        fd = false;
        for(int j=0; j<cnt; j++){
            if(y[j].node == b){
                fd = true;
                int pp = y[j].parent;
                if(pp != -1){
                    for(int k=0; k<cnt; k++){
                        if(y[k].node == pp){
                            for(int ii=0; ii< y[k].sum; ii++){
                                if(y[k].haizi[ii]== b){
                                    y[k].haizi[ii] = y[k].haizi[y[k].sum-1];
                                    break;
                                }
                            }
                            y[k].sum --;
                            break;
                        }
                    }
                }
                y[j].parent=a;
                break;
            }
        }
        if(!fd){
            y[cnt].node = b;
            y[cnt].sum = 0;
            y[cnt].parent=a;
            cnt++;
        }
    }
    int ans=0,gen=-1, max= -1;
    for (int i = 0; i < cnt; i++){
        if(gen == -1 && y[i].parent == -1){
            gen=y[i].node;
        }
        if(max<y[i].sum){
            ans=i;
            max=y[i].sum;
        }
    }
    cout<<gen<<endl<<y[ans].node<<endl;

    sort(y[ans].haizi, y[ans].haizi + y[ans].sum);

    for(int i=0; i < y[ans].sum; i++)
        cout<<y[ans].haizi[i]<<" ";
    cout<<endl;

    return 0;
}