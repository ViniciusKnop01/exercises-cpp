#include <iostream>

using namespace std;

int main(){

    //Variable declaration
    int n, m, p, ans;

    //Storing input values
    cin >> n >> m >> p;

    //Checks if n - p is less then or equal to 0
    if(n - p <= 0){      
        cout << "0" << endl;
    }
    else{
        //Expression that determines the number of events
        ans = ((n - p) / m) + 1;
    }

    //Output the result
    cout << ans << endl;

    return 0;
}