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



#include "Order.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Order::Order()
{
    m_ID = U("");
    m_IDIsSet = false;
    m_Type = U("");
    m_TypeIsSet = false;
    m_FromUserID = U("");
    m_FromUserIDIsSet = false;
    m_BillingAddressID = U("");
    m_BillingAddressIDIsSet = false;
    m_ShippingAddressID = U("");
    m_ShippingAddressIDIsSet = false;
    m_Comments = U("");
    m_CommentsIsSet = false;
    m_ShippingCostIsSet = false;
    m_TaxCostIsSet = false;
    m_XpIsSet = false;
    
}

Order::~Order()
{
}

void Order::validate() 
{
    // TODO: implement validation
}

web::json::value Order::toJson() const
{
    web::json::value val = web::json::value::object();
     
	if(m_IDIsSet)
    {
        val[U("ID")] = ModelBase::toJson(m_ID);
    }
    if(m_TypeIsSet)
    {
        val[U("Type")] = ModelBase::toJson(m_Type);
    }
    if(m_FromUserIDIsSet)
    {
        val[U("FromUserID")] = ModelBase::toJson(m_FromUserID);
    }
    if(m_BillingAddressIDIsSet)
    {
        val[U("BillingAddressID")] = ModelBase::toJson(m_BillingAddressID);
    }
    if(m_ShippingAddressIDIsSet)
    {
        val[U("ShippingAddressID")] = ModelBase::toJson(m_ShippingAddressID);
    }
    if(m_CommentsIsSet)
    {
        val[U("Comments")] = ModelBase::toJson(m_Comments);
    }
    if(m_ShippingCostIsSet)
    {
        val[U("ShippingCost")] = ModelBase::toJson(m_ShippingCost);
    }
    if(m_TaxCostIsSet)
    {
        val[U("TaxCost")] = ModelBase::toJson(m_TaxCost);
    }
    if(m_XpIsSet)
    {
        val[U("xp")] = ModelBase::toJson(m_Xp);
    }
    

    return val;
}

void Order::fromJson(web::json::value& val)
{
    if(val.has_field(U("ID")))
    {
        setID(ModelBase::stringFromJson(val[U("ID")]));
                
    }
    if(val.has_field(U("Type")))
    {
        setType(ModelBase::stringFromJson(val[U("Type")]));
                
    }
    if(val.has_field(U("FromUserID")))
    {
        setFromUserID(ModelBase::stringFromJson(val[U("FromUserID")]));
                
    }
    if(val.has_field(U("BillingAddressID")))
    {
        setBillingAddressID(ModelBase::stringFromJson(val[U("BillingAddressID")]));
                
    }
    if(val.has_field(U("ShippingAddressID")))
    {
        setShippingAddressID(ModelBase::stringFromJson(val[U("ShippingAddressID")]));
                
    }
    if(val.has_field(U("Comments")))
    {
        setComments(ModelBase::stringFromJson(val[U("Comments")]));
                
    }
    if(val.has_field(U("ShippingCost")))
    {
        if(!val[U("ShippingCost")].is_null()) 
        {
            std::shared_ptr<Number> newItem(0.0);
            newItem->fromJson(val[U("ShippingCost")]);
            setShippingCost( newItem );
        }
                
    }
    if(val.has_field(U("TaxCost")))
    {
        if(!val[U("TaxCost")].is_null()) 
        {
            std::shared_ptr<Number> newItem(0.0);
            newItem->fromJson(val[U("TaxCost")]);
            setTaxCost( newItem );
        }
                
    }
    if(val.has_field(U("xp")))
    {
        if(!val[U("xp")].is_null()) 
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(val[U("xp")]);
            setXp( newItem );
        }
                
    }
    
}

void Order::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	if(m_IDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("ID"), m_ID));
                
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("Type"), m_Type));
                
    }
    if(m_FromUserIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("FromUserID"), m_FromUserID));
                
    }
    if(m_BillingAddressIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("BillingAddressID"), m_BillingAddressID));
                
    }
    if(m_ShippingAddressIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("ShippingAddressID"), m_ShippingAddressID));
                
    }
    if(m_CommentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("Comments"), m_Comments));
                
    }
    if(m_ShippingCostIsSet)
    {
        if (m_ShippingCost.get())
        {
            m_ShippingCost->toMultipart(multipart, U("ShippingCost."));
        }
                
    }
    if(m_TaxCostIsSet)
    {
        if (m_TaxCost.get())
        {
            m_TaxCost->toMultipart(multipart, U("TaxCost."));
        }
                
    }
    if(m_XpIsSet)
    {
        if (m_Xp.get())
        {
            m_Xp->toMultipart(multipart, U("xp."));
        }
                
    }
    
}

void Order::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    if(multipart->hasContent(U("ID")))
    {
        setID(ModelBase::stringFromHttpContent(multipart->getContent(U("ID"))));
                
    }
    if(multipart->hasContent(U("Type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("Type"))));
                
    }
    if(multipart->hasContent(U("FromUserID")))
    {
        setFromUserID(ModelBase::stringFromHttpContent(multipart->getContent(U("FromUserID"))));
                
    }
    if(multipart->hasContent(U("BillingAddressID")))
    {
        setBillingAddressID(ModelBase::stringFromHttpContent(multipart->getContent(U("BillingAddressID"))));
                
    }
    if(multipart->hasContent(U("ShippingAddressID")))
    {
        setShippingAddressID(ModelBase::stringFromHttpContent(multipart->getContent(U("ShippingAddressID"))));
                
    }
    if(multipart->hasContent(U("Comments")))
    {
        setComments(ModelBase::stringFromHttpContent(multipart->getContent(U("Comments"))));
                
    }
    if(multipart->hasContent(U("ShippingCost")))
    {
        if(multipart->hasContent(U("ShippingCost")))
        {
            std::shared_ptr<Number> newItem(0.0);
            newItem->fromMultiPart(multipart, U("ShippingCost."));
            setShippingCost( newItem );
        }
                
    }
    if(multipart->hasContent(U("TaxCost")))
    {
        if(multipart->hasContent(U("TaxCost")))
        {
            std::shared_ptr<Number> newItem(0.0);
            newItem->fromMultiPart(multipart, U("TaxCost."));
            setTaxCost( newItem );
        }
                
    }
    if(multipart->hasContent(U("xp")))
    {
        if(multipart->hasContent(U("xp")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, U("xp."));
            setXp( newItem );
        }
                
    }
    
}
    
   
utility::string_t Order::getID() const
{
	return m_ID;
}
void Order::setID(utility::string_t value)
{
	m_ID = value;
    m_IDIsSet = true;
}
bool Order::IDIsSet() const
{
    return m_IDIsSet;
}
void Order::unsetID() 
{
    m_IDIsSet = false;
}
utility::string_t Order::getType() const
{
	return m_Type;
}
void Order::setType(utility::string_t value)
{
	m_Type = value;
    m_TypeIsSet = true;
}
bool Order::TypeIsSet() const
{
    return m_TypeIsSet;
}
void Order::unsetType() 
{
    m_TypeIsSet = false;
}
utility::string_t Order::getFromUserID() const
{
	return m_FromUserID;
}
void Order::setFromUserID(utility::string_t value)
{
	m_FromUserID = value;
    m_FromUserIDIsSet = true;
}
bool Order::FromUserIDIsSet() const
{
    return m_FromUserIDIsSet;
}
void Order::unsetFromUserID() 
{
    m_FromUserIDIsSet = false;
}
utility::string_t Order::getBillingAddressID() const
{
	return m_BillingAddressID;
}
void Order::setBillingAddressID(utility::string_t value)
{
	m_BillingAddressID = value;
    m_BillingAddressIDIsSet = true;
}
bool Order::BillingAddressIDIsSet() const
{
    return m_BillingAddressIDIsSet;
}
void Order::unsetBillingAddressID() 
{
    m_BillingAddressIDIsSet = false;
}
utility::string_t Order::getShippingAddressID() const
{
	return m_ShippingAddressID;
}
void Order::setShippingAddressID(utility::string_t value)
{
	m_ShippingAddressID = value;
    m_ShippingAddressIDIsSet = true;
}
bool Order::ShippingAddressIDIsSet() const
{
    return m_ShippingAddressIDIsSet;
}
void Order::unsetShippingAddressID() 
{
    m_ShippingAddressIDIsSet = false;
}
utility::string_t Order::getComments() const
{
	return m_Comments;
}
void Order::setComments(utility::string_t value)
{
	m_Comments = value;
    m_CommentsIsSet = true;
}
bool Order::CommentsIsSet() const
{
    return m_CommentsIsSet;
}
void Order::unsetComments() 
{
    m_CommentsIsSet = false;
}
std::shared_ptr<Number> Order::getShippingCost() const
{
	return m_ShippingCost;
}
void Order::setShippingCost(std::shared_ptr<Number> value)
{
	m_ShippingCost = value;
    m_ShippingCostIsSet = true;
}
bool Order::ShippingCostIsSet() const
{
    return m_ShippingCostIsSet;
}
void Order::unsetShippingCost() 
{
    m_ShippingCostIsSet = false;
}
std::shared_ptr<Number> Order::getTaxCost() const
{
	return m_TaxCost;
}
void Order::setTaxCost(std::shared_ptr<Number> value)
{
	m_TaxCost = value;
    m_TaxCostIsSet = true;
}
bool Order::TaxCostIsSet() const
{
    return m_TaxCostIsSet;
}
void Order::unsetTaxCost() 
{
    m_TaxCostIsSet = false;
}
std::shared_ptr<Object> Order::getXp() const
{
	return m_Xp;
}
void Order::setXp(std::shared_ptr<Object> value)
{
	m_Xp = value;
    m_XpIsSet = true;
}
bool Order::xpIsSet() const
{
    return m_XpIsSet;
}
void Order::unsetXp() 
{
    m_XpIsSet = false;
}

}
}
}
}

