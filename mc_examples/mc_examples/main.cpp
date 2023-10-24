//
//  main.cpp
//  mc_examples
//
//  Created by Matthew liew on 23.10.23.
//

#include <iostream>
#include <cmath>
#include "Normals.hpp"
#include <vector>


using namespace std;

int main(int argc, const char * argv[]) {
    std::vector<double> a;
    int N {10000000};
    
    for (int i =0; i < N; i++) {
        a.push_back(GetOneGaussianByBoxMuller());
    }
    
    double sum{0};
    
    for (double n : a) {
        sum += n;
    }
    
    cout << "the mean is " << sum/a.size() << endl;
    
    return 0;
}
