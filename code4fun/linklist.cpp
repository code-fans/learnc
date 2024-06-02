#include <iostream>

using namespace std;

struct ListNode {
    int data;
    ListNode * next;
    ListNode * prev;
};
/*

9
1 5 6 7 3 4 7 8 7
*/

int main(){
    ListNode * header= new ListNode;
    header->next = nullptr;
    header->prev = nullptr;
    ListNode * current=header;
    cin >> header->data;
    int n;
    cin >> n;
    for(int i=1; i<n; i++){
        ListNode * d = new ListNode;
        cin >> (*d).data;
        d->next = nullptr;
        d->prev = current;
        current->next = d;
        current = d;
    }
    // 7 
    for(current = header; current != nullptr; current = current->next){
        if(current->data==7){
            if(current->next!=nullptr){
                current->next->prev=current->prev;
                current->prev->next=current->next;
            }
            else{
                current->prev->next=nullptr;
            }
        }
    }
    for(current = header; current != nullptr; current = current->next){
        cout << current->data << ' ';
    }
    cout << endl;
    return 0;
}