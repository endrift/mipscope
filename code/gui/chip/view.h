/****************************************************************************
 **
 ** Copyright (C) 2005-2007 Trolltech ASA. All rights reserved.
 **
 ** This file is part of the demonstration applications of the Qt Toolkit.
 **
 ** This file may be used under the terms of the GNU General Public
 ** License version 2.0 as published by the Free Software Foundation
 ** and appearing in the file LICENSE.GPL included in the packaging of
 ** this file.  Please review the following information to ensure GNU
 ** General Public Licensing requirements will be met:
 ** http://www.trolltech.com/products/qt/opensource.html
 **
 ** If you are unsure which license is appropriate for your use, please
 ** review the following information:
 ** http://www.trolltech.com/products/qt/licensing.html or contact the
 ** sales department at sales@trolltech.com.
 **
 ** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 ** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 **
 ****************************************************************************/

#ifndef VIEW_H
#define VIEW_H

#include <QFrame>
#include <QBasicTimer>

class QGraphicsView;
class QLabel;
class QSlider;
class QToolButton;
class QTimerEvent;
class Chip;
class QGraphicsSceneMouseEvent;

class View : public QFrame
{
   Q_OBJECT

   public:
      View(const QString &name, QWidget *parent = 0);

      QGraphicsView *view() const;
      void setZoom(int value);
      void zoomInOn(Chip *chip, QGraphicsSceneMouseEvent *event);

   protected:
      void timerEvent(QTimerEvent *event);
      
   private slots:
      void resetView();
      void setResetButtonEnabled();
      void setupMatrix();
      void toggleOpenGL();
      void toggleAntialiasing();
      void print();

      void zoomIn();
      void zoomOut();
      void rotateLeft();
      void rotateRight();

   private:
      QGraphicsView *graphicsView;
      QLabel *label;
      QToolButton *openGlButton;
      QToolButton *antialiasButton;
      QToolButton *printButton;
      QToolButton *resetButton;
      QSlider *zoomSlider;
      QSlider *rotateSlider;

      Chip *m_active;
      QBasicTimer m_timer;
};

#endif
