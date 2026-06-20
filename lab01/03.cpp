#include <iostream>
using namespace std;

int prime (int num) {

int cnt = 0;
    if (num <= 1)
        cout << num << " is NOT prime" << endl;
    else {

        for (int i = 1; i <= num; i++) {


            if (num % i == 0)
                cnt++;
        }

        if (cnt > 2)
            cout << num << " is NOT prime" << endl;


        else
            cout << num << " is prime" << endl;
    }
}
int main (){
  int num;
     cout <<"Enter a number:"<<num;
     cin>>num;

     prime (num);

    }

