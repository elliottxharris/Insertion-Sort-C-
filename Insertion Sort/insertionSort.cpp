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
#include <ctime>
using namespace std;

int main() {
	
#pragma mark - create random numbers
	
	// set the seed to the current sign and create and integer array that can hold 50,000 integers
	srand( static_cast<unsigned int>(time(NULL)));
	int randomIntegerArray[50000];
	
	// loop through the array and set each index to a random number
	for (int i = 0; i < 50000; i++) {
		int random = (rand() % 50000000) + 1;
		
		randomIntegerArray[i] = random;
	}
	
#pragma mark - sort random number
	
#pragma mark - save random numbers
	
	return 0;
}
