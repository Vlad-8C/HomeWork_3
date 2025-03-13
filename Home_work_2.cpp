#include <iostream>

int main_2()
{
int a=1,b=-2,c=3,check;
check=c>b
    ?c>a
        ?a>b?1:2
        :3
    :(c>a)
        ?4
        :(a>b)?5:6;
switch(check){
    case 1: std::cout<<c<<'\t'<<a<<'\t'<<b<<std::endl; break;
    case 2: std::cout<<c<<'\t'<<b<<'\t'<<a<<std::endl; break;
    case 3: std::cout<<a<<'\t'<<c<<'\t'<<b<<std::endl; break;
    case 4: std::cout<<b<<'\t'<<c<<'\t'<<a<<std::endl; break;
    case 5: std::cout<<b<<'\t'<<a<<'\t'<<c<<std::endl; break;
    case 6: std::cout<<a<<'\t'<<b<<'\t'<<c<<std::endl; break;
    }
}
