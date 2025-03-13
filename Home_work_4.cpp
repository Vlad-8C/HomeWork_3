////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* Напишите программу, которая запрашивает у пользователя два целых числа меньше 100 и выводит на экран результат их сравнения в текстовом виде. */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

std::string Num_units[10] {" ","один","два","три","четыре","пять","шесть","семь","восемь","девять"};
std::string Num_two_dex[10] {"одиннадцать","двенадцать","тринадцать","четырнадцать","пятьнадцать",\
"шестьнадцать","семнадцать","восемьнадцать","девятнадцать"};
std::string Num_tens[9] {"десять","двадцать", "тридцать", "сорок", "пятьдесят","шесьтедят","семьдесят","восемьдесят","девяносто"};

int main() {
     int v1,v2,var_abs1,var_abs2;
    std::cout<<"Введите первое значение: "; std::cin>>v1;
    std::cout<<"Введите второе значение: "; std::cin>>v2;
    if (v1<0) std::cout<<"минус ";
    var_abs1=abs(v1);
    if ((var_abs1<=10)||(var_abs1>=20))
        {
            if (var_abs1>=10) std::cout<<Num_tens[var_abs1/10-1];
            std::cout<<Num_units[var_abs1%10];
        }
    else std::cout<<Num_two_dex[var_abs1%10-1];
    
    if (v1>v2) std::cout<<" больше чем ";
    else std::cout<<" меньше чем ";
    
    if (v2<0) std::cout<<"минус ";
    var_abs2=abs(v2);
    if ((var_abs2<=10)||(var_abs2>=20))
        {
            if (var_abs2>=10) std::cout<<Num_tens[var_abs2/10-1];
            std::cout<<Num_units[var_abs2%10];
        }
    else std::cout<<Num_two_dex[var_abs2%10];
    
    std::cout<<std::endl;
    return 0;
}
