/*
program
alex carnes 6/6
*/

#include <iostream>
#include <random>

using namespace std;


void dice(int,int);

int main () {

    int R = 10,S;

    dice(10,20);        // for 20 side
    dice(10,6);         // for 6 side
    dice(10,12);        // for 12 side

    return 0;
}


void dice(int R, int S){

    default_random_engine engine { static_cast<unsigned int>(time(0)) };                    // Will become the seed
    uniform_int_distribution <int> roll { 1, S };                                // Creates the Modulous range

// to execute roll
    cout <<"\n\n" << R << " rolls for " << S << " sided dice\n";

    for (int i = 0; i < R; i++) {cout << roll(engine) << ",";}
}