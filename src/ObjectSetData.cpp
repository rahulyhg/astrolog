/*****************************************************************************
 * This software is distributed under the terms of the General Public License.
 *
 * Program :        kastrolog 5.4-2
 * Authors : see the AUTHORS file
 * E-Mail  : Llyra@altavista.com
*****************************************************************************/ 


/**********************************************************************

	--- Qt Architect generated file ---

	File: ObjectSetData.cpp
	Last generated: Sat Oct 23 13:35:04 1999

	DO NOT EDIT!!!  This file will be automatically
	regenerated by qtarch.  All changes will be lost.

 *********************************************************************/

#include <qpixmap.h>
#include <qlayout.h>
#include "ObjectSetData.h"

#define Inherited QWidget


ObjectSetData::ObjectSetData
(
	QWidget* parent,
	const char* name
)
	:
	Inherited( parent, name, 0 )
{
	ObjSet = new QLabel( this, "Label_1" );
	ObjSet->setGeometry( 10, 10, 100, 20 );
	ObjSet->setMinimumSize( 0, 0 );
	ObjSet->setMaximumSize( 32767, 32767 );
	ObjSet->setFocusPolicy( QWidget::NoFocus );
	ObjSet->setBackgroundMode( QWidget::PaletteBackground );
	ObjSet->setFontPropagation( QWidget::NoChildren );
	ObjSet->setPalettePropagation( QWidget::NoChildren );
	ObjSet->setText( "" );
	ObjSet->setAlignment( 289 );
	ObjSet->setMargin( -1 );

	MaxOrb = new myLineEdit( this, "LineEdit_4" );
	MaxOrb->setGeometry( 110, 10, 60, 20 );
	MaxOrb->setMinimumSize( 0, 0 );
	MaxOrb->setMaximumSize( 32767, 32767 );
	connect( MaxOrb, SIGNAL(returnPressed()), SLOT(maxorbslot()) );
	MaxOrb->setFocusPolicy( QWidget::StrongFocus );
	MaxOrb->setBackgroundMode( QWidget::PaletteBase );
	MaxOrb->setFontPropagation( QWidget::NoChildren );
	MaxOrb->setPalettePropagation( QWidget::NoChildren );
	MaxOrb->setText( "" );
	MaxOrb->setMaxLength( 32767 );
	MaxOrb->setEchoMode( myLineEdit::Normal );
	MaxOrb->setFrame( TRUE );

	Add = new myLineEdit( this, "LineEdit_5" );
	Add->setGeometry( 180, 10, 40, 20 );
	Add->setMinimumSize( 0, 0 );
	Add->setMaximumSize( 32767, 32767 );
	connect( Add, SIGNAL(returnPressed()), SLOT(addslot()) );
	Add->setFocusPolicy( QWidget::StrongFocus );
	Add->setBackgroundMode( QWidget::PaletteBase );
	Add->setFontPropagation( QWidget::NoChildren );
	Add->setPalettePropagation( QWidget::NoChildren );
	Add->setText( "" );
	Add->setMaxLength( 32767 );
	Add->setEchoMode( myLineEdit::Normal );
	Add->setFrame( TRUE );

	Influence = new myLineEdit( this, "LineEdit_6" );
	Influence->setGeometry( 230, 10, 50, 20 );
	Influence->setMinimumSize( 0, 0 );
	Influence->setMaximumSize( 32767, 32767 );
	connect( Influence, SIGNAL(returnPressed()), SLOT(Influenceslot()) );
	Influence->setFocusPolicy( QWidget::StrongFocus );
	Influence->setBackgroundMode( QWidget::PaletteBase );
	Influence->setFontPropagation( QWidget::NoChildren );
	Influence->setPalettePropagation( QWidget::NoChildren );
	Influence->setText( "" );
	Influence->setMaxLength( 32767 );
	Influence->setEchoMode( myLineEdit::Normal );
	Influence->setFrame( TRUE );

	resize( 290,40 );
	setMinimumSize( 0, 0 );
	setMaximumSize( 32767, 32767 );
}


ObjectSetData::~ObjectSetData()
{
}
void ObjectSetData::maxorbslot()
{
}
void ObjectSetData::addslot()
{
}
void ObjectSetData::Influenceslot()
{
}
