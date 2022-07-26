#include<bits/stdc++.h>
using namespace std;
int giaithua(int n)
{
	int x;
	for(int i=1;i<n+1;i++)
	{
		x=x*i;
	}
	return x;
}
double p(float x,int n)
{
	 double f=2020*exp(fabs(x));
	for(int i=1;i<=n+1;i++)
	{
		f=f+pow(x,i);
	}
	return (double)f/giaithua(n);
}
double k (float x,int n,int m)
{
	double xn=x*n;
	double k=(p(x,n)+p(x,m))/(p(xn,m));
	return k;
}
int main()
{
	int n,m;
	double x,q;
	cout <<"nhap x ";
	cin>>x;
	cout<<endl;
	cout<<"nhap n ";
	cin>>n;
	cout<<endl<<"nhap m ";
	cin>>m;

	q=k(x,n,m)+p(x,n)+p(x,m);
	cout <<"gia tri can tinh "<<q;
	return 0;
	
}