// Copyright 2016 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef XFA_FXFA_PARSER_CXFA_BOX_H_
#define XFA_FXFA_PARSER_CXFA_BOX_H_

#include <memory>
#include <tuple>
#include <vector>

#include "core/fxcrt/fx_coordinates.h"
#include "xfa/fxfa/parser/cxfa_node.h"

class CXFA_Edge;
class CXFA_Fill;
class CXFA_Graphics;
class CXFA_Margin;
class CXFA_Stroke;

class CXFA_Box : public CXFA_Node {
 public:
  ~CXFA_Box() override;

  bool IsArc() const { return GetElementType() == XFA_Element::Arc; }
  bool IsCircular();

  XFA_AttributeEnum GetHand();
  XFA_AttributeEnum GetPresence();
  std::tuple<XFA_AttributeEnum, bool, float> Get3DStyle();

  int32_t CountEdges();
  CXFA_Edge* GetEdgeIfExists(int32_t nIndex);
  CXFA_Fill* GetFillIfExists() const;
  CXFA_Fill* GetOrCreateFillIfPossible();
  CXFA_Margin* GetMarginIfExists();

  std::vector<CXFA_Stroke*> GetStrokes();

  Optional<int32_t> GetStartAngle();
  Optional<int32_t> GetSweepAngle();

  void Draw(CXFA_Graphics* pGS,
            const CFX_RectF& rtWidget,
            const CFX_Matrix& matrix,
            bool forceRound);

 protected:
  CXFA_Box(CXFA_Document* pDoc,
           XFA_PacketType ePacket,
           uint32_t validPackets,
           XFA_ObjectType oType,
           XFA_Element eType,
           const PropertyData* properties,
           const AttributeData* attributes,
           const WideStringView& elementName,
           std::unique_ptr<CJX_Object> js_node);

 private:
  std::vector<CXFA_Stroke*> GetStrokesInternal(bool bNull);
  void DrawFill(const std::vector<CXFA_Stroke*>& strokes,
                CXFA_Graphics* pGS,
                CFX_RectF rtWidget,
                const CFX_Matrix& matrix,
                bool forceRound);
};

#endif  // XFA_FXFA_PARSER_CXFA_BOX_H_
