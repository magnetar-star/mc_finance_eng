//
//  main.cpp
//  mc_examples
//
//  Created by Matthew liew on 23.10.23.
//

#include <iostream>
#include <cmath>
#include "Normals.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    double u = rand() / static_cast<double>(RAND_MAX);
    double x = CumulativeNormal(u);
    
    
    cout << x << endl;
    
    return 0;
}
