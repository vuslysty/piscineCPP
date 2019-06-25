cmake_minimum_required(VERSION 3.14)
project(piscineCPP)

set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")
set(CMAKE_CXX_STANDARD 98)

add_executable(piscineCPP00 main.cpp)
add_executable(megaphone day00/ex00/megaphone.cpp)
add_executable(PhoneBook day00/ex01/Contact.cpp day00/ex01/Contact.hpp day00/ex01/PhoneBook.cpp day00/ex01/PhoneBook.hpp day00/ex01/main.cpp)
add_executable(Account day00/ex02/Account.class.cpp day00/ex02/tests.cpp)

#day01
add_executable(day01_ex00 day01/ex00/Pony.cpp day01/ex00/Pony.hpp day01/ex00/main.cpp)
add_executable(day01_ex01 day01/ex01/ex01.cpp)
add_executable(day01_ex02 day01/ex02/Zombie.cpp day01/ex02/Zombie.hpp day01/ex02/ZombieEvent.cpp day01/ex02/ZombieEvent.hpp day01/ex02/main.cpp)
add_executable(day01_ex03 day01/ex03/Zombie.cpp day01/ex03/Zombie.hpp day01/ex03/main.cpp day01/ex03/ZombieHorde.cpp day01/ex03/ZombieHorde.hpp)
add_executable(day01_ex04 day01/ex04/ex04.cpp)
add_executable(day01_ex05 day01/ex05/Brain.cpp day01/ex05/Brain.hpp day01/ex05/Human.cpp day01/ex05/Human.hpp day01/ex05/main.cpp)
#add_executable(day01_ex06)
#add_executable(day01_ex07)
#add_executable(day01_ex08)