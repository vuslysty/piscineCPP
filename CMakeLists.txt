cmake_minimum_required(VERSION 3.14)
project(piscineCPP)

set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")
set(CMAKE_CXX_STANDARD 98)


#add_executable(piscineCPP00 main.cpp)

#day00
#add_executable(megaphone day00/ex00/megaphone.cpp)
#add_executable(PhoneBook day00/ex01/Contact.cpp day00/ex01/Contact.hpp day00/ex01/PhoneBook.cpp day00/ex01/PhoneBook.hpp day00/ex01/main.cpp)
#add_executable(Account day00/ex02/Account.class.cpp day00/ex02/tests.cpp day01/ex10/main.cpp)

#day01
#add_executable(day01_ex00 day01/ex00/Pony.cpp day01/ex00/Pony.hpp day01/ex00/main.cpp)
#add_executable(day01_ex01 day01/ex01/ex01.cpp)
#add_executable(day01_ex02 day01/ex02/Zombie.cpp day01/ex02/Zombie.hpp day01/ex02/ZombieEvent.cpp day01/ex02/ZombieEvent.hpp day01/ex02/main.cpp)
#add_executable(day01_ex03 day01/ex03/Zombie.cpp day01/ex03/Zombie.hpp day01/ex03/main.cpp day01/ex03/ZombieHorde.cpp day01/ex03/ZombieHorde.hpp)
#add_executable(day01_ex04 day01/ex04/ex04.cpp)
#add_executable(day01_ex05 day01/ex05/Brain.cpp day01/ex05/Brain.hpp day01/ex05/Human.cpp day01/ex05/Human.hpp day01/ex05/main.cpp)
#add_executable(day01_ex06 day01/ex06/Weapon.cpp day01/ex06/Weapon.hpp day01/ex06/HumanA.cpp day01/ex06/HumanA.hpp day01/ex06/HumanB.cpp day01/ex06/HumanB.hpp day01/ex06/main.cpp)
#add_executable(day01_ex07 day01/ex07/main.cpp)
#add_executable(day01_ex08 day01/ex08/Human.cpp day01/ex08/Human.hpp day01/ex08/main.cpp)
#add_executable(day01_ex09 day01/ex09/Logger.cpp day01/ex09/Logger.hpp day01/ex09/main.cpp)
#add_executable(day01_ex10 day01/ex10/main.cpp day01/ex10/Cat.cpp day01/ex10/Cat.hpp)

#day02
#add_executable(day02_ex00 day02/ex00/Fixed.cpp day02/ex00/Fixed.hpp day02/ex00/main.cpp)
#add_executable(day02_ex01 day02/ex01/Fixed.cpp day02/ex01/Fixed.hpp day02/ex01/main.cpp)
#add_executable(day02_ex02 day02/ex02/Fixed.cpp day02/ex02/Fixed.hpp day02/ex02/main.cpp)
#add_executable(eval_expr day02/ex04/Fixed.cpp day02/ex04/Fixed.hpp day02/ex04/main.cpp day02/ex04/List.cpp day02/ex04/List.hpp day02/ex04/Fsm.cpp day02/ex04/Fsm.hpp day02/ex04/isSomeChar.cpp day02/ex04/stateCheck.cpp)

#day03
#add_executable(day03_ex00 day03/ex00/FragTrap.cpp day03/ex00/FragTrap.hpp day03/ex00/main.cpp)
#add_executable(day03_ex01 day03/ex01/FragTrap.cpp day03/ex01/FragTrap.hpp day03/ex01/main.cpp day03/ex01/ScavTrap.cpp day03/ex01/ScavTrap.hpp)
#add_executable(day03_ex02 day03/ex02/FragTrap.cpp day03/ex02/FragTrap.hpp day03/ex02/main.cpp day03/ex02/ScavTrap.cpp day03/ex02/ScavTrap.hpp day03/ex02/ClapTrap.cpp day03/ex02/ClapTrap.hpp)
#add_executable(day03_ex03 day03/ex03/FragTrap.cpp day03/ex03/FragTrap.hpp day03/ex03/main.cpp day03/ex03/ScavTrap.cpp day03/ex03/ScavTrap.hpp day03/ex03/ClapTrap.cpp day03/ex03/ClapTrap.hpp day03/ex03/NinjaTrap.cpp day03/ex03/NinjaTrap.hpp)
#add_executable(day03_ex04 day03/ex04/FragTrap.cpp day03/ex04/FragTrap.hpp day03/ex04/main.cpp day03/ex04/ScavTrap.cpp day03/ex04/ScavTrap.hpp day03/ex04/ClapTrap.cpp day03/ex04/ClapTrap.hpp day03/ex04/NinjaTrap.cpp day03/ex04/NinjaTrap.hpp day03/ex04/SuperTrap.cpp day03/ex04/SuperTrap.hpp)

#day04
#add_executable(day04_ex00 day04/ex00/Sorcerer.cpp day04/ex00/Sorcerer.hpp day04/ex00/Victim.cpp day04/ex00/Victim.hpp day04/ex00/Peon.cpp day04/ex00/Peon.hpp day04/ex00/main.cpp)
#add_executable(day04_ex01 day04/ex01/AWeapon.cpp day04/ex01/AWeapon.hpp day04/ex01/PlasmaRifle.cpp day04/ex01/PlasmaRifle.hpp day04/ex01/PowerFirst.cpp day04/ex01/PowerFirst.hpp day04/ex01/Enemy.cpp day04/ex01/Enemy.hpp day04/ex01/SuperMutant.cpp day04/ex01/SuperMutant.hpp day04/ex01/RadScorpion.cpp day04/ex01/RadScorpion.hpp day04/ex01/Character.cpp day04/ex01/Character.hpp day04/ex01/main.cpp)
#add_executable(day04_ex02 day04/ex02/Squad.cpp day04/ex02/Squad.hpp day04/ex02/TacticalMarine.cpp day04/ex02/TacticalMarine.hpp day04/ex02/AssaultTerminator.cpp day04/ex02/AssaultTerminator.hpp day04/ex02/ISpaceMarine.hpp day04/ex02/ISquad.hpp day04/ex02/main.cpp day04/ex02/ListSquad.cpp day04/ex02/ListSquad.hpp)
#add_executable(day04_ex03)
#add_executable(day04_ex04)

#rush00
#add_executable(rush00 rush00/Object.cpp rush00/Object.hpp)

#day05
add_executable(day05_ex00 day05/ex00/Bureaucrat.cpp day05/ex00/Bureaucrat.hpp day05/ex00/main.cpp)
add_executable(day05_ex01 day05/ex01/Bureaucrat.cpp day05/ex01/Bureaucrat.hpp day05/ex01/main.cpp day05/ex01/Form.cpp day05/ex01/Form.hpp)
add_executable(day05_ex02 day05/ex02/Bureaucrat.cpp day05/ex02/Bureaucrat.hpp day05/ex02/main.cpp day05/ex02/Form.cpp day05/ex02/Form.hpp day05/ex02/ShrubberyCreationForm.cpp day05/ex02/ShrubberyCreationForm.hpp day05/ex02/RobotomyRequestForm.cpp day05/ex02/RobotomyRequestForm.hpp day05/ex02/PresidenticalPardonForm.cpp day05/ex02/PresidenticalPardonForm.hpp)
#add_executable(day05_ex00)
#add_executable(day05_ex00)