
#include <iostream>
#include <string>
int main()
{
    char gender;
    std::string zodiac_sign;
    int year;
    std::cout << "Укажите пол человека m/f (male or female)"; std::cin>>gender;
    std::cout << "Укажите знак задиака (Aries, Leo, Sagittarius, Taurus, \
Virgo, Capricorn, Gemini, Libra, Aquarius, Cancer, Scorpio, Pisces)";
    std::cin>>zodiac_sign;
    std::cout << "Укажите кол-во лет"; std::cin>>year;
    
    //+++Если это мужчина водного знака зодиака и строго моложе 40 лет, то на экран должен вывестись текст:+++//
    if ((gender=='m')&&(zodiac_sign=="Cancer"||zodiac_sign=="Scorpio"||zodiac_sign=="Pisces")&&year<40)
    {
        std::cout<<"Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным. "<<std::endl;
        return 0;
        
    }
    
    //+++Если это женщина земляного знака зодиака и в возрасте от 15 до 30 лет, включая границы, то на экран должен вывестись текст:+++/
    if ((gender=='f')&&(zodiac_sign=="Taurus"||zodiac_sign=="Virgo"||zodiac_sign=="Capricorn")&&(year>=15)&&(year<=30))
    {
        std::cout<<"Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок. \n\
        Будет не только весело, но и интересно: найдётся дело, которое увлечёт всех."<<std::endl;
        return 0;
    }
    
    //+++В противном случае на экране должен появиться текст:+++//
    std::cout<<"Гороскоп для вас находится в разработке. Приходите чуточку позже ;)"<<std::endl;
    return 0;
}
