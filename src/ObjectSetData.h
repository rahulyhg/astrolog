/*****************************************************************************
 * This software is distributed under the terms of the General Public License.
 *
 * Program :        kastrolog 5.4-2
 * Authors : see the AUTHORS file
 * E-Mail  : Llyra@altavista.com
*****************************************************************************/ 


/**********************************************************************

	--- Qt Architect generated file ---

	File: ObjectSetData.h
	Last generated: Sat Oct 23 13:35:04 1999

	DO NOT EDIT!!!  This file will be automatically
	regenerated by qtarch.  All changes will be lost.

 *********************************************************************/

#ifndef ObjectSetData_included
#define ObjectSetData_included

#include <qwidget.h>
#include <qlabel.h>
#include "myLineEdit.h"
#include "tr.h"

class ObjectSetData : public QWidget
{
    Q_OBJECT

public:

    ObjectSetData
    (
        QWidget* parent = NULL,
        const char* name = NULL
    );

    virtual ~ObjectSetData();

public slots:


protected slots:

    virtual void Influenceslot();
    virtual void maxorbslot();
    virtual void addslot();

protected:
    QLabel* ObjSet;
    myLineEdit* MaxOrb;
    myLineEdit* Add;
    myLineEdit* Influence;

};

#endif // ObjectSetData_included