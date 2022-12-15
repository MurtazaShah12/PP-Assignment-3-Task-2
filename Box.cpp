#include "Box.h"
int main()
{
	double boxwidth , boxlength , boxheight;
	cout<<"Enter the Dimensions: "<<endl;
	cout<<"width: "<<endl;
	cin>>boxwidth;
	
	cout<<"lenght: "<<endl;
	cin>>boxlength;
	
	cout<<"height: "<<endl;
	cin>>boxheight;
	
	Box myBox (boxwidth , boxlength , boxheight );
		cout<<"The Properties of the Box are: "<<endl;
		cout<<"width: "<<myBox.getwidth()<<endl;
		
			cout<<"lenght: "<<myBox.getlength()<<endl;
			
			cout<<"height: "<<myBox.getHeight()<<endl;
	cout<<"The Base of the Area is: "<<myBox.getHeight()<<endl;
	
	cout<<"Volume: "<<myBox.getVolume()<<endl;

		return 0;
}