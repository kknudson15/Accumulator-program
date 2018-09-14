#include <iostream>
using namespace std;

char getOperator();
float getOperand();

int main()
{
    float total=0;
    char op = '+';

    cout << "Welcome to your friendly neighborhood accumulator!/namespace \n";
    cout << "Please input your expression, starting with an operand and type in = when completed\n";
    total = getOperand();
    op = getOperator();
        do
        {
            if (op == '+')
                total = total + getOperand();
            else if(op == '-')
                total = total - getOperand();
            else
                break;

            op = getOperator();
        } while (op != '=');


    cout << "The answer is:" << total << endl;
    cout << "Thank-you for using your friendly neighborhood accumulator!" << endl;
    return 0;

}

char getOperator()
{
    char op = '+';
    cin >> op;
    if (op != '+' && op!='-' && op != '=')
    {
        cout << "Bad character. Please input +, - or =.\n";
        cin >> op;
    }

    return op;
}

float getOperand()
{
    float operand = 0;
    cin >> operand;
    while(!cin)
    {
        cin.clear();
        cin.ignore(200, '\n');
        cout << "Need a float value; please try again.";
        cin >>operand;
    }
    return operand;


}
