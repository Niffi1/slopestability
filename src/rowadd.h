/*
    rowadd.h - (c) Michael Weber, Jr. (2012)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ROWADD_H
#define ROWADD_H

#include <QDialog>

namespace Ui {
class RowAdd;
}

class RowAdd : public QDialog
{
    Q_OBJECT
    
public:
    explicit RowAdd(QWidget *parent = 0);
    ~RowAdd();

    double depth;
    double c;
    double phi;
    double gamma;
    
private:
    Ui::RowAdd *ui;
    void accept();
};

#endif // ROWADD_H
