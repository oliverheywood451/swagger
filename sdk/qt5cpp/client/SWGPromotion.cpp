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


#include "SWGPromotion.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGPromotion::SWGPromotion(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPromotion::SWGPromotion() {
    init();
}

SWGPromotion::~SWGPromotion() {
    this->cleanup();
}

void
SWGPromotion::init() {
    ID = new QString("");
Code = new QString("");
Name = new QString("");
UsagesRemaining = NULL;
Description = new QString("");
FinePrint = new QString("");
StartDate = NULL;
ExpirationDate = NULL;
EligibleExpression = new QString("");
ValueExpression = new QString("");
CanCombine = false;
xp = NULL;
}

void
SWGPromotion::cleanup() {
    if(ID != NULL) {
        delete ID;
    }
if(Code != NULL) {
        delete Code;
    }
if(Name != NULL) {
        delete Name;
    }

if(Description != NULL) {
        delete Description;
    }
if(FinePrint != NULL) {
        delete FinePrint;
    }
if(StartDate != NULL) {
        delete StartDate;
    }
if(ExpirationDate != NULL) {
        delete ExpirationDate;
    }
if(EligibleExpression != NULL) {
        delete EligibleExpression;
    }
if(ValueExpression != NULL) {
        delete ValueExpression;
    }

if(xp != NULL) {
        delete xp;
    }
}

SWGPromotion*
SWGPromotion::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPromotion::fromJsonObject(QJsonObject &pJson) {
    setValue(&ID, pJson["ID"], "QString", "QString");
setValue(&Code, pJson["Code"], "QString", "QString");
setValue(&Name, pJson["Name"], "QString", "QString");
setValue(&UsagesRemaining, pJson["UsagesRemaining"], "qint32", "");
setValue(&Description, pJson["Description"], "QString", "QString");
setValue(&FinePrint, pJson["FinePrint"], "QString", "QString");
setValue(&StartDate, pJson["StartDate"], "QDate", "QDate");
setValue(&ExpirationDate, pJson["ExpirationDate"], "QDate", "QDate");
setValue(&EligibleExpression, pJson["EligibleExpression"], "QString", "QString");
setValue(&ValueExpression, pJson["ValueExpression"], "QString", "QString");
setValue(&CanCombine, pJson["CanCombine"], "bool", "");
setValue(&xp, pJson["xp"], "SWGObject", "SWGObject");
}

QString
SWGPromotion::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGPromotion::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("ID"), ID, obj, QString("QString"));
    
        

    
    toJsonValue(QString("Code"), Code, obj, QString("QString"));
    
        

    
    toJsonValue(QString("Name"), Name, obj, QString("QString"));
    
        
obj->insert("UsagesRemaining", QJsonValue(UsagesRemaining));

    
    toJsonValue(QString("Description"), Description, obj, QString("QString"));
    
        

    
    toJsonValue(QString("FinePrint"), FinePrint, obj, QString("QString"));
    
        

    
    toJsonValue(QString("StartDate"), StartDate, obj, QString("QDate"));
    
        

    
    toJsonValue(QString("ExpirationDate"), ExpirationDate, obj, QString("QDate"));
    
        

    
    toJsonValue(QString("EligibleExpression"), EligibleExpression, obj, QString("QString"));
    
        

    
    toJsonValue(QString("ValueExpression"), ValueExpression, obj, QString("QString"));
    
        
obj->insert("CanCombine", QJsonValue(CanCombine));

    
    toJsonValue(QString("xp"), xp, obj, QString("SWGObject"));
    
        

    return obj;
}

QString*
SWGPromotion::getID() {
    return ID;
}
void
SWGPromotion::setID(QString* ID) {
    this->ID = ID;
}

QString*
SWGPromotion::getCode() {
    return Code;
}
void
SWGPromotion::setCode(QString* Code) {
    this->Code = Code;
}

QString*
SWGPromotion::getName() {
    return Name;
}
void
SWGPromotion::setName(QString* Name) {
    this->Name = Name;
}

qint32
SWGPromotion::getUsagesRemaining() {
    return UsagesRemaining;
}
void
SWGPromotion::setUsagesRemaining(qint32 UsagesRemaining) {
    this->UsagesRemaining = UsagesRemaining;
}

QString*
SWGPromotion::getDescription() {
    return Description;
}
void
SWGPromotion::setDescription(QString* Description) {
    this->Description = Description;
}

QString*
SWGPromotion::getFinePrint() {
    return FinePrint;
}
void
SWGPromotion::setFinePrint(QString* FinePrint) {
    this->FinePrint = FinePrint;
}

QDate*
SWGPromotion::getStartDate() {
    return StartDate;
}
void
SWGPromotion::setStartDate(QDate* StartDate) {
    this->StartDate = StartDate;
}

QDate*
SWGPromotion::getExpirationDate() {
    return ExpirationDate;
}
void
SWGPromotion::setExpirationDate(QDate* ExpirationDate) {
    this->ExpirationDate = ExpirationDate;
}

QString*
SWGPromotion::getEligibleExpression() {
    return EligibleExpression;
}
void
SWGPromotion::setEligibleExpression(QString* EligibleExpression) {
    this->EligibleExpression = EligibleExpression;
}

QString*
SWGPromotion::getValueExpression() {
    return ValueExpression;
}
void
SWGPromotion::setValueExpression(QString* ValueExpression) {
    this->ValueExpression = ValueExpression;
}

bool
SWGPromotion::getCanCombine() {
    return CanCombine;
}
void
SWGPromotion::setCanCombine(bool CanCombine) {
    this->CanCombine = CanCombine;
}

SWGObject*
SWGPromotion::getXp() {
    return xp;
}
void
SWGPromotion::setXp(SWGObject* xp) {
    this->xp = xp;
}



} /* namespace Swagger */

