///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2012 maintech GmbH, Otto-Hahn-Str. 15, 97204 Hoechberg, Germany //
// written by Christian Daniel                                                   //
// Copyright (C) 2015-2020 Edouard Griffiths, F4EXB <f4exb06@gmail.com>          //
//                                                                               //
// Subclasses QTextEdit to implement and editingFinished() signal like           //
// QLineEdit's one                                                               //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
// (at your option) any later version.                                           //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#include <QTextEdit>

#include "export.h"

class SDRGUI_API CustomTextEdit : public QTextEdit
{
    Q_OBJECT
public:
    CustomTextEdit(QWidget* parent = nullptr);

protected:
    void focusInEvent(QFocusEvent* e);
    void focusOutEvent(QFocusEvent *e);

signals:
    void editingFinished();

private slots:
    void handleTextChange();

private:
    bool textChanged, trackChange;
};
