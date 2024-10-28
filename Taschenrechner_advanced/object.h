/////////////////////////////////////////////////////////////////////////////
//    Workfile: object.h
//      Author:	Christoph Strasser
//        Date: 23.10.21 
//    Revision: 0
// Description: object Header
/////////////////////////////////////////////////////////////////////////////
#ifndef OBJECT_H
#define OBJECT_H

//----------------------------------------------------------------------------------------
//Basisklasse aller Basisklassen
//----------------------------------------------------------------------------------------
class Object
{

protected:

	Object() = default;

public:

	virtual ~Object() = default;
};

#endif
