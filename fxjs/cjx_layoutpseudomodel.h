// Copyright 2017 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef FXJS_CJX_LAYOUTPSEUDOMODEL_H_
#define FXJS_CJX_LAYOUTPSEUDOMODEL_H_

#include <vector>

#include "fxjs/CJX_Define.h"
#include "fxjs/cjx_object.h"

enum XFA_LAYOUTMODEL_HWXY {
  XFA_LAYOUTMODEL_H,
  XFA_LAYOUTMODEL_W,
  XFA_LAYOUTMODEL_X,
  XFA_LAYOUTMODEL_Y
};

class CFXJSE_Arguments;
class CFXJSE_Value;
class CScript_LayoutPseudoModel;
class CXFA_LayoutProcessor;
class CXFA_Node;

class CJX_LayoutPseudoModel : public CJX_Object {
 public:
  explicit CJX_LayoutPseudoModel(CScript_LayoutPseudoModel* model);
  ~CJX_LayoutPseudoModel() override;

  void Ready(CFXJSE_Value* pValue, bool bSetting, XFA_Attribute eAttribute);

  JS_METHOD(absPage, CJX_LayoutPseudoModel);
  JS_METHOD(absPageCount, CJX_LayoutPseudoModel);
  JS_METHOD(absPageCountInBatch, CJX_LayoutPseudoModel);
  JS_METHOD(absPageInBatch, CJX_LayoutPseudoModel);
  JS_METHOD(absPageSpan, CJX_LayoutPseudoModel);
  JS_METHOD(h, CJX_LayoutPseudoModel);
  JS_METHOD(page, CJX_LayoutPseudoModel);
  JS_METHOD(pageContent, CJX_LayoutPseudoModel);
  JS_METHOD(pageCount, CJX_LayoutPseudoModel);
  JS_METHOD(pageSpan, CJX_LayoutPseudoModel);
  JS_METHOD(relayout, CJX_LayoutPseudoModel);
  JS_METHOD(relayoutPageArea, CJX_LayoutPseudoModel);
  JS_METHOD(sheet, CJX_LayoutPseudoModel);
  JS_METHOD(sheetCount, CJX_LayoutPseudoModel);
  JS_METHOD(sheetCountInBatch, CJX_LayoutPseudoModel);
  JS_METHOD(sheetInBatch, CJX_LayoutPseudoModel);
  JS_METHOD(w, CJX_LayoutPseudoModel);
  JS_METHOD(x, CJX_LayoutPseudoModel);
  JS_METHOD(y, CJX_LayoutPseudoModel);

 private:
  void NumberedPageCount(CFXJSE_Arguments* pArguments, bool bNumbered);
  void HWXY(CFXJSE_Arguments* pArguments, XFA_LAYOUTMODEL_HWXY layoutModel);
  std::vector<CXFA_Node*> GetObjArray(CXFA_LayoutProcessor* pDocLayout,
                                      int32_t iPageNo,
                                      const WideString& wsType,
                                      bool bOnPageArea);
  void PageInternals(CFXJSE_Arguments* pArguments, bool bAbsPage);

  static const CJX_MethodSpec MethodSpecs[];
};

#endif  // FXJS_CJX_LAYOUTPSEUDOMODEL_H_
