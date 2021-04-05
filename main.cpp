#include <iostream>
#include <time.h>
#include <chrono>

#include "RBT.h"
#include "AVLT.h"

using namespace std;
using namespace std::chrono;

int main() {
	BST<long long>* tree = new RBT<long long>;
	cout << "Red-Black Tree Stats:\n";
	auto start_time = high_resolution_clock::now();
	for (int i = 0; i < 1000000; i++) {
		tree->insert(i);
	}
	auto end_time = high_resolution_clock::now();
	auto time = end_time - start_time;
	cout << "Insertion of 1M elements takes " << (duration_cast<microseconds>(time).count() / 1000.0) << " ms\n";

	start_time = high_resolution_clock::now();
	for (int i = 0; i < 1000000; i++) {
		tree->erase(i);
	}
	end_time = high_resolution_clock::now();
	time = end_time - start_time;
	cout << "Deletion of 1M elements takes " << (duration_cast<microseconds>(time).count() / 1000.0) << " ms\n";


	for (int i = 0; i < 1000000; i++) {
		tree->insert(i);
	}
	start_time = high_resolution_clock::now();
	for (int i = 0; i < 1000000; i++) {
		tree->contains(-1);
	}
	end_time = high_resolution_clock::now();
	time = end_time - start_time;
	cout << "Search of 1M non-existing elements takes " << (duration_cast<microseconds>(time).count() / 1000.0) << " ms\n";

	start_time = high_resolution_clock::now();
	for (int i = 0; i < 1; i++) {
		tree->sum();
	}
	end_time = high_resolution_clock::now();
	time = end_time - start_time;
	cout << "Summing up 1M elements takes " << (duration_cast<microseconds>(time).count() / 1000.0) << " ms\n\n\n";
	

	AVLT<long long>* tree1 = new AVLT<long long>;
	cout << "AVL Tree Stats:\n";
	start_time = high_resolution_clock::now();
	for (int i = 0; i < 1000000; i++) {
		tree1->insert(i);
	}
	end_time = high_resolution_clock::now();
	time = end_time - start_time;
	cout << "Insertion of 1M elements takes " << (duration_cast<microseconds>(time).count() / 1000.0) << " ms\n";

	start_time = high_resolution_clock::now();
	for (int i = 0; i < 1000000; i++) {
		tree1->erase(i);
	}
	end_time = high_resolution_clock::now();
	time = end_time - start_time;
	cout << "Deletion of 1M elements takes " << (duration_cast<microseconds>(time).count() / 1000.0) << " ms\n";

	for (int i = 0; i < 1000000; i++) {
		tree1->insert(i);
	}
	start_time = high_resolution_clock::now();
	for (int i = 0; i < 1000000; i++) {
		tree1->contains(-1);
	}
	end_time = high_resolution_clock::now();
	time = end_time - start_time;
	cout << "Search of 1M non-existing elements takes " << (duration_cast<microseconds>(time).count() / 1000.0) << " ms\n";

	start_time = high_resolution_clock::now();
	for (int i = 0; i < 1; i++) {
		tree1->sum();
	}
	end_time = high_resolution_clock::now();
	time = end_time - start_time;
	cout << "Summing up 1M elements takes " << (duration_cast<microseconds>(time).count() / 1000.0) << " ms\n";
	

}