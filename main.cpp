#include <iostream>

#include "account.h"
#include "cmachine.h"
#include "customer.h"
#include "drink.h"
#include "supplier.h"

using namespace std;

void example()
{
    CLEAR();
    Customer c;
    Supplier s;
    CMachine v;
    Account acc;
    Drink tempDrink;
    int flag;
    unsigned char ch;

    tempDrink.setAllinfo("可乐", 2.5, 8);
    v.sendDrink(tempDrink, 0);

    tempDrink.setAllinfo("农夫山泉", 1.5, 10);
    v.sendDrink(tempDrink, 1);

    tempDrink.setAllinfo("雪碧", 1.5, 10);
    v.sendDrink(tempDrink, 2);

    tempDrink.setAllinfo("酸奶", 3.0, 3);
    v.sendDrink(tempDrink, 3);

    tempDrink.setAllinfo("酷儿", 4.0, 2);
    v.sendDrink(tempDrink, 4);

    tempDrink.setAllinfo("咖啡", 5.0, 1);
    v.sendDrink(tempDrink, 5);

    while (1)
    {
        CLEAR();
        v.gotoXY(0, 0);
        cout << "顾客请按1，送货员请按2，退出请按-1：";
        cin >> flag;
        while (flag == 1)
        {
            c.buyDrink(v);
            break;
        }

        while (flag == 2)
        {
            s.addDrink(v);
            break;
        }

        if (flag == -1)
            break;
    }
}

int main()
{
    example();
    return 0;
}
