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
 * BuyerAddress.h
 * 
 * 
 */

#ifndef BuyerAddress_H_
#define BuyerAddress_H_


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
class  BuyerAddress
	: public ModelBase
{
public:
    BuyerAddress();
    virtual ~BuyerAddress();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// BuyerAddress members
	   
    /// <summary>
    /// 
    /// </summary>
    bool getShipping() const;
    void setShipping(bool value);
    bool ShippingIsSet() const;
    void unsetShipping();
    /// <summary>
    /// 
    /// </summary>
    bool getBilling() const;
    void setBilling(bool value);
    bool BillingIsSet() const;
    void unsetBilling();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCompanyName() const;
    void setCompanyName(utility::string_t value);
    bool CompanyNameIsSet() const;
    void unsetCompanyName();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFirstName() const;
    void setFirstName(utility::string_t value);
    bool FirstNameIsSet() const;
    void unsetFirstName();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLastName() const;
    void setLastName(utility::string_t value);
    bool LastNameIsSet() const;
    void unsetLastName();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStreet1() const;
    void setStreet1(utility::string_t value);
    bool Street1IsSet() const;
    void unsetStreet1();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStreet2() const;
    void setStreet2(utility::string_t value);
    bool Street2IsSet() const;
    void unsetStreet2();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCity() const;
    void setCity(utility::string_t value);
    bool CityIsSet() const;
    void unsetCity();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getState() const;
    void setState(utility::string_t value);
    bool StateIsSet() const;
    void unsetState();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getZip() const;
    void setZip(utility::string_t value);
    bool ZipIsSet() const;
    void unsetZip();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCountry() const;
    void setCountry(utility::string_t value);
    bool CountryIsSet() const;
    void unsetCountry();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPhone() const;
    void setPhone(utility::string_t value);
    bool PhoneIsSet() const;
    void unsetPhone();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAddressName() const;
    void setAddressName(utility::string_t value);
    bool AddressNameIsSet() const;
    void unsetAddressName();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getXp() const;
    void setXp(std::shared_ptr<Object> value);
    bool xpIsSet() const;
    void unsetXp();
    
protected:
    bool m_Shipping;
    bool m_ShippingIsSet;
bool m_Billing;
    bool m_BillingIsSet;
utility::string_t m_CompanyName;
    bool m_CompanyNameIsSet;
utility::string_t m_FirstName;
    bool m_FirstNameIsSet;
utility::string_t m_LastName;
    bool m_LastNameIsSet;
utility::string_t m_Street1;
    bool m_Street1IsSet;
utility::string_t m_Street2;
    bool m_Street2IsSet;
utility::string_t m_City;
    bool m_CityIsSet;
utility::string_t m_State;
    bool m_StateIsSet;
utility::string_t m_Zip;
    bool m_ZipIsSet;
utility::string_t m_Country;
    bool m_CountryIsSet;
utility::string_t m_Phone;
    bool m_PhoneIsSet;
utility::string_t m_AddressName;
    bool m_AddressNameIsSet;
std::shared_ptr<Object> m_Xp;
    bool m_XpIsSet;
};

}
}
}
}

#endif /* BuyerAddress_H_ */
