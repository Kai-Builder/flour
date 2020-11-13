#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{   // Hello Worldd
    cout << "Hello, world!" << endl;
    char cream[100]; // Makes a cream variable :)
    cout << "How would you like your CreaMM?" << endl; // Questioning
    cin.getline(cream, 100); 
    cout << "Alright. Bakin' Up some" << cream << "Cream for you" << endl;
    char ice[100]; // Cold Ice, Don't Get hot ice please it'd hurt me and you :(
    cout << "Now, Should it be cold or hot?" << endl;
    if(ice == "cold"){
        cout << "Making some Cold Cream for you buddy." << endl;
        return 0;
    }
    

    else if(ice == "hot"){
        cout << "*Gives you melted cream*" << endl; // Who Has Hot Cream??
        exit;
    }
}
