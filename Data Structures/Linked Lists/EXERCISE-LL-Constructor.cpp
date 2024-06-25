#include <iostream>

using namespace std;


	// CREATE NODE CLASS HERE //
	//                        //
	//                        //
	//                        //
	//                        //
	////////////////////////////

    class Node{
        public:
        int value;
        Node* next=nullptr;
        Node(int value){
            this->value=value;
            next=nullptr;
        }
    };


class LinkedList {
    private:
		Node* head;
        Node* tail;
        int length=0;
    public:
		// CREATE LL CONSTRUCTOR HERE //
		//                            //
		//                            //
		//                            //
		//                            //
		////////////////////////////////
        LinkedList(int value){
            Node* newNode=new Node(value);
            head=newNode;
            tail=newNode;
            length=1;

        }

        ~LinkedList() {
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
            }
        }

        void printList() {
            Node* temp = head;
            while (temp != nullptr) {
                cout << temp->value << endl;
                temp = temp->next;
            }
        }

        void getHead() {
            if (head == nullptr) {
                cout << "Head: nullptr" << endl;
            } else {
                cout << "Head: " << head->value << endl;
            }
        }

        void getTail() {
            if (tail == nullptr) {
                cout << "Tail: nullptr" << endl;
            } else { 
                cout << "Tail: " << tail->value << endl;
            }  
        }

        void getLength() {
            cout << "Length: " << length << endl;
        }
        void append(int value){
            Node* newNode=new Node(value);
            Node* temp=tail;
            temp->next=newNode;
            tail=newNode;
            length+=1;
        }
        void deleteLast(){
            Node* temp=head;
            Node* prev=temp;
            if(head==tail){
                head=nullptr;
                tail=nullptr;
                delete prev;
                delete temp;
            }else{
            for (; temp!=tail; temp=temp->next)
            {
                prev=temp;
            }
            prev->next=nullptr;
            tail=prev;
            delete temp;
            }

        }
};



int main() {
        
    LinkedList* myLinkedList = new LinkedList(4);
    // myLinkedList->append(10);
    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();
    myLinkedList->deleteLast();
    
    cout << "\nLinked List:\n";
    myLinkedList->printList();

    /*  
        EXPECTED OUTPUT:
    	----------------
        Head: 4
        Tail: 4
        Length: 1

        Linked List:
        4

    */
       
}

