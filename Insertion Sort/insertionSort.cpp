// Name: Elliott Harris, WSU id: N544Z724

/*
 Program Description:
 Question:
 Write a program that generate 50,000 random integers (range: 1 through 50,000,000), have these random numbers sorted and stored into a file.
 
 Requirement:
 - use dynamic memory for storing these numbers.
 - run insertion sort algorithm to sort this array.
 - store sorted numbers into a file. File name: sorted.txt
 
 Submission:
 - submit two files (program's .cpp file and sorted numbers)
 - submit via blackboard. If you use cslab for program, please read tutorial for how to download files from cslab to host.
 - tutorial link: https://github.com/benroose/tutorials/blob/master/cslab_tutorials/eecs_tutorial_cslab_web_access.pdf
 
 Due:
 - Monday Feb 4 2019, 11:59pm
 */

#include <iostream>
#include <fstream>
using namespace std;

// defined the insertion sort function
void insertionSort(int a[], int size) {
	// loop through the past an array starting at the second element
	for (int i = 1; i < size; i++) {
		// set the current value to the current element at that Index
		int value = a[i];
		// Store the current index
		int index = i;
		// while the current index is greater than zero and the index to the right of it is greater than the current value for the current index
		for (; index > 0 && a[index - 1] > value; index--) {
			// swap the values in the indexes
			a[index] = a[index - 1];
		}
		// swap the values and indexes
		a[index] = value;
	}
}

int main() {
	
#pragma mark - create random numbers
	
	// set the seed to the current sign and create and integer array that can hold 50,000 integers
	srand( static_cast<unsigned int>(time(NULL)));
	int *randomIntegerArray = new int[50000];
	
	// loop through the array and set each index to a random number
	for (int i = 0; i < 50000; i++) {
		int random = (rand() % 50000000) + 1;
		
		// set each element in the array to random number
		randomIntegerArray[i] = random;
	}
	
#pragma mark - sort random numbers
	
	// sort of the array using insertion sort
	insertionSort(randomIntegerArray, 50000);
	
#pragma mark - save random numbers
	
	ofstream fout;
	
	// Open/Create a file called sorted and appendto it
	fout.open("sorted.txt", ios::app);
	
	for (int i = 0; i < 50000; i++) {
		
		// output every integer in the array to the file
		fout << randomIntegerArray[i] << endl;
		
	}
	
	fout.close();
	
	return 0;
}



