#include <iostream>

using namespace std;

void gender(bool gender1){
    if(gender1 == true){
        cout << "he can vote";
    }
    else
    {
        cout << "she cant she is a bitch";
    }
    
}
int main()
{
    bool isMale = false;
    gender(isMale);

    return 0;
}