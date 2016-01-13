//Copyright 2015 Ryan Wick

//This file is part of Bandage

//Bandage is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.

//Bandage is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

//You should have received a copy of the GNU General Public License
//along with Bandage.  If not, see <http://www.gnu.org/licenses/>.


#ifndef GRAPHLAYOUTWORKER_H
#define GRAPHLAYOUTWORKER_H

#include <QObject>
#include "../ogdf/energybased/FMMMLayout.h"
#include "../ogdf/basic/GraphAttributes.h"


class GraphLayoutWorker : public QObject
{
    Q_OBJECT

public:
    GraphLayoutWorker(ogdf::FMMMLayout * fmmm, ogdf::GraphAttributes * graphAttributes,
                      int graphLayoutQuality, int segmentLength);

    ogdf::FMMMLayout * m_fmmm;
    ogdf::GraphAttributes * m_graphAttributes;
    int m_graphLayoutQuality;
    int m_segmentLength;

public slots:
    void layoutGraph();

signals:
    void finishedLayout();
};

#endif // GRAPHLAYOUTWORKER_H
