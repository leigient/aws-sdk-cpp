﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents the usage data of a usage plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Usage">AWS
   * API Reference</a></p>
   */
  class GetUsageResult
  {
  public:
    AWS_APIGATEWAY_API GetUsageResult();
    AWS_APIGATEWAY_API GetUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline const Aws::String& GetUsagePlanId() const{ return m_usagePlanId; }

    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline void SetUsagePlanId(const Aws::String& value) { m_usagePlanId = value; }

    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline void SetUsagePlanId(Aws::String&& value) { m_usagePlanId = std::move(value); }

    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline void SetUsagePlanId(const char* value) { m_usagePlanId.assign(value); }

    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline GetUsageResult& WithUsagePlanId(const Aws::String& value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline GetUsageResult& WithUsagePlanId(Aws::String&& value) { SetUsagePlanId(std::move(value)); return *this;}

    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline GetUsageResult& WithUsagePlanId(const char* value) { SetUsagePlanId(value); return *this;}


    /**
     * <p>The starting date of the usage data.</p>
     */
    inline const Aws::String& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The starting date of the usage data.</p>
     */
    inline void SetStartDate(const Aws::String& value) { m_startDate = value; }

    /**
     * <p>The starting date of the usage data.</p>
     */
    inline void SetStartDate(Aws::String&& value) { m_startDate = std::move(value); }

    /**
     * <p>The starting date of the usage data.</p>
     */
    inline void SetStartDate(const char* value) { m_startDate.assign(value); }

    /**
     * <p>The starting date of the usage data.</p>
     */
    inline GetUsageResult& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}

    /**
     * <p>The starting date of the usage data.</p>
     */
    inline GetUsageResult& WithStartDate(Aws::String&& value) { SetStartDate(std::move(value)); return *this;}

    /**
     * <p>The starting date of the usage data.</p>
     */
    inline GetUsageResult& WithStartDate(const char* value) { SetStartDate(value); return *this;}


    /**
     * <p>The ending date of the usage data.</p>
     */
    inline const Aws::String& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The ending date of the usage data.</p>
     */
    inline void SetEndDate(const Aws::String& value) { m_endDate = value; }

    /**
     * <p>The ending date of the usage data.</p>
     */
    inline void SetEndDate(Aws::String&& value) { m_endDate = std::move(value); }

    /**
     * <p>The ending date of the usage data.</p>
     */
    inline void SetEndDate(const char* value) { m_endDate.assign(value); }

    /**
     * <p>The ending date of the usage data.</p>
     */
    inline GetUsageResult& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}

    /**
     * <p>The ending date of the usage data.</p>
     */
    inline GetUsageResult& WithEndDate(Aws::String&& value) { SetEndDate(std::move(value)); return *this;}

    /**
     * <p>The ending date of the usage data.</p>
     */
    inline GetUsageResult& WithEndDate(const char* value) { SetEndDate(value); return *this;}


    
    inline const Aws::String& GetPosition() const{ return m_position; }

    
    inline void SetPosition(const Aws::String& value) { m_position = value; }

    
    inline void SetPosition(Aws::String&& value) { m_position = std::move(value); }

    
    inline void SetPosition(const char* value) { m_position.assign(value); }

    
    inline GetUsageResult& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    
    inline GetUsageResult& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}

    
    inline GetUsageResult& WithPosition(const char* value) { SetPosition(value); return *this;}


    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::Vector<long long>>>& GetItems() const{ return m_items; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline void SetItems(const Aws::Map<Aws::String, Aws::Vector<Aws::Vector<long long>>>& value) { m_items = value; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline void SetItems(Aws::Map<Aws::String, Aws::Vector<Aws::Vector<long long>>>&& value) { m_items = std::move(value); }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline GetUsageResult& WithItems(const Aws::Map<Aws::String, Aws::Vector<Aws::Vector<long long>>>& value) { SetItems(value); return *this;}

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline GetUsageResult& WithItems(Aws::Map<Aws::String, Aws::Vector<Aws::Vector<long long>>>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline GetUsageResult& AddItems(const Aws::String& key, const Aws::Vector<Aws::Vector<long long>>& value) { m_items.emplace(key, value); return *this; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline GetUsageResult& AddItems(Aws::String&& key, const Aws::Vector<Aws::Vector<long long>>& value) { m_items.emplace(std::move(key), value); return *this; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline GetUsageResult& AddItems(const Aws::String& key, Aws::Vector<Aws::Vector<long long>>&& value) { m_items.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline GetUsageResult& AddItems(Aws::String&& key, Aws::Vector<Aws::Vector<long long>>&& value) { m_items.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline GetUsageResult& AddItems(const char* key, Aws::Vector<Aws::Vector<long long>>&& value) { m_items.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline GetUsageResult& AddItems(const char* key, const Aws::Vector<Aws::Vector<long long>>& value) { m_items.emplace(key, value); return *this; }

  private:

    Aws::String m_usagePlanId;

    Aws::String m_startDate;

    Aws::String m_endDate;

    Aws::String m_position;

    Aws::Map<Aws::String, Aws::Vector<Aws::Vector<long long>>> m_items;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
