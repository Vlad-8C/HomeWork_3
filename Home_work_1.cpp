#include <iostream>

int main()
{
    bool Arr[2]={true, false};
    std::cout<< "|| ";
    for (int i=0; i<2;i++)
    {
        for (int j=0; j<2;j++)
        {
            std::cout << std::boolalpha<<(Arr[i]||Arr[j])<<'\t';
        }
    }
    std::cout<<std::endl<<"&& ";
    
    for (int i=0; i<2;i++)
    {
        for (int j=0; j<2;j++)
        {
            std::cout<< std::boolalpha<<(Arr[i]&&Arr[j])<<'\t';
        }
    }
    std::cout<< std::endl;
}
