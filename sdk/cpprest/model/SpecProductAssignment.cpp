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



#include "SpecProductAssignment.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

SpecProductAssignment::SpecProductAssignment()
{
    m_SpecID = U("");
    m_SpecIDIsSet = false;
    m_ProductID = U("");
    m_ProductIDIsSet = false;
    m_DefinesVariant = false;
    m_DefinesVariantIsSet = false;
    
}

SpecProductAssignment::~SpecProductAssignment()
{
}

void SpecProductAssignment::validate() 
{
    // TODO: implement validation
}

web::json::value SpecProductAssignment::toJson() const
{
    web::json::value val = web::json::value::object();
     
	if(m_SpecIDIsSet)
    {
        val[U("SpecID")] = ModelBase::toJson(m_SpecID);
    }
    if(m_ProductIDIsSet)
    {
        val[U("ProductID")] = ModelBase::toJson(m_ProductID);
    }
    if(m_DefinesVariantIsSet)
    {
        val[U("DefinesVariant")] = ModelBase::toJson(m_DefinesVariant);
    }
    

    return val;
}

void SpecProductAssignment::fromJson(web::json::value& val)
{
    if(val.has_field(U("SpecID")))
    {
        setSpecID(ModelBase::stringFromJson(val[U("SpecID")]));
                
    }
    if(val.has_field(U("ProductID")))
    {
        setProductID(ModelBase::stringFromJson(val[U("ProductID")]));
                
    }
    if(val.has_field(U("DefinesVariant")))
    {
        setDefinesVariant(ModelBase::boolFromJson(val[U("DefinesVariant")]));
    }
    
}

void SpecProductAssignment::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	if(m_SpecIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("SpecID"), m_SpecID));
                
    }
    if(m_ProductIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("ProductID"), m_ProductID));
                
    }
    if(m_DefinesVariantIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("DefinesVariant"), m_DefinesVariant));
    }
    
}

void SpecProductAssignment::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    if(multipart->hasContent(U("SpecID")))
    {
        setSpecID(ModelBase::stringFromHttpContent(multipart->getContent(U("SpecID"))));
                
    }
    if(multipart->hasContent(U("ProductID")))
    {
        setProductID(ModelBase::stringFromHttpContent(multipart->getContent(U("ProductID"))));
                
    }
    if(multipart->hasContent(U("DefinesVariant")))
    {
        setDefinesVariant(ModelBase::boolFromHttpContent(multipart->getContent(U("DefinesVariant"))));
    }
    
}
    
   
utility::string_t SpecProductAssignment::getSpecID() const
{
	return m_SpecID;
}
void SpecProductAssignment::setSpecID(utility::string_t value)
{
	m_SpecID = value;
    m_SpecIDIsSet = true;
}
bool SpecProductAssignment::SpecIDIsSet() const
{
    return m_SpecIDIsSet;
}
void SpecProductAssignment::unsetSpecID() 
{
    m_SpecIDIsSet = false;
}
utility::string_t SpecProductAssignment::getProductID() const
{
	return m_ProductID;
}
void SpecProductAssignment::setProductID(utility::string_t value)
{
	m_ProductID = value;
    m_ProductIDIsSet = true;
}
bool SpecProductAssignment::ProductIDIsSet() const
{
    return m_ProductIDIsSet;
}
void SpecProductAssignment::unsetProductID() 
{
    m_ProductIDIsSet = false;
}
bool SpecProductAssignment::getDefinesVariant() const
{
	return m_DefinesVariant;
}
void SpecProductAssignment::setDefinesVariant(bool value)
{
	m_DefinesVariant = value;
    m_DefinesVariantIsSet = true;
}
bool SpecProductAssignment::DefinesVariantIsSet() const
{
    return m_DefinesVariantIsSet;
}
void SpecProductAssignment::unsetDefinesVariant() 
{
    m_DefinesVariantIsSet = false;
}

}
}
}
}
