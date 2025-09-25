#include <iostream>
#include <fstream>
#include <string>

std::string replaceAll(const std::string &line, const std::string &s1, const std::string &s2)
{
	std::string result;
	size_t position = 0;
	size_t found;

	if (s1.empty())
		return line;
	while ((found = line.find(s1, position)) != std::string::npos) {
        result.append(line.substr(position, found - position));
        result.append(s2);
        position = found + s1.length();
    }
    result.append(line.substr(position));

    return result;
}
