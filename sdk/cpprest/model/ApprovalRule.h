/**
 * OrderCloud
 * A full ecommerce backend as a service.
 *
 * OpenAPI spec version: 0.1
 * Contact: ordercloud@four51.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * ApprovalRule.h
 * 
 * 
 */

#ifndef ApprovalRule_H_
#define ApprovalRule_H_


#include "ModelBase.h"

#include "Object.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ApprovalRule
	: public ModelBase
{
public:
    ApprovalRule();
    virtual ~ApprovalRule();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// ApprovalRule members
	   
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getID() const;
    void setID(utility::string_t value);
    bool IDIsSet() const;
    void unsetID();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
    bool NameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    void setDescription(utility::string_t value);
    bool DescriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getApprovingGroupID() const;
    void setApprovingGroupID(utility::string_t value);
    bool ApprovingGroupIDIsSet() const;
    void unsetApprovingGroupID();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRuleExpression() const;
    void setRuleExpression(utility::string_t value);
    bool RuleExpressionIsSet() const;
    void unsetRuleExpression();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getScope() const;
    void setScope(utility::string_t value);
    bool ScopeIsSet() const;
    void unsetScope();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getScopeTimeUnit() const;
    void setScopeTimeUnit(utility::string_t value);
    bool ScopeTimeUnitIsSet() const;
    void unsetScopeTimeUnit();
    /// <summary>
    /// 
    /// </summary>
    int32_t getScopeTimeNumber() const;
    void setScopeTimeNumber(int32_t value);
    bool ScopeTimeNumberIsSet() const;
    void unsetScopeTimeNumber();
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getScopeStartDate() const;
    void setScopeStartDate(utility::datetime value);
    bool ScopeStartDateIsSet() const;
    void unsetScopeStartDate();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getExpireAfterTimeUnit() const;
    void setExpireAfterTimeUnit(utility::string_t value);
    bool ExpireAfterTimeUnitIsSet() const;
    void unsetExpireAfterTimeUnit();
    /// <summary>
    /// 
    /// </summary>
    int32_t getExpireAfterNumber() const;
    void setExpireAfterNumber(int32_t value);
    bool ExpireAfterNumberIsSet() const;
    void unsetExpireAfterNumber();
    /// <summary>
    /// 
    /// </summary>
    bool getApproveOnExpire() const;
    void setApproveOnExpire(bool value);
    bool ApproveOnExpireIsSet() const;
    void unsetApproveOnExpire();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getXp() const;
    void setXp(std::shared_ptr<Object> value);
    bool xpIsSet() const;
    void unsetXp();
    
protected:
    utility::string_t m_ID;
    bool m_IDIsSet;
utility::string_t m_Name;
    bool m_NameIsSet;
utility::string_t m_Description;
    bool m_DescriptionIsSet;
utility::string_t m_ApprovingGroupID;
    bool m_ApprovingGroupIDIsSet;
utility::string_t m_RuleExpression;
    bool m_RuleExpressionIsSet;
utility::string_t m_Scope;
    bool m_ScopeIsSet;
utility::string_t m_ScopeTimeUnit;
    bool m_ScopeTimeUnitIsSet;
int32_t m_ScopeTimeNumber;
    bool m_ScopeTimeNumberIsSet;
utility::datetime m_ScopeStartDate;
    bool m_ScopeStartDateIsSet;
utility::string_t m_ExpireAfterTimeUnit;
    bool m_ExpireAfterTimeUnitIsSet;
int32_t m_ExpireAfterNumber;
    bool m_ExpireAfterNumberIsSet;
bool m_ApproveOnExpire;
    bool m_ApproveOnExpireIsSet;
std::shared_ptr<Object> m_Xp;
    bool m_XpIsSet;
};

}
}
}
}

#endif /* ApprovalRule_H_ */