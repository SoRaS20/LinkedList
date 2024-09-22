#include <bits/stdc++.h>
using namespace std;


struct Node{
public:
	int data;
	Node* next;

public:
	Node(int data1, Node* next1){
		data = data1;
		next = next1;
	}
public:
	Node(int data1){
		data = data1;
		next = nullptr;
	}
};
Node* convertArr2LL(vector<int> &arr){
	Node* head = new Node(arr[0]);
	Node* mover = head;
	for(int i=1;i<arr.size();i++){
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		mover = mover->next;
	}
	return head;
}

void print(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}
Node* removesHead(Node* head){
	if(head==NULL) return head;
	Node* temp = head;
	head = head->next;
	delete temp;
	return head;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    std::vector<int> arr{2,3,4,5};
    Node* head = convertArr2LL(arr);
    head = removesHead(head);
    print(head);

    return 0;
}


#include <bits/stdc++.h>
using namespace std;


struct Node{
public:
	int data;
	Node* next;

public:
	Node(int data1, Node* next1){
		data = data1;
		next = next1;
	}
public:
	Node(int data1){
		data = data1;
		next = nullptr;
	}
};
Node* convertArr2LL(vector<int> &arr){
	Node* head = new Node(arr[0]);
	Node* mover = head;
	for(int i=1;i<arr.size();i++){
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		mover = mover->next;
	}
	return head;
}

void print(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}
Node* removesTail(Node* head){
	if(head==NULL or head->next==NULL) return NULL;
	Node* temp = head;
	while(temp->next->next != NULL){
		temp = temp->next;
	}
	delete temp->next;
	temp->next = nullptr;
	return head;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    std::vector<int> arr{2,3,4,5};
    Node* head = convertArr2LL(arr);
    head = removesTail(head);
    print(head);

    return 0;
}


//removeKth position 

#include <bits/stdc++.h>
using namespace std;


struct Node{
public:
	int data;
	Node* next;

public:
	Node(int data1, Node* next1){
		data = data1;
		next = next1;
	}
public:
	Node(int data1){
		data = data1;
		next = nullptr;
	}
};
Node* convertArr2LL(vector<int> &arr){
	Node* head = new Node(arr[0]);
	Node* mover = head;
	for(int i=1;i<arr.size();i++){
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		mover = mover->next;
	}
	return head;
}

void print(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}
Node* removeK(Node* head, int k){
	if(head==NULL) return head;
	if(k==1){
		Node* temp = head;
		head = head->next;
		free(temp);
		return head;
	}
	int cnt = 0;
	Node* temp = head;
	Node* prev = NULL;
	while(temp != NULL){
		cnt++;
		if(cnt == k){
			prev->next = prev->next->next;
			free(temp);
			break;
		}
		prev = temp;
		temp = temp->next;
	}
	return head;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    std::vector<int> arr{2,3,4,5};
    Node* head = convertArr2LL(arr);
    head = removeK(head, 2);
    print(head);

    return 0;
}


/////remove a specific element




#include <bits/stdc++.h>
using namespace std;


struct Node{
public:
	int data;
	Node* next;

public:
	Node(int data1, Node* next1){
		data = data1;
		next = next1;
	}
public:
	Node(int data1){
		data = data1;
		next = nullptr;
	}
};
Node* convertArr2LL(vector<int> &arr){
	Node* head = new Node(arr[0]);
	Node* mover = head;
	for(int i=1;i<arr.size();i++){
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		mover = mover->next;
	}
	return head;
}

void print(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}
Node* removeEl(Node* head, int el){
	if(head==NULL) return head;
	if(head->data == el){
		Node* temp = head;
		head = head->next;
		free(temp);
		return head;
	}
	Node* temp = head;
	Node* prev = NULL;
	while(temp != NULL){
		if(temp->data == el){
			prev->next = prev->next->next;
			free(temp);
			break;
		}
		prev = temp;
		temp = temp->next;
	}
	return head;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    std::vector<int> arr{2,3,4,5};
    Node* head = convertArr2LL(arr);
    head = removeEl(head, 4);
    print(head);

    return 0;
}
















#include <bits/stdc++.h>
using namespace std;


struct Node{
public:
	int data;
	Node* next;

public:
	Node(int data1, Node* next1){
		data = data1;
		next = next1;
	}
public:
	Node(int data1){
		data = data1;
		next = nullptr;
	}
};
Node* convertArr2LL(vector<int> &arr){
	Node* head = new Node(arr[0]);
	Node* mover = head;
	for(int i=1;i<arr.size();i++){
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		mover = mover->next;
	}
	return head;
}

void print(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertHead(Node* head, int val){
	Node* temp = new Node(val, head);
	return temp;
}

Node* insertTail(Node* head, int val){
	if(head == NULL){
		return new Node(val);
	}
	Node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	Node* newNode = new Node(val);
	temp->next = newNode;
	return head;
}

Node* insertPosition(Node* head, int el, int k){
	if(head==NULL){
		if(k==1){
			return new Node(el);
		}
		else{
			return head;
		}
	}
	if(k==1){
		return new Node(el, head);
	}
	int cnt = 0;
	Node* temp = head;
	while(temp!=NULL){
		cnt++;
		if(cnt == (k-1)){
			Node* x = new Node(el, temp->next);
			temp->next = x;
			break;
		}
		temp = temp->next;
	}
	return head;
}
Node* insertBeforeValue(Node* head, int el, int val){
	if(head==NULL){
			return NULL;
	}
	if(head->data == val){
		return new Node(el, head);
	}
	Node* temp = head;
	while(temp->next != NULL){
		if(temp->next->data ==val){
			Node* x = new Node(el, temp->next);
			temp->next = x;
			break;
		}
		temp = temp->next;
	}
	return head;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    std::vector<int> arr{2,3,4,5};
    Node* head = convertArr2LL(arr);
    /*head = insertHead(head, 5995);
    print(head);
*/
   	/*head = insertTail(head, 100);
   	print (head);*/

/*   	head = insertPosition(head, 100, 3);
   	print (head);*/

   	head = insertBeforeValue(head, 333, 4);
   	print (head);
    return 0;
}
