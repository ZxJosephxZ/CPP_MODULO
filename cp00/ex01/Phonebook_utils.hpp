#ifndef PHONEBOOK_UTILS_HPP

#define PHONEBOOK_UTILS_HPP

#include "iostream"
#include "Contact.hpp"

std::string add_spaces(int n);
std::string fix_width(std::string str, long unsigned max);
int search_ui(Contact contacts[8]);
#endif