#include "conversion.hpp"

conv::conv()
{
	impossible = false;
	non_diplayable = false;
}

bool maxInt(int nbr, std::string s2)
{
	std::string s1;
	size_t i = 0;
	size_t i2 = 0;

	s1 = std::to_string(nbr);
	while (s2[i2] == '0')
		i2++;
	while (i < s2.length())
	{
		if (s2[i2] == '.')
			break;
		if (s1[i] != s2[i2])
			return (false);
		i++;
		i2++;
	}
	return (true);
}

bool isValid(std::string str, size_t start)
{
	while (start++ < str.length() - 1)
		if (!std::isdigit(str[start]) && str[start] != '.')
			return (false);
	return (true);
}

void conv::setValue(std::string str)
{
	value = str;
}

std::string conv::getValue() const
{
	return value;
}

int isPoint(std::string str, size_t start)
{
	bool point;

	point = false;
	while (start++ < str.length() - 1)
	{
		if ((point && str[start] == '.'))
			return 2;
		if (str[start] == '.')
			point = true;
	}
	if (point ^ (str[str.length() - 1] == '.'))
		return 1;
	return 0;
}

void conv::parsing(std::string &Type)
{
	size_t Tsize;
	size_t i;

	Tsize = Type.length();
	i = 0;
	if (Tsize == 1 && !std::isdigit(Type[i]))
	{
		this->type = CHAR;
		return;
	}
	else if (Type == "+inff" || Type == "-inff" || Type == "nanf")
	{
		this->type = FLOAT;
		impossible = true;
		return;
	}
	else if (Type == "+inf" || Type == "-inf" || Type == "nan")
	{
		this->type = DOUBLE;
		impossible = true;
		return;
	}
	if (Type[i] == '+' || Type[i] == '-')
		i++;
	this->type = INT;
	if ((isPoint(Type, i) == 1) && isValid(Type, i) && Type[Tsize - 1] == 'f')
		this->type = FLOAT;
	else if (((isPoint(Type, i) == 1) && isValid(Type, i)) && (std::isdigit(Type[Tsize - 1]) || (Type[Tsize - 1] == '.')))
		this->type = DOUBLE;
	else if ((isPoint(Type, i) == 2) || !(isValid(Type, i)) || (!std::isdigit(Type[Tsize - 1])))
		this->type = ERROR;
	return;
}

void conv::SetTypes()
{
	std::string str = getValue();
	if (this->type == CHAR)
	{
		char_value = str[0];
		int_value = static_cast<int>(char_value);
		float_value = static_cast<float>(char_value);
		double_value = static_cast<double>(char_value);
		if (!std::isprint(int_value))
			non_diplayable = true;
	}
	else if (this->type == INT)
	{
		int_value = std::atoi(str.c_str());
		if (!maxInt(int_value, value))
			impossible = true;
		char_value = static_cast<char>(int_value);
		float_value = static_cast<float>(int_value);
		double_value = static_cast<double>(int_value);
		if (impossible)
		{
			float_value = static_cast<float>(std::atof(str.c_str()));
			double_value = static_cast<double>(std::atof(str.c_str()));
		}
		if (!std::isprint(int_value))
			non_diplayable = true;
	}
	else if (this->type == FLOAT)
	{
		float_value = std::atof(str.c_str());
		if (!maxInt(float_value, value))
			impossible = true;
		int_value = static_cast<int>(float_value);
		double_value = static_cast<double>(float_value);
		char_value = static_cast<char>(float_value);
		if (!impossible && !std::isprint(int_value))
			non_diplayable = true;
	}
	else if (this->type == DOUBLE)
	{
		double_value = atof(str.c_str());
		if (!maxInt(double_value, value))
			impossible = true;
		float_value = static_cast<float>(double_value);
		int_value = static_cast<int>(double_value);
		char_value = static_cast<char>(double_value);
		if (!impossible && !std::isprint(int_value))
			non_diplayable = true;
	}
}

void conv::princhar_value()
{
	if (impossible)
		std::cout << "char: impossible" << std::endl;
	else if (non_diplayable)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << char_value << "'" << std::endl;
}

void conv::prinint_value()
{
	if (impossible)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << int_value << std::endl;
	impossible = false;
}

void conv::prinfloat_value()
{
	std::cout << "float: " << std::fixed << std::setprecision(precesion) << float_value << 'f' << std::endl;
}

void conv::prindouble_value()
{
	std::cout << "double: " << std::fixed << std::setprecision(precesion) << double_value << std::endl;
}

void conv::setPrecision(void)
{
	if (type == DOUBLE || type == FLOAT)
	{
		this->precesion = value.find(".");
		this->precesion = (value.length() - this->precesion - 1);
		if (type == FLOAT && !(value.find(".") == value.find("f") - 1))
			this->precesion--;
		if (value.find(".") == value.length() - 1)
			this->precesion++;
	}
	else
		this->precesion = 1;
}

void conv::printTypes()
{
	setPrecision();
	princhar_value();
	prinint_value();
	prinfloat_value();
	prindouble_value();
}

int conv::GetType() const
{
	return (this->type);
}

conv::conv(const conv &other)
{
	*this = other;
}

conv &conv::operator=(const conv &rhs)
{
	if (this != &rhs)
	{
		this->int_value = rhs.int_value;
		this->char_value = rhs.char_value;
		this->float_value = rhs.float_value;
		this->double_value = rhs.double_value;
		this->impossible = rhs.impossible;
		this->non_diplayable = rhs.non_diplayable;
		this->type = rhs.type;
		this->value = rhs.value;
		this->precesion = rhs.precesion;
	}
	return (*this);
}

conv::~conv(){}