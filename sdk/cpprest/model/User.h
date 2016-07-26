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
 * User.h
 * 
 * 
 */

#ifndef User_H_
#define User_H_


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
class  User
	: public ModelBase
{
public:
    User();
    virtual ~User();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// User members
	   
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
    utility::string_t getUsername() const;
    void setUsername(utility::string_t value);
    bool UsernameIsSet() const;
    void unsetUsername();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPassword() const;
    void setPassword(utility::string_t value);
    bool PasswordIsSet() const;
    void unsetPassword();
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
    utility::string_t getEmail() const;
    void setEmail(utility::string_t value);
    bool EmailIsSet() const;
    void unsetEmail();
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
    utility::datetime getTermsAccepted() const;
    void setTermsAccepted(utility::datetime value);
    bool TermsAcceptedIsSet() const;
    void unsetTermsAccepted();
    /// <summary>
    /// 
    /// </summary>
    bool getActive() const;
    void setActive(bool value);
    bool ActiveIsSet() const;
    void unsetActive();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getXp() const;
    void setXp(std::shared_ptr<Object> value);
    bool xpIsSet() const;
    void unsetXp();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSecurityProfileID() const;
    void setSecurityProfileID(utility::string_t value);
    bool SecurityProfileIDIsSet() const;
    void unsetSecurityProfileID();
    
protected:
    utility::string_t m_ID;
    bool m_IDIsSet;
utility::string_t m_Username;
    bool m_UsernameIsSet;
utility::string_t m_Password;
    bool m_PasswordIsSet;
utility::string_t m_FirstName;
    bool m_FirstNameIsSet;
utility::string_t m_LastName;
    bool m_LastNameIsSet;
utility::string_t m_Email;
    bool m_EmailIsSet;
utility::string_t m_Phone;
    bool m_PhoneIsSet;
utility::datetime m_TermsAccepted;
    bool m_TermsAcceptedIsSet;
bool m_Active;
    bool m_ActiveIsSet;
std::shared_ptr<Object> m_Xp;
    bool m_XpIsSet;
utility::string_t m_SecurityProfileID;
    bool m_SecurityProfileIDIsSet;
};

}
}
}
}

#endif /* User_H_ */
