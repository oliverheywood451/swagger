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


#include "SWGBuyerCreditCard.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGBuyerCreditCard::SWGBuyerCreditCard(QString* json) {
    init();
    this->fromJson(*json);
}

SWGBuyerCreditCard::SWGBuyerCreditCard() {
    init();
}

SWGBuyerCreditCard::~SWGBuyerCreditCard() {
    this->cleanup();
}

void
SWGBuyerCreditCard::init() {
    Token = new QString("");
CardType = new QString("");
PartialAccountNumber = new QString("");
CardholderName = new QString("");
ExpirationDate = NULL;
xp = NULL;
}

void
SWGBuyerCreditCard::cleanup() {
    if(Token != NULL) {
        delete Token;
    }
if(CardType != NULL) {
        delete CardType;
    }
if(PartialAccountNumber != NULL) {
        delete PartialAccountNumber;
    }
if(CardholderName != NULL) {
        delete CardholderName;
    }
if(ExpirationDate != NULL) {
        delete ExpirationDate;
    }
if(xp != NULL) {
        delete xp;
    }
}

SWGBuyerCreditCard*
SWGBuyerCreditCard::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGBuyerCreditCard::fromJsonObject(QJsonObject &pJson) {
    setValue(&Token, pJson["Token"], "QString", "QString");
setValue(&CardType, pJson["CardType"], "QString", "QString");
setValue(&PartialAccountNumber, pJson["PartialAccountNumber"], "QString", "QString");
setValue(&CardholderName, pJson["CardholderName"], "QString", "QString");
setValue(&ExpirationDate, pJson["ExpirationDate"], "QDate", "QDate");
setValue(&xp, pJson["xp"], "SWGObject", "SWGObject");
}

QString
SWGBuyerCreditCard::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGBuyerCreditCard::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("Token"), Token, obj, QString("QString"));
    
        

    
    toJsonValue(QString("CardType"), CardType, obj, QString("QString"));
    
        

    
    toJsonValue(QString("PartialAccountNumber"), PartialAccountNumber, obj, QString("QString"));
    
        

    
    toJsonValue(QString("CardholderName"), CardholderName, obj, QString("QString"));
    
        

    
    toJsonValue(QString("ExpirationDate"), ExpirationDate, obj, QString("QDate"));
    
        

    
    toJsonValue(QString("xp"), xp, obj, QString("SWGObject"));
    
        

    return obj;
}

QString*
SWGBuyerCreditCard::getToken() {
    return Token;
}
void
SWGBuyerCreditCard::setToken(QString* Token) {
    this->Token = Token;
}

QString*
SWGBuyerCreditCard::getCardType() {
    return CardType;
}
void
SWGBuyerCreditCard::setCardType(QString* CardType) {
    this->CardType = CardType;
}

QString*
SWGBuyerCreditCard::getPartialAccountNumber() {
    return PartialAccountNumber;
}
void
SWGBuyerCreditCard::setPartialAccountNumber(QString* PartialAccountNumber) {
    this->PartialAccountNumber = PartialAccountNumber;
}

QString*
SWGBuyerCreditCard::getCardholderName() {
    return CardholderName;
}
void
SWGBuyerCreditCard::setCardholderName(QString* CardholderName) {
    this->CardholderName = CardholderName;
}

QDate*
SWGBuyerCreditCard::getExpirationDate() {
    return ExpirationDate;
}
void
SWGBuyerCreditCard::setExpirationDate(QDate* ExpirationDate) {
    this->ExpirationDate = ExpirationDate;
}

SWGObject*
SWGBuyerCreditCard::getXp() {
    return xp;
}
void
SWGBuyerCreditCard::setXp(SWGObject* xp) {
    this->xp = xp;
}



} /* namespace Swagger */

