#include <iostream>
#include <queue>

#define cout std::cout 
#define endl std::endl

std::queue <int> myQu;  // An integer Queue named myQu 

int main() {
	
	for (int i = 0; i < 10; i++)
		myQu.push(i);

	cout << "The size of my Queue is: " << myQu.size() << endl; 
	cout << "The first Queue elt is: " << myQu.front() << endl; 
	cout << "The last Queue elt is: " << myQu.back() << endl; 

	for (int i = 0; i < 10; i++) {
		cout << myQu.front() << endl;
		myQu.pop(); 
	}
	
	cout << "After all the Pops, the Queue's size is: " << myQu.size() << endl; 

	if (myQu.empty())
		cout << "Queue is Empty" << endl; 

	return 0; 
}