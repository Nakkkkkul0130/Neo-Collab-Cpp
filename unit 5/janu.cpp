#include<bits/stdc++.h>
using namespace std;

class operationsBase
{
public:
	virtual void addition() = 0;
	virtual void subtraction() = 0;
	virtual void multiplication() = 0;
	virtual void division() = 0;
};
class operationsDerived : public operationsBase
{
	int a,b;
    public:
	int get()
	{
	    cin>>a>>b;
	}
	void addition()
	{
	    cout<<a+b<<" ";
	}
	void subtraction()
	{
	    cout<<a-b<<" ";
	}
	void multiplication()
	{
	    cout<<a*b<<" ";
	}
	void division()
	{
	    if(b != 0){
	    cout<<a/b<<" ";
	    }
	    
	    else {
	        cout << "\nDivision by 0 is not allowed.";
	    }
	}
};

int main()
{
	operationsDerived od;
	od.get();
	od.addition();
	od.subtraction();
	od.multiplication();
	od.division();
	return 0;
}

