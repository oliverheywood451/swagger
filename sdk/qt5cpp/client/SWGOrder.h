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
 * SWGOrder.h
 * 
 * 
 */

#ifndef SWGOrder_H_
#define SWGOrder_H_

#include <QJsonObject>


#include "SWGNumber.h"
#include "SWGObject.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGOrder: public SWGObject {
public:
    SWGOrder();
    SWGOrder(QString* json);
    virtual ~SWGOrder();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGOrder* fromJson(QString &jsonString);

    QString* getID();
    void setID(QString* ID);
QString* getType();
    void setType(QString* Type);
QString* getFromUserID();
    void setFromUserID(QString* FromUserID);
QString* getBillingAddressID();
    void setBillingAddressID(QString* BillingAddressID);
QString* getShippingAddressID();
    void setShippingAddressID(QString* ShippingAddressID);
QString* getComments();
    void setComments(QString* Comments);
SWGNumber* getShippingCost();
    void setShippingCost(SWGNumber* ShippingCost);
SWGNumber* getTaxCost();
    void setTaxCost(SWGNumber* TaxCost);
SWGObject* getXp();
    void setXp(SWGObject* xp);

private:
    QString* ID;
QString* Type;
QString* FromUserID;
QString* BillingAddressID;
QString* ShippingAddressID;
QString* Comments;
SWGNumber* ShippingCost;
SWGNumber* TaxCost;
SWGObject* xp;
};

} /* namespace Swagger */

#endif /* SWGOrder_H_ */
