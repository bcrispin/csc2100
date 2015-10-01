#include <string>
#include <random>
#include "randomName.h"

std::string randomName()
{
	std::string nameArray[50] = {"Lynell", "Marica", "Kacey", "Leeann", "Ramiro", "Lovella", "Barney", "Terrie", "Mamie", "Trudi", "Jesica", "Yoshiko", "Deana", "Kellye", "Ronda", "Karol", "Mikaela", "Gaynelle", "Elois", "Lucille", "Lorelei", "Alejandro", "Laraine", "Debby", "Karey", "Jackie", "Rebbeca", "Lia", "Marian", "Deeann", "Tashina", "Glayds", "Criselda", "Jerilyn", "Verdell", "Janessa", "Margie", "Susana", "Chrissy", "Kelle", "Malka", "Danyelle", "Ike", "Jacinta", "Nickolas", "Boris", "April", "Harriet", "Michell", "Monet"};
	
	int randomInt = rand() % 50;
	return nameArray[randomInt];
}