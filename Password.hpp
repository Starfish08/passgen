#ifndef DEF_PASSWORD
#define DEF_PASSWORD

#include <string>
#include <random>

class Password
{
    public:
    std::string create(int lenght, bool num, bool letters, bool special){
        m_lenght = lenght;
        m_num = num;
        m_letters = letters;
        m_special = special;
        std::string permit_char;
        std::string the_password;
        if (num == true){
            permit_char += "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        }
        if (letters == true){
            permit_char += "0123456789";
        }
        if (special == true){
            permit_char += "!@#$%^&*()_+-=[]{}|;:,.<>?";
        }
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, permit_char.size() - 1);
        for(int i = 0; i<lenght; ++i){
            the_password += permit_char[dis(gen)];
        }
        return the_password;
    };

    private:
    int m_lenght;
    bool m_num;
    bool m_letters;
    bool m_special;
};

#endif