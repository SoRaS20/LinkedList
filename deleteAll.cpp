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

//update
void updateFront(node *header, int data);
void updateLast(node *header, int data);
void updateAt(node *header, int data, int index);
void updateValue(node *header , int data, int value);

//delete
void deleteFront(node *header);
void deleteLast(node *header);
void deleteAt(node *header, int index);
void deleteValue(node *header , int value);
//search

int searchValueOfIndex(node *header, int index);
int searchIndexOfValue(node *header, int  data);

//print
void printList(node *header);

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

  updateAt(header, 99999, 4);
  printList(header);
  cout<<endl;
  deleteValue(header, 99999);
  printList(header);
  cout<<endl;
  deleteAt(header, 3);
  printList(header);
  deleteFront(header);
  deleteLast(header);
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

    if(ptr != NULL and ptr->data > data){
        newNode->data = data;
        newNode->link = ptr;
        header->link = newNode;
    }
    else{
        pred = header;
        while(ptr != NULL and ptr->data < data){
            pred = ptr;
            ptr = ptr->link;
        }
        newNode->data = data;
        newNode->link = pred->link;
        pred->link = newNode;

    }
}


void updateFront(node *header, int data){
    node *ptr = header->link;
    ptr->data = data;

}
void updateLast(node *header, int data){
    node *ptr = header;
    while(ptr!=NULL){
        ptr = ptr->link;
    }
    ptr->data = data;

}
void updateAt(node *header, int data, int index){
    node *ptr = header;
    int indexCheck = -1;
    while(indexCheck < index-1 and ptr->link != NULL){
        indexCheck++;
        ptr = ptr->link;
    }
    if(indexCheck+1 != index){
        return ;
    }
    else{
        ptr->link->data = data;
    }

}

//another update
//
//void updateAt(node *header, int data, int index){
//    node *ptr = header;
//    int indexCheck = -1;
//    while(indexCheck < index){
//        indexCheck++;
//        ptr = ptr->link;
//    }
//    if(indexCheck+1 != index){
//        return ;
//    }
//    else{
//        ptr->data = data;
//    }
//
//}


void updateValue(node *header , int data, int value){
    int index = searchIndexOfValue(header, value);
    updateAt(header, data, index);

}

//delete
void deleteFront(node *header){
    if(header->link == NULL){
        return;
    }
    else{
        node *ptr = header -> link;
        header->link = ptr->link;
        free(ptr);
    }
}
//void deleteLast(node *header){
//    if(header->link == NULL){
//        return;
//    }
//    node *ptr = header;
//    node *pred;
//
//    pred = header;
//
//    while(ptr->link != NULL){
//        pred = ptr;
//        ptr = ptr->link;
//    }
//    pred->link = ptr->link;
//
//}

void deleteLast(node *header){
    if(header->link == NULL){
        return;
    }
    node *ptr = header;

    while(ptr->link->link != NULL){
        ptr = ptr->link;
    }
    free(ptr->link);
    ptr->link = NULL;
}
void deleteAt(node *header, int index){
    if(header->link == NULL){
        return;
    }
    node *ptr = header;
    int indexCheck = -1;
    while(indexCheck < index-1 and ptr->link != NULL){
        indexCheck++;
        ptr = ptr->link;
    }
    if(indexCheck+1 != index){
        return ;
    }
    node *temp = ptr->link->link;
    free(ptr->link);
    ptr->link = temp;

}
void deleteValue(node *header , int value){
    int index = searchIndexOfValue(header, value);
    deleteAt(header, index);
}

