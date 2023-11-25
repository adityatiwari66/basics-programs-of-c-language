#include <iostream>
using namespace std;
class complex;

class calculater
{ 
    public : 
    int add(int x, int y)
    {
        return x + y;
    }
    int sumrealfunc(complex, complex);
};

class complex
{
    int a;
    int b;
friend int  calculater :: sumrealfunc( complex O1 ,complex O2 );
public:
    void setnum()
    {
        a = 3;
        b = 4;
    }
    
};

int calculater :: sumrealfunc(complex O1 ,complex O2){
    cout << "the value of a +ib is "<< O1.a << "+ "<< O1.b << endl;
    cout << "the value of a +ib is "<< O2.a << "+ "<< O2.b << endl;
    return (O1 .a + O2.b) ;
}
int main()
{
complex A1, A2 ; 
calculater c1;
A1.setnum();
A2.setnum();
c1.add(3,4);
c1 . sumrealfunc(A1, A2);

int sum = c1.sumrealfunc(A1,A2);

cout<< "the sum is : " << sum << endl ;
    return 0;
}

