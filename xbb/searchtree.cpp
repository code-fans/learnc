#include <iostream>
#include <string>
using namespace std;

struct search_tree{
    bool isWordEnd;
    search_tree * nextletter[26];
    search_tree();
};

search_tree::search_tree(){
    isWordEnd = false;
    for(int i=0; i<26; i++)
        nextletter[i] = nullptr;
}

void insert(search_tree * root, string word){
    int l=word.size();
    search_tree * b = root;
    for(int i=0; i<l; i++){
        char c = word.at(i); //word[i]
        int p = c>='a' ? c-'a' : c-'A';
        if(b->nextletter[p] == nullptr){
            b->nextletter[p] = new search_tree();
        }
        b=b->nextletter[p];
    }
    b->isWordEnd = true;
}

bool find(search_tree * root, string word){
    int l=word.size();
    search_tree * b = root;
    for(int i=0; i<l; i++){
        char c = word.at(i); //word[i]
        int p = c>='a' ? c-'a' : c-'A';
        if(b->nextletter[p] == nullptr){
            return false;
        }
        b=b->nextletter[p];
    }
    return b->isWordEnd;
}

int main()
{
    search_tree * root = new search_tree();
    string wrd;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>wrd;
        insert(root, wrd);
    }
    cin>>n;
    int tonal=0;
    for (int i = 0; i < n; i++){
        cin>>wrd;
        if(!find(root, wrd)){
            tonal++;
        }
    }
    cout<<tonal<<endl;
    return 0;
}