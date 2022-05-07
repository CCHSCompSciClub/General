#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

#define START {
#define END }
#define OUTCOME return
#define command system
#define o cout
#define f for
#define w while
#define str string

int change;

class bills
START 
    public:
        str unit, unit1, unit2, finalstr;
        float value;
        int amount;
        
        bills(str iunit1, str iunit2, float ivalue)
        START 
            value = ivalue;
            unit1 = iunit1;
            unit2 = iunit2;
        END
END;

int ch(int value)
START 
    int amount = floor(change / value);
    change = change % value;
    OUTCOME amount;
END


str uniting(str iunit1, str iunit2, int amount)
START 
    str result;
    if(amount == 1)
    START 
        result = iunit1;
    END
    else
    START 
        result = iunit2;
    END
    OUTCOME result;
END




int main()
START
    bills hund("hundred", "hundreds", 100);
    bills fift("fifty", "fifties", 50);
    bills twen("twenty", "twenties", 20);
    bills ten("ten", "tens", 10);
    bills five("five", "fives", 5);
    bills one("one", "ones", 1);

    bills quar("quarter", "quarters", 0.25);
    bills dime("dime", "dimes", 0.1);
    bills nick("nickel", "nickels", 0.05);
    bills penn("penny", "pennies", 0.01);

    str final1, final2;
    int cost, money;
    o << "Enter Cost\n";
    cin >> cost;
    o << "Enter Money\n";
    cin >> money;
    change = money-cost;
    if(change == 0)
    START 
        str finalprep = "There Isn't Any Change!";
    END
    else if(change < 0)
    START
        str finalprep = "You didn't submit enough money!";
    END
    o << "Your Change is: " << change <<"\n\n\n";

    hund.amount=ch(hund.value); hund.unit=uniting(hund.unit1, hund.unit2, hund.amount); hund.finalstr =(   hund.amount + " " + hund.unit + ", "   );
    fift.amount=ch(fift.value); fift.unit=uniting(fift.unit1, fift.unit2, fift.amount); fift.finalstr =(   fift.amount + " " + fift.unit + ", "   );
    twen.amount=ch(twen.value); twen.unit=uniting(twen.unit1, twen.unit2, twen.amount); twen.finalstr =(   twen.amount + " " + twen.unit + ", "   );
    ten.amount=ch(ten.value);   ten.unit=uniting(ten.unit1, ten.unit2, ten.amount);     ten.finalstr =(   ten.amount + " " + ten.unit + ", "   );
    five.amount=ch(five.value); five.unit=uniting(five.unit1, five.unit2, five.amount); five.finalstr =(   five.amount + " " + five.unit + ", "   );
    one.amount=ch(one.value);   one.unit=uniting(one.unit1, one.unit2, one.amount);     one.finalstr =(   one.amount + " " + one.unit + ", "   );
    
    quar.amount=ch(quar.value); quar.unit=uniting(quar.unit1, quar.unit2, quar.amount); quar.finalstr =(   quar.amount + " " + quar.unit + ", "   );
    dime.amount=ch(dime.value); dime.unit=uniting(dime.unit1, dime.unit2, dime.amount); dime.finalstr =(   dime.amount + " " + dime.unit + ", "   );
    nick.amount=ch(nick.value); nick.unit=uniting(nick.unit1, nick.unit2, nick.amount); nick.finalstr =(   nick.amount + " " + nick.unit + ", "   );
    penn.amount=ch(penn.value); penn.unit=uniting(penn.unit1, penn.unit2, penn.amount); penn.finalstr =(   penn.amount + " " + penn.unit    );
    final1 = "|| "+ hund.unit + fift.unit+ twen.unit+ ten.unit+ five.unit+ one.unit;
    final2 =  quar.unit+ dime.unit+ nick.unit+ penn.unit + " ||";
    
    cout << final1 + final2;
    cout << hund.amount; cout << hund.unit; cout << hund.finalstr;
    OUTCOME 0;
END