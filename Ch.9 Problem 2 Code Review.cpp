/**
 * TODO: Standard Header
 * Name:Fausto Meza
 * Date:21 November 2019
 * Program summary
 **/
//This will assign a  full of test scores
//It will sort the scores in ascending order
/**
 * TODO: Includes
 * Include any additional libraries
 **/
#include <iostream>
#include <cassert>
#include <string>
#include <vector>
using namespace std;

/**
 * Data Definitions 
 * TODO: Write definitions for any data here
 * EG:
 * SortList(vector<double>Userscores);
 *double AverageScore(double UserScores);
 * }
 **/

/**
 * Function Declarations
 * TODO: Inert your function declarations, purpose statements, I/O comments here.
 //It will sort the scores in ascending order 
//Input
//Userscores - the scores from the list
//Output
//Sorted list of scores
SortList(vector<double>Userscores);
//This will get the average of the scores
//from the list
//Input 
//Userscores - the vector of scores
//Output
//The average score of the list of scores
double AverageScore(double UserScores);
 **/


/**
 * Declarations for given functions. Don't touch.
 **/
void test();
void run();


/**
 * Main Function
 * Don't touch this! use `run()` instead
 **/
int main() {
  cout << "Give number of test scores:" << endl;
	cin >> NumberUserScores;
	cout << "Give the scores out of 100" << endl;
	cin >> UserScores;
	//put userscores to vector scores
	//rearrange order of vector scores(separate function to re order?)
  SortList(vector<double>Userscores);
	AverageScore(vector<double>UserScores);
	cout << UserScores;
  run();
}

/**
 * Function Definitions
 *  Call a test function for each of your functions
 **/
void test() {
  // TODO: call your test functions here.
  void test_AverageScore(double UserScores) {
	assert(AverageScore(20.0,30.0,40.0) == 30.0);//identifier assert isnt defined
	assert(AverageScore(0.0,0.0,1.0) == 0.33);//too many arguments in function call
	assert(AverageScore(0.0) == 0);
}
  void test_SortList(vector<double>Userscores){
    assert(SortList(10.0, 30.0, 15.0) == 10.0);
    assert(SortList("10.0", "30.0", "15.0") == "10.0");//Am I supposed to use strings?
    assert(SortList("") == "");//Using strings means different template?
}

// Use this in place of a main function
void run() {
  // TODO: write your point of entry code here.
  cout << "Give number of test scores:" << endl;
	cin >> NumberUserScores;
	cout << "Give the scores out of 100" << endl;
	cin >> UserScores;
	//How do put userscores to vector scores exactly?
  SortList(vector<double>Userscores);
	AverageScore(vector<double>UserScores);
	cout << UserScores;
  run();
}

/**
 * TODO: Insert your function definitions and unit test function definitions here.
 //Psuedo Code
//Get the average of the scores
//Enlarge the list size based on number of scores
//use scores from the user and get most least
double AverageScore(vector<double> UserScores) {
	int i = 0;
  double UserScoresTotal;
	while (i < NumberUserScores) {
		scores.push_back(NumberUserScores - 1);//or resize?
    UserScoresTotal = UserScores[i];//How do I sum all scores together into one
		average = UserScoresTotal / NumberUserScores;//**
    //The result(**) should continue adding to average until escape condition?
		i = i + 1; 
	}
	return average;

 **/
