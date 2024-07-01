/*
program
alex carnes 6/6
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


void string_E(vector <string> &my_vector) {

    string IB;

    do {
        if (IB == "exit") break;

        cout << "enter name: ";

            my_vector.push_back(IB);
    }
    while (getline(cin, IB));

}


void print(vector <string> my_vector) {

    for (string n:my_vector)
        cout << n << endl;
}


void sort(vector <string> my_vector) {

    sort (my_vector.begin(), my_vector.end());
        cout << "sorted names before pop back :\n";

    print(my_vector); cout << "\nafter popback :\n";

    my_vector.pop_back();

    print(my_vector);

}



int main () {

    vector <string> my_vector;

//  get user input and store into string vector
    string_E(my_vector);
//  to sort and pop back
    sort(my_vector);

    return 0;
}



//  .pushback() method, will increase the length of the vector to fit the data that is being inputted, this does this
//   at the back of the vector, hence "pushback"

//  .pop_back() method, does the opposite of pushback, where it will remove the last data and decrease vector size

//  FILO stands for first in last out, meaning the first data that u put into a stack is the last one u take out.


