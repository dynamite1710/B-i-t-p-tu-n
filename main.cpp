
#include <iostream>

using namespace std;

int main()
{
    
    int x1, x2, x3, sum; //1
   
    cout << "Nhập vào 3 số xúc xắc: ";
    cin >> x1 >> x2 >> x3; //2
    while (x1 <= 0 || x2 <= 0 || x3 <= 0 || x1 > 6 || x2 > 6 || x3 > 6){ //3
        cout << "Không hợp lệ" << endl;
        cout << "Nhập vào 3 số xúc xắc: ";
        cin >> x1 >> x2 >> x3;
        
    }
    sum = x1 + x2 + x3; //4
    if(sum <= 10) cout << "Xỉu"; //5.1
    else cout << "Tài"; //5.2
    return 0;
}