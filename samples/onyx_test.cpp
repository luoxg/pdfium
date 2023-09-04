//
// Created by luo on 2023/9/2.
//

#include "core/fpdfapi/parser/cpdf_document.h"
#include "core/fpdfapi/page/cpdf_docpagedata.h"
#include "core/fpdfapi/page/cpdf_pagemodule.h"
#include "core/fpdfapi/render/cpdf_docrenderdata.h"
#include "core/fpdfapi/parser/cpdf_parser.h"
#include "core/fxcrt/fx_stream.h"

int main(int argc, const char* argv[]) {
  CPDF_PageModule::Create();
  auto doc = std::make_unique<CPDF_Document>(std::make_unique<CPDF_DocRenderData>(),
                                             std::make_unique<CPDF_DocPageData>());
  std::string path = "/home/luo/WorkSpace/resources/pdf/test.pdf";
  RetainPtr<IFX_SeekableReadStream> fileAccess = IFX_SeekableReadStream::CreateFromFilename(path.c_str());
  CPDF_Parser::Error error = doc->LoadDoc(std::move(fileAccess), "123456");
  doc->LoadPages();
  printf("error = %d\n", error);
  return 0;
}