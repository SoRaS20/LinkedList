#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  struct Node* head = nullptr;
  struct Node* second = nullptr;
  struct Node* third = nullptr;
  struct Node* fourth = NULL;

  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));
  fourth = (struct Node*)malloc(sizeof(struct Node));

  head->data = 1;
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = fourth;

  fourth->data = 5;
  fourth->next=NULL;



  return 0;
}
