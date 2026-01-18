#include <iostream>
#include <climits>

using namespace std;

int main(){

    int A, B, C;
    cin >> A >> B >> C;
    

    int maxVal = A;
if(B > maxVal) maxVal = B;
if(C > maxVal) maxVal = C;

int minVal = A;
if(B < minVal) minVal = B;
if(C < minVal) minVal = C;

    cout << minVal  << " " << maxVal << endl;
    return 0;
}