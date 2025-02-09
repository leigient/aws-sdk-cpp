﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3-crt/model/CORSRule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Crt
{
namespace Model
{
  class GetBucketCorsResult
  {
  public:
    AWS_S3CRT_API GetBucketCorsResult();
    AWS_S3CRT_API GetBucketCorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CRT_API GetBucketCorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A set of origins and methods (cross-origin access that you want to allow).
     * You can add up to 100 rules to the configuration.</p>
     */
    inline const Aws::Vector<CORSRule>& GetCORSRules() const{ return m_cORSRules; }

    /**
     * <p>A set of origins and methods (cross-origin access that you want to allow).
     * You can add up to 100 rules to the configuration.</p>
     */
    inline void SetCORSRules(const Aws::Vector<CORSRule>& value) { m_cORSRules = value; }

    /**
     * <p>A set of origins and methods (cross-origin access that you want to allow).
     * You can add up to 100 rules to the configuration.</p>
     */
    inline void SetCORSRules(Aws::Vector<CORSRule>&& value) { m_cORSRules = std::move(value); }

    /**
     * <p>A set of origins and methods (cross-origin access that you want to allow).
     * You can add up to 100 rules to the configuration.</p>
     */
    inline GetBucketCorsResult& WithCORSRules(const Aws::Vector<CORSRule>& value) { SetCORSRules(value); return *this;}

    /**
     * <p>A set of origins and methods (cross-origin access that you want to allow).
     * You can add up to 100 rules to the configuration.</p>
     */
    inline GetBucketCorsResult& WithCORSRules(Aws::Vector<CORSRule>&& value) { SetCORSRules(std::move(value)); return *this;}

    /**
     * <p>A set of origins and methods (cross-origin access that you want to allow).
     * You can add up to 100 rules to the configuration.</p>
     */
    inline GetBucketCorsResult& AddCORSRules(const CORSRule& value) { m_cORSRules.push_back(value); return *this; }

    /**
     * <p>A set of origins and methods (cross-origin access that you want to allow).
     * You can add up to 100 rules to the configuration.</p>
     */
    inline GetBucketCorsResult& AddCORSRules(CORSRule&& value) { m_cORSRules.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CORSRule> m_cORSRules;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
