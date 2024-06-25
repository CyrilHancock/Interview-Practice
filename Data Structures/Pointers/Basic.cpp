#include <bits/stdc++.h>

using namespace std;

int main() {
    int a=21;
    int b=a;
    cout<<"a = "<<a;
    cout<<endl;
    cout<<"b = "<<b;
    cout<<endl;
    cout<<"A will be equal to B But if we change the b value "<<a<<" "<<b;
    cout<<endl;
    b=12;
    cout<<"Then b will change and a will remain the same "<<a<<" "<<b;
    // But if we use a pointer then the varaible will point to the same varibale and will change automatically if the other is touched
    int* x=new int(12);
    int* y=x;//this works because a class is assign to it and x allways points to memory aadress

    int a = 10;
    int* x = &a; // x now points to the address of variable a

    // Alternatively, dynamically allocate memory
    int* y = new int; // y points to a dynamically allocated integer
    *y = 20; // assign a value to the memory location pointed to by y

    delete y; // free the dynamically allocated memory
    int* cyril = new int;
    
    // Print the value stored at the memory location pointed by cyril
    cout << "cyril = " << *cyril << endl;
    
    // Print the memory address stored in cyril
    cout << "cyril = " << cyril << endl;
    
    // Don't forget to free the allocated memory
    delete cyril;
    return 0;



    return 0;
}