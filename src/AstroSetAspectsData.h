/*****************************************************************************
 * This software is distributed under the terms of the General Public License.
 *
 * Program :        kastrolog 5.4-2
 * Authors : see the AUTHORS file
 * E-Mail  : Llyra@altavista.com
*****************************************************************************/ 


/**********************************************************************

	--- Qt Architect generated file ---

	File: AstroSetAspectsData.h
	Last generated: Fri Oct 22 14:36:00 1999

	DO NOT EDIT!!!  This file will be automatically
	regenerated by qtarch.  All changes will be lost.

 *********************************************************************/

#ifndef AstroSetAspectsData_included
#define AstroSetAspectsData_included

#include <qdialog.h>
#include "AspectSet.h"
#include "tr.h"

class AstroSetAspectsData : public QDialog
{
    Q_OBJECT

public:

    AstroSetAspectsData
    (
        QWidget* parent = NULL,
        const char* name = NULL
    );

    virtual ~AstroSetAspectsData();

public slots:


protected slots:

    virtual void okslot();
    virtual void togglemajorslot();
    virtual void restrictallslot();
    virtual void cancelslot();
    virtual void unrestrictallslot();

protected:
    AspectSet* a[18];

};

#endif // AstroSetAspectsData_included
