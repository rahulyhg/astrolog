/*****************************************************************************
 * This software is distributed under the terms of the General Public License.
 *
 * Program :        kastrolog 5.4-2
 * Authors : see the AUTHORS file
 * E-Mail  : Llyra@altavista.com
*****************************************************************************/ 


/**********************************************************************

	--- Qt Architect generated file ---

	File: AstroTransitsData.h
	Last generated: Wed Nov 3 15:23:50 1999

	DO NOT EDIT!!!  This file will be automatically
	regenerated by qtarch.  All changes will be lost.

 *********************************************************************/

#ifndef AstroTransitsData_included
#define AstroTransitsData_included

#include <qdialog.h>
#include <qbttngrp.h>
#include <qchkbox.h>
#include "myLineEdit.h"
#include <qcombo.h>
#include "tr.h"

class AstroTransitsData : public QDialog
{
    Q_OBJECT

public:

    AstroTransitsData
    (
        QWidget* parent = NULL,
        const char* name = NULL
    );

    virtual ~AstroTransitsData();

public slots:


protected slots:

    virtual void timeslot();
    virtual void okslot();
    virtual void divisionslot();
    virtual void transtypeslot(int);
    virtual void nowslot();
    virtual void dayslot();
    virtual void cancelslot();
    virtual void searchforhitsslot(int);
    virtual void nbyearsslot();
    virtual void yearslot();

protected:
    QButtonGroup* SearchForHits;
    QButtonGroup* TransType;
    QCheckBox* Progress;
    QComboBox* Month;
    myLineEdit* TheDay;
    myLineEdit* Year;
    myLineEdit* Time;
    myLineEdit* NbYears;
    QCheckBox* DisplayReturns;
    myLineEdit* Divisions;

};

#endif // AstroTransitsData_included
