#include<iostream>
#include<math.h>
using namespace std;
int fact(int x)
{
	int m=1;
	for(int i=1;i<=x;i++)
	{
		if(x==0)
		return 1;
		else
		m=m*i;
	}
	return m;
}
void fib(int n)
{
	int a=0;
	int b=1;
	int c;
	for(int i=1;i<=n;i++)
	{
		cout<<a<<" ";
		c=a+b;
		a=b;
		b=c;
	}
}
int main()
{
	char x;
	do
		{
		int a,operation,sum,sub,mul,b;
		long double div,sine,cosine,secant,tangent,cotangent,cosecant,sininv,cosinv,taninv,s;
		cout<<"Select the operator you want to use\n1. Basic mathematical operator\n2. Trigonometric operators\n3. Scientific calculator\n4. Unit converters\n5. Additional functions\n6. Innovatively designed functions\n";
		cin>>a;
		cout<<"\n";
		switch(a)
		{
			case(1):
			cout<<"please select the function\n1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n";
			cin>>operation;
			if(operation==1)
			{
				int x,y;
				cout<<"Please enter two numbers you want to add\n";
				cin>>x>>y;
				sum=x+y;
				cout<<"The sum of the entered numbers is "<<sum<<endl;
			}
			else if(operation==2)
			{
				int x,y;
				cout<<"Please enter two numbers you want to subtract\n";
				cin>>x>>y;
				sub=x-y;
				cout<<"The difference of the entered numbers is "<<sub<<endl;
			}
			else if(operation==3)
			{
				int x,y;
				cout<<"Please enter two numbers you want to divide\n";
				cin>>x>>y;
				div=(long double)x/y;
				cout<<"The division of the entered numbers is "<<div<<endl;
			}
			else if(operation==4)
			{
				int x,y;
				cout<<"Please enter two numbers you want to multiply\n";
				cin>>x>>y;
				mul=x*y;
				cout<<"The product of the entered numbers is "<<mul<<endl;
			}
			else
			{
				cout<<"ERROR\nPlease choose a valid option\nThank you!\n";
			}
			break;
			case(2):
			cout<<"Choose\n1. for standard trigonometric functions\n2. for inverse trigonometric functions\n";
			cin>>b;
			if(b==1)
			{
				cout<<"Please select the function\n1. Sine\n2. Cosine\n3. Tangent\n4. Cotangent\n5. Secant\n6. Cosecent\n";
				cin>>operation;
				if(operation==1)
				{
					float x;
					cout<<"Enter the angle in radians\n";
					cin>>x;
					sine=(long double)sin(x);
					cout<<"The sine of the entered angle is "<<sine<<endl;
				}
				else if(operation==2)
				{
					float x;
					cout<<"Enter the angle in radians\n";
					cin>>x;
					cosine=(long double)cos(x);
					cout<<"The cosine of the entered angle is "<<cosine<<endl;
				}
				else if(operation==3)
				{
					float x;
					cout<<"Enter the angle in radians\n";
					cin>>x;
					tangent=(long double)tan(x);
					cout<<"The tangent of the entered angle is "<<tangent<<endl;
				}
				else if(operation==4)
				{
					float x;
					cout<<"Enter the angle in radians\n";
					cin>>x;
					cotangent=(long double)(1/tan(x));
					cout<<"The cotangent of the entered angle is "<<cotangent<<endl;
				}
				else if(operation==5)
				{
					float x;
					cout<<"Enter the angle in radians\n";
					cin>>x;
					secant=(long double)(1/cos(x));
					cout<<"The secant of the entered angle is "<<secant<<endl;
				}
				else if(operation==6)
				{
					float x;
					cout<<"Enter the angle in radians\n";
					cin>>x;
					cosecant=(long double)(1/sin(x));
					cout<<"The cosecant of the entered angle is "<<cosecant<<endl;
				}
				else
				{
					cout<<"ERROR\nPlease choose a valid option\nThank you!";
				}
			}
			else if(b==2)
			{
				cout<<"Please select the function\n1. Sine\n2. Cosine\n3. Tangent\n";
				cin>>operation;
				if(operation==1)
				{
					float x;
					cout<<"Enter the value\n";
					cin>>x;
					sininv=(long double)asin(x);
					cout<<"The angle corresponding to entered value is "<<sininv<<endl;
				}
				else if(operation==2)
				{
					float x;
					cout<<"Enter the value\n";
					cin>>x;
					cosinv=(long double)acos(x);
					cout<<"The angle corresponding to entered value is "<<cosinv<<endl;
				}
				else if(operation==3)
				{
					float x;
					cout<<"Enter the value\n";
					cin>>x;
					taninv=(long double)atan(x);
					cout<<"The angle corresponding to entered value is "<<taninv<<endl;
				}
				else
				{
					cout<<"ERROR\nPlease choose a valid option\nThank you!\n";
				}
			}
			break;
			case(3):
			cout<<"Please select the function\n1. Power function\n2. Factorial of a whole number\n3. Reciprocal of a real number\n4. Logarithmic function\n5. Exponential function\n6. Square root of a number\n";
			cin>>operation;
			if(operation==1)
			{
				float x,y;
				cout<<"Please enter the base\n";
				cin>>x;
				cout<<"Please enter the index\n";
				cin>>y;
				div=(long double)pow(x,y);
				cout<<"The result is "<<div<<endl;
			}
			else if(operation==2)
			{
				int x;
				cout<<"Please enter the number\n";
				cin>>x;
				mul=1;
				for(int i=x;i>0;i--)
				{
					mul=mul*i;
				}
				cout<<"The factorial of the entered number is "<<mul<<endl;
			}
			else if(operation==3)
			{
				long double x,y;
				cout<<"Please enter the number\n";
				cin>>x;
				y=1/x;
				cout<<"The reciprocal of the entered number is "<<y<<endl;
			}
			else if(operation==4)
			{
				long double x,y;
				cout<<"Enter the number to calculate logarithm\n";
				cin>>x;
				y=log(x);
				cout<<"The value of the logarithmic of the entered number is "<<y<<endl;
			}
			else if(operation==5)
			{
				long double x,y;
				cout<<"Enter the index of e\n";
				cin>>x;
				y=exp(x);
				cout<<"The value e to the powered entered number is "<<y<<endl;
			}
			else if (operation==6)
			{
				long double x,y;
				cout<<"Enter the number to calculate suare root\n";
				cin>>x;
				y=sqrt(x);
				cout<<"The square root of the entered number is "<<y<<endl;
			}
			else
				{
					cout<<"ERROR\nPlease choose a valid option\nThank you!\n";
				}
				break;
			case(4):
				cout<<"Please select the function\n1. Degrees to radians\n2. Radians to degrees\n3. MKS to CGS\n4. CGS to MKS\n";
				cin>>operation;
				if(operation==1)
				{
					long double x,y;
					cout<<"Please enter the angle in degrees\n";
					cin>>x;
					y=0.0174533*x;
					cout<<"The angle in radians corresponding to entered value is "<<y<<endl;
				}
				else if(operation==2)
				{
					long double x,y;
					cout<<"Please enter the angle in radians\n";
					cin>>x;
					y=57.2957795*x;
					cout<<"The angle in degrees corresponding to entered value is "<<y<<endl;
				}
				else if(operation==3)
				{
					int x;
					cout<<"Choose the quantity you want to change\n";
					cout<<"1. Distance\n2. Mass\n3. time\n";
					cin>>x;
					if(x==1)
					{
						long double c,d;
						cout<<"Enter the distance in metres\n";
						cin>>c;
						d=100*c;
						cout<<"The distance in centimetres is "<<d<<endl;
					}
					else if(x==2)
					{
						long double c,d;
						cout<<"Enter the mass in kilograms\n";
						cin>>c;
						d=1000*c;
						cout<<"The mass in grams is "<<d<<endl;
					}
					else if(x==3)
					{
						long double c,d;
						cout<<"Enter the time in MKS unit\n";
						cin>>c;
						d=c;
						cout<<"The time in CGS unit is "<<d<<endl;
					}
					else
					{
						cout<<"ERROR\nPlease choose a valid function\nThank you!\n";
					}
				}
				else if(operation==4)
				{
					int x;
					cout<<"Choose the quantity you want to change\n";
					cout<<"1. Distance\n2. Mass\n3. time\n";
					cin>>x;
					if(x==1)
					{
						long double c,d;
						cout<<"Enter the distance in centimetres\n";
						cin>>c;
						d=c/100;
						cout<<"The distance in metres is "<<d<<endl;
					}
					else if(x==2)
					{
						long double c,d;
						cout<<"Enter the mass in grams\n";
						cin>>c;
						d=c/1000;
						cout<<"The mass in kilograms is "<<d<<endl;
					}
					else if(x==3)
					{
						long double c,d;
						cout<<"Enter the time in CGS unit\n";
						cin>>c;
						d=c;
						cout<<"The time in MKS unit is "<<d<<endl;
					}
					else
					{
						cout<<"ERROR\nPlease choose a valid function\nThank you!\n";
					}
				}
				break;
				case(5):
					cout<<"Choose the function\n1. Rounding off a number\n2. Greatest among the entered numbers\n3. Smallest among the entered numbers\n4. Absolute value of a number\n5. Negative of a number\n6. Remainder after division\n";
					cin>>operation;
					if(operation==1)
					{
						long double x,y;
						cout<<"Enter the number you want to round off\n";
						cin>>x;
						y=round(x);
						cout<<"The rounded off number is "<<y<<endl;
					}
					else if(operation==2)
					{
						int x;
						cout<<"Enter the number of numbers you want to check\n";
						cin>>x;
						float ar[x];
						cout<<"Please enter the numbers\n";
						for(int i=0;i<x;i++)
						{
							cin>>ar[i];
						}
						float max=ar[0];
						for(int i=0;i<x;i++)
						{
							if(max<ar[i])
							max=ar[i];
						}
						cout<<"The maximum of the entered numbers is "<<max<<endl;
					}
					else if(operation==3)
					{
						int x;
						cout<<"Enter the number of numbers you want to check\n";
						cin>>x;
						float ar[x];
						cout<<"Please enter the numbers\n";
						for(int i=0;i<x;i++)
						{
							cin>>ar[i];
						}
						float max=ar[0];
						for(int i=0;i<x;i++)
						{
							if(max>ar[i])
							max=ar[i];
						}
						cout<<"The minimum of the entered numbers is "<<max<<endl;
					}
					else if(operation==4)
					{
						long double x,y;
						cout<<"Enter the number\n";
						cin>>x;
						y=abs(x);
						cout<<"The absolute value of the entered number is "<<y<<endl;
					}
					else if(operation==5)
					{
						long double x,y;
						cout<<"Enter the number to get its negative\n";
						cin>>x;
						y=-x;
						cout<<"The negative of the entered number is "<<y<<endl;
					}
					else if(operation==6)
					{
						int x,y,z;
						cout<<"Enter the dividend\n";
						cin>>x;
						cout<<"Enter the divisor\n";
						cin>>y;
						z=x%y;
						cout<<"The remainder after division is "<<z<<endl;
					}
					else
					{
						cout<<"ERROR\nPlease choose a valid function\nThank you!\n";
					}
					break;
					case(6):
					cout<<"Please select the function\n";
					cout<<"1. Taylor's series for exponential fumction\n2. Fibonacci series calculator\n3. Permutations and combination\n4. Impedance calculator\n5. Phase angle calculator\n";
					cin>>operation;
					if(operation==1)
					{
						float sum=1,x, top=1,factoral=1;
						cout << "f(x) = e^x, if x = ";
					   	cin >> x;
					    for(int i=1; i<=34; i++)
					   {
					      factoral*=i;
					      top *= x;
					      sum += top/factoral;
						}
   					cout << "Then f(" << x << ") = " << sum <<endl;
					}
					else if(operation==2)
					{
						int x;
						cout<<"Enter the number of terms\n";
						cin>>x;
						fib(x);
					}
					else if(operation==3)
					{
						int x,y,z;
						cout<<"Enter value of N\n";
						cin>>x;
						cout<<"Enter the value of R\n";
						cin>>y;
						z=fact(x)/(fact(x-y)*fact(y));
						cout<<"The value of C(N,R) is "<<z<<endl;
					}
					else if(operation==4)
					{
						long double x,y,z,c,d,e,f;
						cout<<"Enter the value of Inductive Reactance(in SI units)\n";
						cin>>x;
						cout<<"Enter the value of Capacitive Reactance(in SI units)\n";
						cin>>y;
						cout<<"Enter the value of Resistance(in SI units)\n";
						cin>>z;
						sub=x-y;
						c=pow(sub,2);
						d=pow(z,2);
						e=c+d;
						f=sqrt(e);
						cout<<"The impedance of the series RLC combination is "<<f<<endl;
					}
					else if(operation==5)
					{
						long double x,y,z,c;
						cout<<"Enter the value of Resistance\n";
						cin>>x;
						cout<<"Enter the value of Impedance\n";
						cin>>y;
						z=x/y;
						c=acos(z);
						cout<<"The phase angle is "<<c<<endl;
					}
					else
					{
						cout<<"ERROR\nPlease choose a valid function\nThank you!\n";
					}
					break;
					default:
						cout<<"ERROR\nPlease choose a valid function\nThank you!\n";

			}

		cout<<"Do you want to continue\nEnter Y for yes\n";
		cin>>x;
	}
	while (x=='Y'||x=='y');
	return 0;
}
