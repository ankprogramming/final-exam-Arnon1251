#include <iostream>
#include<stdlib.h>
using namespace std;
int main() {
cout << "Welcome to CLI Calculator V1.00" << endl;
int Number1, Number2, cmd;
char N;
//�Ѻ��Ҩҡ�����

cout << "Enter first number : ";
cin >> Number1 ;
cout << "Enter second number : ";
cin >> Number2;

//�ʴ������ŷ���͹��ͤ������
 cout << endl;
cout << "1. +" << endl;
cout << "2. -" << endl;
cout << "3. *" << endl;
cout << "4. /" << endl;
cout << "5. quit" << endl;


//�Ѻ��Ҩҡ�����
do {
    cin >> cmd ;
    if (cmd == 1)
    {
        cout << Number1 << "+" << Number2 ;
        cout << "=" << Number1 + Number2 << endl;
    }
    else if (cmd == 2)
        {
        cout << Number1 << "-" << Number2 ;
        cout << "=" << Number1 + Number2 << endl;
       }
    else if (cmd == 3)
        {
        cout << Number1 << "*" << Number2 ;
        cout << "=" << Number1 + Number2 << endl;
       }
    else if (cmd == 4)
        {
        cout << Number1 << "/" << Number2 ;
        cout << "=" << Number1 + Number2 << endl;
       }
    else if (cmd == 5)
        {
        exit(5);
       }
        else {break; }
    } while (1);
        return 0;
}
