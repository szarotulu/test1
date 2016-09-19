#ifndef COW_H_
#define COW_H_

class Cow
{
	char name[20];
	char * hobby;
	double weight;
public:
	Cow();
	Cow(const char *, const char *, double);
	~Cow();
	Cow & operator=(const Cow &);
	void ShowCow() const;
};

#endif
