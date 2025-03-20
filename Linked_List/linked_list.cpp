#include <bits/stdc++.h>
using namespace std;

//Khoi tao 1 node moi
struct Node {
    int data;
    Node *next;
};

//Dinh nghia lai kieu du lieu
typedef struct Node* node;

//cap phat dong 1 node moi voi du lieu la so nguyen x
node makeNode(int x){
    node temp = new Node(); //temp la 1 con tro va ta muon truy cap toi tung phan tu co trong Node => ta phai dung dau -> de truy cap toi phan tu do
    temp->data = x;
    temp->next = NULL; //Luon luon tro la null doi voi 1 node moi
    return temp;
}


int main() {
    //Size of node
    cout << sizeof(Node) << endl; //
    return 0;
}