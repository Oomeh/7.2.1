/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: bvance
 *
 * Created on October 31, 2017, 1:03 PM
 */

#include <iostream>
using namespace std;

class myException{
    
public:
    //Throws the key if a is negative. Key has no value, and only serves to keep the code from breaking.
    void no_negative(int a)
    {
        char* key;
        if(a < 0)
        {
            throw key;
        }        
    }
};
//Function for finding the area of a square
int square_area(int a){
    
    return a * a;
}
//Function for finding the area of a rectangle
int rectangle_area(int a, int b){
    return a * b;
}

int main(void) {
    myException exception;
    float a, b, r; 
    cin >> a;
    cin >> b;
    //Tries the code
    try
    {
        //Checks the values for negative numbers
        exception.no_negative(a);    
        exception.no_negative(b);
        float rsquare = square_area(a);
        float rrectangle = rectangle_area(a,b);
        cout << rsquare << endl << rrectangle << endl;
    }
    //Displays the input isn't valid if negative numbers are found.
    catch(const char*){
        cout << "Your input is not valid. The area can't be negative." << endl;
    }
    return 0; 
}