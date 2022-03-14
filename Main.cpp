#include <iostream>
#include <stdexcept>
using namespace std;
#include <string>
#include <array>
#include <algorithm>
#include "mat.hpp"
using namespace ariel;

int main(){
    //gets the size of the mat from the user and two symbols to fill the mat with
    int w,h;
    char ch1,ch2;
    cin>>w>>h>>ch1>>ch2;
    try
    {
       string mat = ariel::mat(w,h,ch1,ch2); 
        cout<<mat<<endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}