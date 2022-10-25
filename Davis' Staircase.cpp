#include <iostream>
using namespace std;

int stepPerms(int n);

int main () {
    int s;   //the number of staircases in his house
      cin >> s;
      for (int i = 0; i < s; i++) {
        int n;   //the height of staircase 
          cin >> n;
          cout << stepPerms(n) << endl;
    }
    return 0;
}

int stepPerms (int n) {
    if (n==1) {
        return 1;
    }
    else if (n==2) {
        return 2;
    }
    else if (n==3) {
        return 4;
    }
    else{
        return stepPerms(n-1) + stepPerms(n-2) +stepPerms(n-3);
    }
}
