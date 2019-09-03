/*=========================================================================

Library:   MeasurementExplorer

Copyright 2019 Kitware Inc. 28 Corporate Drive,
Clifton Park, NY, 12065, USA.

All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

=========================================================================*/

#include "ClickableUltrasound.h"

#include "MeasurementExplorerUI.h"
#include <iomanip>
#include <QMouseEvent>
#include <iostream>


ClickableUltrasound::ClickableUltrasound(QWidget *parent) 
: QLabel(parent) 
{
}

void ClickableUltrasound::mousePressEvent(QMouseEvent * event)
{
  QPoint pos = event->pos();
  if (mainWindow)
    {
    mainWindow->OnUSClicked(pos);
    }
}