#include<iostream>
using namespace std;
double Area (double b, double h)
{
double area = (b*h)/2.0;
return area;
}
double AreaT(double b, double h, double c)
{
    if (h+b>c && h+c>b && c+b>h)
    {
        double s=(b+h+c)/2.0;
        double areaT = (s*(s-b)*(s-h)*(s-c));
        return areaT;

    }
    else {cout<<"invalid information for triangle";}
}


int main()
{
double b,h,c;
cout<<"Enter the base: ";
cin>>b;
cout<<"Enter the height: ";
cin>>h;
cout<<"Enter other side: ";
cin>>c;

double area= Area (b,h);
cout<< "Area by base and height: "<<area<<endl;
double areaT= AreaT(b,h,c);
cout<< "Area by side: "<<areaT;


}
