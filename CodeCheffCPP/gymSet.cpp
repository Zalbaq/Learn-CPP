#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int limit;
	int setTotal;
	
	cin >> limit;
	while (limit != 0){
	    cin >> setTotal;
	    cout << setTotal * 15 << endl;
	    limit--;
	}
	return 0;
}
