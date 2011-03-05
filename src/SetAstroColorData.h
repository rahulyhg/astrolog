/*****************************************************************************
 * This software is distributed under the terms of the General Public License.
 *
 * Program :        kastrolog 5.4-2
 * Authors : see the AUTHORS file
 * E-Mail  : Llyra@altavista.com
*****************************************************************************/ 


/**********************************************************************

	--- Qt Architect generated file ---

	File: SetAstroColorData.h
	Last generated: Sat Oct 16 14:28:43 1999

	DO NOT EDIT!!!  This file will be automatically
	regenerated by qtarch.  All changes will be lost.

 *********************************************************************/

#ifndef SetAstroColorData_included
#define SetAstroColorData_included

#include <qdialog.h>
#include "ColorVector.h"
#include <qlistbox.h>
#include "tr.h"

class SetAstroColorData : public QDialog
{
    Q_OBJECT

public:

    SetAstroColorData
    (
        QWidget* parent = NULL,
        const char* name = NULL
    );

    virtual ~SetAstroColorData();

public slots:


protected slots:

    virtual void okslot();
    virtual void colorlistslot(int);
    virtual void cancelslot();

protected:
    ColorVector* cv;
    QListBox* ColorList;

};

#endif // SetAstroColorData_included
