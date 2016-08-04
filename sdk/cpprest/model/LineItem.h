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
 * LineItem.h
 * 
 * 
 */

#ifndef LineItem_H_
#define LineItem_H_


#include "ModelBase.h"

#include "Number.h"
#include "ShipmentItem.h"
#include "Object.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  LineItem
	: public ModelBase
{
public:
    LineItem();
    virtual ~LineItem();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// LineItem members
	   
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
    utility::string_t getProductID() const;
    void setProductID(utility::string_t value);
    bool ProductIDIsSet() const;
    void unsetProductID();
    /// <summary>
    /// 
    /// </summary>
    int32_t getQuantity() const;
    void setQuantity(int32_t value);
    bool QuantityIsSet() const;
    void unsetQuantity();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Number> getUnitPrice() const;
    void setUnitPrice(std::shared_ptr<Number> value);
    bool UnitPriceIsSet() const;
    void unsetUnitPrice();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCostCenter() const;
    void setCostCenter(utility::string_t value);
    bool CostCenterIsSet() const;
    void unsetCostCenter();
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getDateNeeded() const;
    void setDateNeeded(utility::datetime value);
    bool DateNeededIsSet() const;
    void unsetDateNeeded();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getShippingAccount() const;
    void setShippingAccount(utility::string_t value);
    bool ShippingAccountIsSet() const;
    void unsetShippingAccount();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getShippingAddressID() const;
    void setShippingAddressID(utility::string_t value);
    bool ShippingAddressIDIsSet() const;
    void unsetShippingAddressID();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getShipfromAddressID() const;
    void setShipfromAddressID(utility::string_t value);
    bool ShipfromAddressIDIsSet() const;
    void unsetShipfromAddressID();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getShipperID() const;
    void setShipperID(utility::string_t value);
    bool ShipperIDIsSet() const;
    void unsetShipperID();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ShipmentItem>>& getSpecs();
    bool SpecsIsSet() const;
    void unsetSpecs();
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
utility::string_t m_ProductID;
    bool m_ProductIDIsSet;
int32_t m_Quantity;
    bool m_QuantityIsSet;
std::shared_ptr<Number> m_UnitPrice;
    bool m_UnitPriceIsSet;
utility::string_t m_CostCenter;
    bool m_CostCenterIsSet;
utility::datetime m_DateNeeded;
    bool m_DateNeededIsSet;
utility::string_t m_ShippingAccount;
    bool m_ShippingAccountIsSet;
utility::string_t m_ShippingAddressID;
    bool m_ShippingAddressIDIsSet;
utility::string_t m_ShipfromAddressID;
    bool m_ShipfromAddressIDIsSet;
utility::string_t m_ShipperID;
    bool m_ShipperIDIsSet;
std::vector<std::shared_ptr<ShipmentItem>> m_Specs;
    bool m_SpecsIsSet;
std::shared_ptr<Object> m_Xp;
    bool m_XpIsSet;
};

}
}
}
}

#endif /* LineItem_H_ */