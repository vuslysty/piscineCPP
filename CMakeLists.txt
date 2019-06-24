cmake_minimum_required(VERSION 3.14)
project(piscineCPP00)

set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")
set(CMAKE_CXX_STANDARD 98)

add_executable(piscineCPP00 main.cpp)
add_executable(megaphone ex00/megaphone.cpp)
add_executable(PhoneBook ex01/Contact.cpp ex01/Contact.hpp ex01/PhoneBook.cpp ex01/PhoneBook.hpp ex01/main.cpp)
add_executable(Account ex02/Account.class.cpp ex02/tests.cpp)