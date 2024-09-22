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
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    std::vector<int> v{2,3,4,5};
    Node* y =new Node(v[3], nullptr);
    cout<<y->data<<endl;

    return 0;
}


//arrToLinked list

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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    std::vector<int> arr{2,3,4,5};
    Node* head = convertArr2LL(arr);
    cout<<head->data;
    

    return 0;
}

//traverse a linked list

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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    std::vector<int> arr{2,3,4,5};
    Node* head = convertArr2LL(arr);
    Node* temp = head;
    while(temp){
    	cout<<temp->data<<" ";
    	temp = temp->next;
    }
    

    return 0;
}



// Length of a LL 
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

int lengthOfll(Node* head){
	int cnt = 0;
	Node* temp = head;
	while(temp){
		temp=temp->next;
		cnt++;
	}
	return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    std::vector<int> arr{2,3,4,5,5,6,7};
    Node* head = convertArr2LL(arr);
    cout<<lengthOfll(head)<<endl;
    

    return 0;
}


//check an element is present / searching 

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

int checkIfPresent(Node* head, int val){
	Node* temp = head;
	while(temp){
		if(temp->data == val){
			return 1;
		}
		temp = temp->next;
	}
	return 0;
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
    cout<<checkIfPresent(head, 5)<<endl;
    

    return 0;
}
