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
 * PriceBreak.h
 * 
 * 
 */

#ifndef PriceBreak_H_
#define PriceBreak_H_


#include "ModelBase.h"

#include "Number.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  PriceBreak
	: public ModelBase
{
public:
    PriceBreak();
    virtual ~PriceBreak();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// PriceBreak members
	   
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
    std::shared_ptr<Number> getPrice() const;
    void setPrice(std::shared_ptr<Number> value);
    bool PriceIsSet() const;
    void unsetPrice();
    
protected:
    int32_t m_Quantity;
    bool m_QuantityIsSet;
std::shared_ptr<Number> m_Price;
    bool m_PriceIsSet;
};

}
}
}
}

#endif /* PriceBreak_H_ */
