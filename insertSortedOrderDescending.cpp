#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *link;
};

//insert
void insertFront(node *header, int data);
void insertLast(node *header, int data);
void insertAt(node *header, int data, int index);
void insertBeforeValue(node *header , int data, int value);
void insertSortedOrder(node *header, int data);
int searchValueOfIndex(node *header, int index);
int searchIndexOfValue(node *header, int  data);

void printList(node *header){
    node *ptr =header->link;

    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->link;
     }
     cout<<endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  node *header;

  header = (node *)malloc(sizeof(node));

  if(header == NULL){
  	cout<<"Memory not available"<<endl;
  	return 0;
  }

  header->data = INT_MAX;
  header->link = NULL;

  int n;
  cin>>n;

  for(int i=0;i<n;i++){
  	int number = rand()%1000;
  	cout<<number<<" ";
  	insertSortedOrder(header, number);
  }

  cout<<endl;

  printList(header);



  return 0;
}

void insertFront(node *header, int data){
	node *newNode = (node *)malloc(sizeof(node));
	if(newNode == NULL){
		cout<<"Memory not available"<<endl;
	}
	else{
		newNode->data = data;
		newNode->link = header->link;
		header->link = newNode;
	}
}

void insertLast(node *header, int data){
	node *ptr = header;

	while(ptr->link != NULL){
		ptr = ptr->link;
	}

	node *newNode = (node *)malloc(sizeof(node));

	if(newNode==NULL){
		cout<<"Memory not available";
	}
	else{
		newNode->data = data;
		newNode->link = ptr->link;
		ptr->link = newNode;
	}

}

void insertAt(node *header , int data, int index){
	node *ptr = header ;
	int indexCheck = -1;

	while(indexCheck < index-1 and ptr->link!=NULL){
		indexCheck++;
		ptr = ptr->link;
	}

	if(indexCheck+1 != index){
		cout<<"out of bound"<<endl;
	}
	else{
		node *newNode = (node *)malloc(sizeof(node));
		if(newNode==NULL){
			cout<<"Memory not available"<<endl;
		}
		else{
			newNode->data = data;
			newNode->link = ptr->link;
			ptr->link = newNode;
		}
	}
}

int searchIndexOfValue(node *header, int data){
	node *ptr = header->link;
	int index = 0;
	while(ptr->data != data and ptr != NULL){
		index++;
		ptr = ptr->link;
	}

	if(ptr -> data == data){
		return index;
	}
	else
		return -1;
}

int searchValueOfIndex(node *header, int index){
	node *ptr = header->link;
	int i = 0;
	while(i!=index){
		if(ptr == NULL){
			cout<<"array out of bound"<<endl;
		}
		else{
			ptr = ptr->link;
			i++;
		}
	}

	return ptr->data;
}

void insertBeforeValue(node *header , int data, int value){
	int index = searchIndexOfValue(header, value);
	insertAt(header, data, index);
}

void insertSortedOrder(node *header , int data){

    node  *ptr = header->link;
    node *pred;
    node *newNode = (node *)malloc(sizeof(node));

    if(ptr != NULL and ptr->data < data){
        newNode->data = data;
        newNode->link = ptr;
        header->link = newNode;
    }
    else{
        pred = header;
        while(ptr != NULL and ptr->data > data){
            pred = ptr;
            ptr = ptr->link;
        }
        newNode->data = data;
        newNode->link = pred->link;
        pred->link = newNode;

    }
}

