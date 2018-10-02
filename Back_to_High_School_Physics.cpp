/* **************************************************************************

    * File Name : Back_to_High_School_Physics.cpp

    * Creation Date : 2018-09-16 16:33:28

    * Last Modified : 2018-10-02 13:56:43

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
    int time; //時間
    int velocity; //速度

    while(cin >> time >> velocity) //輸入時間和速度
        cout << velocity * time * 2 << endl; //速度乘上兩倍時間2t，並輸出
    return 0;
}
