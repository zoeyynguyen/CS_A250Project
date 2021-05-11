/*
    Group No Idea
    Alvarez, Mauricio (41298)
    Nguyen, Thu (41298)

    Date (month in letters)

    CS A250
    Project 1
*/

#ifndef COOKIELIST_H
#define COOKIELIST_H

#include "Cookie.h"

class Node
{
public:
	Node() : cookie(), next(nullptr) {}
	Node(const Cookie& newCookie, Node* newNext)
		: cookie(newCookie), next(newNext) {}
	Cookie& getCookie() { return cookie; } 
	Node* getNext() const { return next; }
	void setCookie(const Cookie& newCookie) { cookie = newCookie; }
	void setNext(Node* newNext) { next = newNext; }
	~Node() {}
private:
	Cookie cookie;
	Node* next;
};

class CookieList
{
public:
	// Constructors
	CookieList();
	
	// Function addCookie
	void addCookie(const Cookie& aCookie);
	void addCookie(const std::string& newName, size_t newCalories,
		const std::set<std::string>& newIngredients, size_t newServings);

	// Accessor function
	size_t getCount() const;

	// Boolean functions
	bool isEmpty() const;
	bool searchCookie(const std::string& aCookie) const;

	// Print functions
	void printAllCookies() const;

	// Function clearList
	void clearList();
	
	//Part C
    void printCookiesSelection() const;
    void printRecipe(size_t cookieSelect);
    
	// The Big Three
	CookieList(const CookieList& otherCookieList);
	CookieList& operator=(const CookieList& otherCookieList);		
	~CookieList();
	
	//CookieList::printLimitedCalories.
	void printLimitedCalories(size_t maxOfCalo); //partC
	
	
private:
     // Part C 
     getCookieLocation(size_t cookieSelect); // dont have return value
	// Helper functions for copy assignment operator
	void copyCallingObjIsEmpty(const CookieList& otherCookieList);
	void copyObjectsSameLength(const CookieList& otherCookieList);
	void copyCallingObjLonger(const CookieList& otherCookieList);
	void copyCallingObjShorter(const CookieList& otherCookieList);

	Node* first;
	Node* last;
	size_t count;
};

#endif
