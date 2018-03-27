// Project2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "OrgTree.h"


int main(){

	OrgTree* o = new OrgTree();

	o->addRoot("President", "George Orwell");

	o->hire(o->getRoot(), "VP Sales", "Mark Zuckerburg");
	o->hire(o->getRoot(), "VP Operations", "Bill Gates");
	o->hire(o->getRoot(), "VP Software Development", "Ayn Rand");

	o->hire(o->find("VP Sales"), "Director of Marketing", "George Lucas");
	o->hire(o->find("VP Sales"), "Director of Public Relations", "Kurt Vonnegut");

	o->hire(o->find("VP Software Development"), "MagicBag Team Leader", "Wil Wheaton");
	o->hire(o->find("VP Software Development"), "Cloud Development", "Bob Ross");

	o->hire(o->find("Director of Marketing"), "Digital Media Specialist", "Al Gore");
	o->hire(o->find("Director of Marketing"), "Head of Television and Print Advertising", "George R.R. Martin");

	o->hire(o->find("MagicBag Team Leader"), "Software Engineer I", "Donald Knuth");
	o->hire(o->find("MagicBag Team Leader"), "Software Engineer II", "Marvin Minsky");

	//o->fire("MagicBag Team Leader");
	o->printSubTree(o->getRoot());
	o->read("hi.txt");
	o->write("output.txt");

	o->printSubTree(o->getRoot());
	//o->printSubTree(o->find("VP Sales"));

	return 0;
}

