/*****************************************************************************
 * This software is distributed under the terms of the General Public License.
 *
 * Program :        kastrolog 5.4-2
 * Authors : see the AUTHORS file
 * E-Mail  : Llyra@altavista.com
*****************************************************************************/ 


/**********************************************************************

	--- Qt Architect generated file ---

	File: AstroCommandData.cpp
	Last generated: Sun Sep 26 14:48:27 1999

	DO NOT EDIT!!!  This file will be automatically
	regenerated by qtarch.  All changes will be lost.

 *********************************************************************/

#include <qpixmap.h>
#include <qlayout.h>
#include "AstroCommandData.h"
#include "tr.h"

#define Inherited QDialog

#include <qlabel.h>
#include <qpushbt.h>

AstroCommandData::AstroCommandData
(
	QWidget* parent,
	const char* name
)
	:
	Inherited( parent, name, TRUE, 0 )
{
	theline = new myLineEdit( this, "LineEdit_1" );
	theline->setGeometry( 40, 50, 300, 30 );
	theline->setMinimumSize( 0, 0 );
	theline->setMaximumSize( 32767, 32767 );
	connect( theline, SIGNAL(returnPressed()), SLOT(okslot()) );
	theline->setFocusPolicy( QWidget::StrongFocus );
	theline->setBackgroundMode( QWidget::PaletteBase );
	theline->setFontPropagation( QWidget::NoChildren );
	theline->setPalettePropagation( QWidget::NoChildren );
	theline->setText( "" );
	theline->setMaxLength( 32767 );
	theline->setEchoMode( myLineEdit::Normal );
	theline->setFrame( TRUE );

	QPushButton* qtarch_PushButton_1;
	qtarch_PushButton_1 = new QPushButton( this, "PushButton_1" );
	qtarch_PushButton_1->setGeometry( 40, 100, 100, 30 );
	qtarch_PushButton_1->setMinimumSize( 0, 0 );
	qtarch_PushButton_1->setMaximumSize( 32767, 32767 );
	connect( qtarch_PushButton_1, SIGNAL(pressed()), SLOT(okslot()) );
	qtarch_PushButton_1->setFocusPolicy( QWidget::TabFocus );
	qtarch_PushButton_1->setBackgroundMode( QWidget::PaletteBackground );
	qtarch_PushButton_1->setFontPropagation( QWidget::NoChildren );
	qtarch_PushButton_1->setPalettePropagation( QWidget::NoChildren );
	qtarch_PushButton_1->setText( transl("OK") );
	qtarch_PushButton_1->setAutoRepeat( FALSE );
	qtarch_PushButton_1->setAutoResize( FALSE );
	qtarch_PushButton_1->setAutoDefault( TRUE );

	QPushButton* qtarch_PushButton_2;
	qtarch_PushButton_2 = new QPushButton( this, "PushButton_2" );
	qtarch_PushButton_2->setGeometry( 240, 100, 100, 30 );
	qtarch_PushButton_2->setMinimumSize( 0, 0 );
	qtarch_PushButton_2->setMaximumSize( 32767, 32767 );
	connect( qtarch_PushButton_2, SIGNAL(pressed()), SLOT(cancelslot()) );
	qtarch_PushButton_2->setFocusPolicy( QWidget::TabFocus );
	qtarch_PushButton_2->setBackgroundMode( QWidget::PaletteBackground );
	qtarch_PushButton_2->setFontPropagation( QWidget::NoChildren );
	qtarch_PushButton_2->setPalettePropagation( QWidget::NoChildren );
	qtarch_PushButton_2->setText( transl("Cancel") );
	qtarch_PushButton_2->setAutoRepeat( FALSE );
	qtarch_PushButton_2->setAutoResize( FALSE );

	QLabel* qtarch_Label_1;
	qtarch_Label_1 = new QLabel( this, "Label_1" );
	qtarch_Label_1->setGeometry( 40, 10, 300, 30 );
	qtarch_Label_1->setMinimumSize( 0, 0 );
	qtarch_Label_1->setMaximumSize( 32767, 32767 );
	{
		QFont font( "helvetica", 14, 75, 0 );
		font.setStyleHint( (QFont::StyleHint)0 );
		font.setCharSet( (QFont::CharSet)0 );
		qtarch_Label_1->setFont( font );
	}
	qtarch_Label_1->setFocusPolicy( QWidget::NoFocus );
	qtarch_Label_1->setBackgroundMode( QWidget::PaletteBackground );
	qtarch_Label_1->setFontPropagation( QWidget::NoChildren );
	qtarch_Label_1->setPalettePropagation( QWidget::NoChildren );
	qtarch_Label_1->setText( transl("Enter your commands") );
	qtarch_Label_1->setAlignment( 292 );
	qtarch_Label_1->setMargin( -1 );

	resize( 360,150 );
	setMinimumSize( 0, 0 );
	setMaximumSize( 32767, 32767 );
}


AstroCommandData::~AstroCommandData()
{
}
void AstroCommandData::okslot()
{
}
void AstroCommandData::cancelslot()
{
}