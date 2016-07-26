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



#include "CategoryAssignment.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

CategoryAssignment::CategoryAssignment()
{
    m_CategoryID = U("");
    m_CategoryIDIsSet = false;
    m_UserID = U("");
    m_UserIDIsSet = false;
    m_UserGroupID = U("");
    m_UserGroupIDIsSet = false;
    
}

CategoryAssignment::~CategoryAssignment()
{
}

void CategoryAssignment::validate() 
{
    // TODO: implement validation
}

web::json::value CategoryAssignment::toJson() const
{
    web::json::value val = web::json::value::object();
     
	if(m_CategoryIDIsSet)
    {
        val[U("CategoryID")] = ModelBase::toJson(m_CategoryID);
    }
    if(m_UserIDIsSet)
    {
        val[U("UserID")] = ModelBase::toJson(m_UserID);
    }
    if(m_UserGroupIDIsSet)
    {
        val[U("UserGroupID")] = ModelBase::toJson(m_UserGroupID);
    }
    

    return val;
}

void CategoryAssignment::fromJson(web::json::value& val)
{
    if(val.has_field(U("CategoryID")))
    {
        setCategoryID(ModelBase::stringFromJson(val[U("CategoryID")]));
                
    }
    if(val.has_field(U("UserID")))
    {
        setUserID(ModelBase::stringFromJson(val[U("UserID")]));
                
    }
    if(val.has_field(U("UserGroupID")))
    {
        setUserGroupID(ModelBase::stringFromJson(val[U("UserGroupID")]));
                
    }
    
}

void CategoryAssignment::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	if(m_CategoryIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("CategoryID"), m_CategoryID));
                
    }
    if(m_UserIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("UserID"), m_UserID));
                
    }
    if(m_UserGroupIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("UserGroupID"), m_UserGroupID));
                
    }
    
}

void CategoryAssignment::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    if(multipart->hasContent(U("CategoryID")))
    {
        setCategoryID(ModelBase::stringFromHttpContent(multipart->getContent(U("CategoryID"))));
                
    }
    if(multipart->hasContent(U("UserID")))
    {
        setUserID(ModelBase::stringFromHttpContent(multipart->getContent(U("UserID"))));
                
    }
    if(multipart->hasContent(U("UserGroupID")))
    {
        setUserGroupID(ModelBase::stringFromHttpContent(multipart->getContent(U("UserGroupID"))));
                
    }
    
}
    
   
utility::string_t CategoryAssignment::getCategoryID() const
{
	return m_CategoryID;
}
void CategoryAssignment::setCategoryID(utility::string_t value)
{
	m_CategoryID = value;
    m_CategoryIDIsSet = true;
}
bool CategoryAssignment::CategoryIDIsSet() const
{
    return m_CategoryIDIsSet;
}
void CategoryAssignment::unsetCategoryID() 
{
    m_CategoryIDIsSet = false;
}
utility::string_t CategoryAssignment::getUserID() const
{
	return m_UserID;
}
void CategoryAssignment::setUserID(utility::string_t value)
{
	m_UserID = value;
    m_UserIDIsSet = true;
}
bool CategoryAssignment::UserIDIsSet() const
{
    return m_UserIDIsSet;
}
void CategoryAssignment::unsetUserID() 
{
    m_UserIDIsSet = false;
}
utility::string_t CategoryAssignment::getUserGroupID() const
{
	return m_UserGroupID;
}
void CategoryAssignment::setUserGroupID(utility::string_t value)
{
	m_UserGroupID = value;
    m_UserGroupIDIsSet = true;
}
bool CategoryAssignment::UserGroupIDIsSet() const
{
    return m_UserGroupIDIsSet;
}
void CategoryAssignment::unsetUserGroupID() 
{
    m_UserGroupIDIsSet = false;
}

}
}
}
}

