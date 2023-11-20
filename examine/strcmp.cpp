#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
    string word,sentence;
    int len1,len2;
    int i,j;
    int ans=0,direction;

    cin >>word;//输入单词
    getline(cin, sentence);//输入句子
    len1=word.size();//记录单词的长度
    len2=sentence.size();//记录句子的长度
    
    for(i=0; i<len2-len1; i++)
    {
        if(i>0 && sentence[i-1]!=' ')
            continue;

        for(j=0; j<len1; j++)
        {
            if(toupper(sentence[i+j])!=toupper(word[j]))	
                break;
        }
        if(j==len1 && (sentence[i+j]==' '|| j+i==len2))
        {
            ans++;//累加满足条件单词数
            if(ans==1)//若第一次出现
                direction=i;//记录位置
        }
    }

    if(ans>0)	
        cout<<ans<<" "<<direction<<endl;
    else	
        cout<<"-1"<<endl;

    return 0;
}