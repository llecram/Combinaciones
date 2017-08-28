#include <iostream>
int main(){
	int a,b,c,x,y,z,i,j,l;
	std::cin>>a>>b;
	c=a-b;
	z=1;
	x=1;
	y=1;
	for(i=1; i<a ; i+=1)
	{
	  x=x*(i+1);
	  //std::cout<<"\n"<<x;
	}
	for(j=1; j<b ; j+=1)
	{
	  y=y*(j+1);
	  //std::cout<<"\n"<<y;
	}
	for(l=1; l<c ; l+=1)
	{
	  z=z*(l+1);
	  //std::cout<<"\n"<<z;
	}
std::cout<<"\n"<<x/(z*y);
}
