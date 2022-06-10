#include <iostream>
using namespace std;
int main()
{
	int x,tmp,a;
	int res=0;
	cout<<"\nEnter x: ";
	cin>>x;
	if(x<0)
	{
	   cout<<"\nx is not a palindrome";
	   main();
}
	else
	{
	a=x;
	while (a>0)
	{
		tmp=a%10;
		res=res*10+tmp;
		a=a/10;
    }
    cout<<"Reservation of x: "<<res;
	if(x==res)
	{
	  cout<<"\nx is a palindrome ";
	  return 0;
}
    else
    {
     cout<<"\nx is not a palindrome ";
     main();
 }
}
}
