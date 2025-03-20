#include <bits/stdc++.h>
using namespace std;

//Khoi tao 1 node moi
struct Node {
    int data;
    Node *next;
};

//Dinh nghia lai kieu du lieu
typedef struct Node* node;

//Tao 1 node moi voi du lieu la so nguyen x
node makeNode(int x){
    node temp = new Node(); //temp la 1 con tro va ta muon truy cap toi tung phan tu co trong Node => ta phai dung dau -> de truy cap toi phan tu do
    temp->data = x; //Gan du lieu data cua temp = x
    temp->next = NULL; //Gan dia chi cua node tiep theo = NULL
    return temp;
}

//Kiem tra xem node co rong khong
bool empty(node a) {
    return a == NULL;
}

//Dem xem trong linkled list co bao nhieu node: cho head chay qua tat ca cac node va dem
int Size(node a){
    int cnt = 0;
    while (a != NULL){ //next cua node cuoi cung luon la NULL
        cnt++;
        a = a->next; //Gan dia chi cua node dang sau cho node hien tai. (a->next la dia chi cua node dung sau node a)
    }
    return cnt;
}

int main() {
    
    node head = NULL; //Node dau tien trong linked list la null



    return 0;
}