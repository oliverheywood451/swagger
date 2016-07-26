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
 * SWGBuyerCreditCard.h
 * 
 * 
 */

#ifndef SWGBuyerCreditCard_H_
#define SWGBuyerCreditCard_H_

#include <QJsonObject>


#include "SWGObject.h"
#include <QDate>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGBuyerCreditCard: public SWGObject {
public:
    SWGBuyerCreditCard();
    SWGBuyerCreditCard(QString* json);
    virtual ~SWGBuyerCreditCard();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGBuyerCreditCard* fromJson(QString &jsonString);

    QString* getToken();
    void setToken(QString* Token);
QString* getCardType();
    void setCardType(QString* CardType);
QString* getPartialAccountNumber();
    void setPartialAccountNumber(QString* PartialAccountNumber);
QString* getCardholderName();
    void setCardholderName(QString* CardholderName);
QDate* getExpirationDate();
    void setExpirationDate(QDate* ExpirationDate);
SWGObject* getXp();
    void setXp(SWGObject* xp);

private:
    QString* Token;
QString* CardType;
QString* PartialAccountNumber;
QString* CardholderName;
QDate* ExpirationDate;
SWGObject* xp;
};

} /* namespace Swagger */

#endif /* SWGBuyerCreditCard_H_ */
