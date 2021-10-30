#ifndef CONVERTION_HPP
#define CONVERTION_HPP
#include <iostream>
#define FALSE_POINT_F ".0f"
#define TRUE_POINT_F "f"
#define ONLY_POINT "."
class conversion
{
private:
    std::string _toInt;
    std::string _toFloat;
    std::string _toChat;
    int _int_num;
    float _float_num;
    double _double_num;
    char    _char_num;
    bool _point;
public:
    conversion(/* args */);
    ~conversion();
    bool toInt(std::string target);
    bool toFloat(std::string target);
    bool toDouble(std::string target);
    bool toChar(std::string target);
    void    ft_print(std::string str);
    void    char_print(std::string str);
    void    int_print(std::string str);
    void    double_print(std::string str);
    void    float_print(std::string str);
    int    inf_check(std::string str);
    bool    isdigit(std::string str);
    bool    ischar(std::string str);
};


#endif