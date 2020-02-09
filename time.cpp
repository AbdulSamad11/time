#include <iostream> 
#include <chrono> 
using namespace std::chrono; 
using namespace std; 

int main() 
{ 
auto start = high_resolution_clock::now();


auto stop = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop - start);
cout << duration.count() << endl;
	return 0; 
} 

