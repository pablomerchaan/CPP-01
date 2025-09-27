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

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty()) {
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return 1;
	}
	std::ifstream infile(filename.c_str());
	if (!infile.is_open()) {
		std::cerr << "Error: could not open input file " << filename << std::endl;
		return 1;
	}
	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile.is_open()) {
		std::cerr << "Error: could not create output file" << filename << ".replace" << std::endl;
		infile.close();
		return 1;
	}
	std::string line;
	while (std::getline(infile, line)) {
		outfile << replaceAll(line, s1, s2);
		if (!infile.eof())
			outfile << "\n";
	}
	infile.close();
	outfile.close();
	return 0;
}
