// Project2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "OrgTree.h"
#include <iostream>


int main(){

	OrgTree* o = new OrgTree();

	o->addRoot("President", "George Orwell");
	o->hire(o->getRoot(), "0", "oefiwjoewifj");

	for(short i = 0; true; i++){
		o->hire(o->find(std::to_string(i)), std::to_string(i + 1), "George R.R. Martin");
		//o->printSubTree(o->getRoot());
		if(i % 1000 == 0){
			std::cout << i << std::endl;
		}
	}

	o->hire(o->getRoot(), "VP Sales", "Mark Zuckerburg");
	o->hire(o->getRoot(), "VP Operations", "Bill Gates");
	o->hire(o->getRoot(), "VP Software Development", "Ayn Rand");

	o->hire(o->find("VP Sales"), "Director of Marketing", "George Lucas");
	o->hire(o->find("VP Sales"), "Director of Public Relations", "Kurt Vonnegut");

	o->hire(o->find("VP Software Development"), "MagicBag Team Leader", "Wil Wheaton");
	o->hire(o->find("VP Software Development"), "Cloud Development", "Bob Ross");

	o->hire(o->find("Director of Marketing"), "Digital Media Specialist", "Al Gore");
	o->hire(o->find("Director of Marketing"), "Head of Television and Print Advertising", "George R.R. Martin");

	o->hire(o->find("Head of Television and Print Advertising"), "hi1", "George R.R. Martin");
	o->hire(o->find("hi1"), "hi2", "George R.R. Martin");
	o->hire(o->find("hi2"), "hi3", "George R.R. Martin");
	o->hire(o->find("hi3"), "hi4", "George R.R. Martin");
	o->hire(o->find("hi4"), "hi5", "George R.R. Martin");
	o->hire(o->find("hi5"), "hi6", "George R.R. Martin");
	o->hire(o->find("hi6"), "hi7", "George R.R. Martin");
	o->hire(o->find("hi7"), "hi8", "George R.R. Martin");
	o->hire(o->find("hi8"), "hi9", "George R.R. Martin");
	o->hire(o->find("hi9"), "hi10", "George R.R. Martin");
	o->hire(o->find("hi10"), "hi11", "George R.R. Martin");
	o->hire(o->find("hi11"), "hi12", "George R.R. Martin");

	o->hire(o->find("MagicBag Team Leader"), "Software Engineer I", "Donald Knuth");
	o->hire(o->find("MagicBag Team Leader"), "Software Engineer II", "Marvin Minsky");

	//o->fire("MagicBag Team Leader");
	o->printSubTree(o->getRoot());
	o->read("hi.txt");
	o->write("output.txt");

	o->printSubTree(o->getRoot());
	//o->printSubTree(o->find("VP Sales"));

	system("PAUSE");
	return 0;
}

