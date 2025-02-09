﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/ListFunctionsByCodeSigningConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFunctionsByCodeSigningConfigResult::ListFunctionsByCodeSigningConfigResult()
{
}

ListFunctionsByCodeSigningConfigResult::ListFunctionsByCodeSigningConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFunctionsByCodeSigningConfigResult& ListFunctionsByCodeSigningConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }

  if(jsonValue.ValueExists("FunctionArns"))
  {
    Aws::Utils::Array<JsonView> functionArnsJsonList = jsonValue.GetArray("FunctionArns");
    for(unsigned functionArnsIndex = 0; functionArnsIndex < functionArnsJsonList.GetLength(); ++functionArnsIndex)
    {
      m_functionArns.push_back(functionArnsJsonList[functionArnsIndex].AsString());
    }
  }



  return *this;
}
