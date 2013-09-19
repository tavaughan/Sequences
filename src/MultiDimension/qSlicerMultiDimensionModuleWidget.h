/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

#ifndef __qSlicerMultiDimensionModuleWidget_h
#define __qSlicerMultiDimensionModuleWidget_h

// SlicerQt includes
#include "qSlicerAbstractModuleWidget.h"

#include "qSlicerMultiDimensionModuleExport.h"

class qSlicerMultiDimensionModuleWidgetPrivate;
class vtkMRMLNode;

/// \ingroup Slicer_QtModules_ExtensionTemplate
class Q_SLICER_QTMODULES_MULTIDIMENSION_EXPORT qSlicerMultiDimensionModuleWidget :
  public qSlicerAbstractModuleWidget
{
  Q_OBJECT

public:

  typedef qSlicerAbstractModuleWidget Superclass;
  qSlicerMultiDimensionModuleWidget(QWidget *parent=0);
  virtual ~qSlicerMultiDimensionModuleWidget();

public slots:

  void onRootNodeChanged();
  void onSequenceNodeChanged();

  void onAddDataNodeButtonClicked();
  void onRemoveDataNodeButtonClicked();

  void onRemoveSequenceNodeButtonClicked();
  //void onHideDataNodesChecked();
  void onAddSequenceNodeButtonClicked();

protected:
  QScopedPointer<qSlicerMultiDimensionModuleWidgetPrivate> d_ptr;
  
  virtual void setup();

protected slots:

  void UpdateRootNode();
  void UpdateSequenceNode();

private:
  Q_DECLARE_PRIVATE(qSlicerMultiDimensionModuleWidget);
  Q_DISABLE_COPY(qSlicerMultiDimensionModuleWidget);
};

#endif
