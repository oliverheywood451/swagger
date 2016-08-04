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


#include "SWGApprovalRule.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGApprovalRule::SWGApprovalRule(QString* json) {
    init();
    this->fromJson(*json);
}

SWGApprovalRule::SWGApprovalRule() {
    init();
}

SWGApprovalRule::~SWGApprovalRule() {
    this->cleanup();
}

void
SWGApprovalRule::init() {
    ID = new QString("");
Name = new QString("");
Description = new QString("");
ApprovingGroupID = new QString("");
RuleExpression = new QString("");
Scope = new QString("");
ScopeTimeUnit = new QString("");
ScopeTimeNumber = NULL;
ScopeStartDate = NULL;
ExpireAfterTimeUnit = new QString("");
ExpireAfterNumber = NULL;
ApproveOnExpire = false;
xp = NULL;
}

void
SWGApprovalRule::cleanup() {
    if(ID != NULL) {
        delete ID;
    }
if(Name != NULL) {
        delete Name;
    }
if(Description != NULL) {
        delete Description;
    }
if(ApprovingGroupID != NULL) {
        delete ApprovingGroupID;
    }
if(RuleExpression != NULL) {
        delete RuleExpression;
    }
if(Scope != NULL) {
        delete Scope;
    }
if(ScopeTimeUnit != NULL) {
        delete ScopeTimeUnit;
    }

if(ScopeStartDate != NULL) {
        delete ScopeStartDate;
    }
if(ExpireAfterTimeUnit != NULL) {
        delete ExpireAfterTimeUnit;
    }


if(xp != NULL) {
        delete xp;
    }
}

SWGApprovalRule*
SWGApprovalRule::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGApprovalRule::fromJsonObject(QJsonObject &pJson) {
    setValue(&ID, pJson["ID"], "QString", "QString");
setValue(&Name, pJson["Name"], "QString", "QString");
setValue(&Description, pJson["Description"], "QString", "QString");
setValue(&ApprovingGroupID, pJson["ApprovingGroupID"], "QString", "QString");
setValue(&RuleExpression, pJson["RuleExpression"], "QString", "QString");
setValue(&Scope, pJson["Scope"], "QString", "QString");
setValue(&ScopeTimeUnit, pJson["ScopeTimeUnit"], "QString", "QString");
setValue(&ScopeTimeNumber, pJson["ScopeTimeNumber"], "qint32", "");
setValue(&ScopeStartDate, pJson["ScopeStartDate"], "QDate", "QDate");
setValue(&ExpireAfterTimeUnit, pJson["ExpireAfterTimeUnit"], "QString", "QString");
setValue(&ExpireAfterNumber, pJson["ExpireAfterNumber"], "qint32", "");
setValue(&ApproveOnExpire, pJson["ApproveOnExpire"], "bool", "");
setValue(&xp, pJson["xp"], "SWGObject", "SWGObject");
}

QString
SWGApprovalRule::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGApprovalRule::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("ID"), ID, obj, QString("QString"));
    
        

    
    toJsonValue(QString("Name"), Name, obj, QString("QString"));
    
        

    
    toJsonValue(QString("Description"), Description, obj, QString("QString"));
    
        

    
    toJsonValue(QString("ApprovingGroupID"), ApprovingGroupID, obj, QString("QString"));
    
        

    
    toJsonValue(QString("RuleExpression"), RuleExpression, obj, QString("QString"));
    
        

    
    toJsonValue(QString("Scope"), Scope, obj, QString("QString"));
    
        

    
    toJsonValue(QString("ScopeTimeUnit"), ScopeTimeUnit, obj, QString("QString"));
    
        
obj->insert("ScopeTimeNumber", QJsonValue(ScopeTimeNumber));

    
    toJsonValue(QString("ScopeStartDate"), ScopeStartDate, obj, QString("QDate"));
    
        

    
    toJsonValue(QString("ExpireAfterTimeUnit"), ExpireAfterTimeUnit, obj, QString("QString"));
    
        
obj->insert("ExpireAfterNumber", QJsonValue(ExpireAfterNumber));
obj->insert("ApproveOnExpire", QJsonValue(ApproveOnExpire));

    
    toJsonValue(QString("xp"), xp, obj, QString("SWGObject"));
    
        

    return obj;
}

QString*
SWGApprovalRule::getID() {
    return ID;
}
void
SWGApprovalRule::setID(QString* ID) {
    this->ID = ID;
}

QString*
SWGApprovalRule::getName() {
    return Name;
}
void
SWGApprovalRule::setName(QString* Name) {
    this->Name = Name;
}

QString*
SWGApprovalRule::getDescription() {
    return Description;
}
void
SWGApprovalRule::setDescription(QString* Description) {
    this->Description = Description;
}

QString*
SWGApprovalRule::getApprovingGroupID() {
    return ApprovingGroupID;
}
void
SWGApprovalRule::setApprovingGroupID(QString* ApprovingGroupID) {
    this->ApprovingGroupID = ApprovingGroupID;
}

QString*
SWGApprovalRule::getRuleExpression() {
    return RuleExpression;
}
void
SWGApprovalRule::setRuleExpression(QString* RuleExpression) {
    this->RuleExpression = RuleExpression;
}

QString*
SWGApprovalRule::getScope() {
    return Scope;
}
void
SWGApprovalRule::setScope(QString* Scope) {
    this->Scope = Scope;
}

QString*
SWGApprovalRule::getScopeTimeUnit() {
    return ScopeTimeUnit;
}
void
SWGApprovalRule::setScopeTimeUnit(QString* ScopeTimeUnit) {
    this->ScopeTimeUnit = ScopeTimeUnit;
}

qint32
SWGApprovalRule::getScopeTimeNumber() {
    return ScopeTimeNumber;
}
void
SWGApprovalRule::setScopeTimeNumber(qint32 ScopeTimeNumber) {
    this->ScopeTimeNumber = ScopeTimeNumber;
}

QDate*
SWGApprovalRule::getScopeStartDate() {
    return ScopeStartDate;
}
void
SWGApprovalRule::setScopeStartDate(QDate* ScopeStartDate) {
    this->ScopeStartDate = ScopeStartDate;
}

QString*
SWGApprovalRule::getExpireAfterTimeUnit() {
    return ExpireAfterTimeUnit;
}
void
SWGApprovalRule::setExpireAfterTimeUnit(QString* ExpireAfterTimeUnit) {
    this->ExpireAfterTimeUnit = ExpireAfterTimeUnit;
}

qint32
SWGApprovalRule::getExpireAfterNumber() {
    return ExpireAfterNumber;
}
void
SWGApprovalRule::setExpireAfterNumber(qint32 ExpireAfterNumber) {
    this->ExpireAfterNumber = ExpireAfterNumber;
}

bool
SWGApprovalRule::getApproveOnExpire() {
    return ApproveOnExpire;
}
void
SWGApprovalRule::setApproveOnExpire(bool ApproveOnExpire) {
    this->ApproveOnExpire = ApproveOnExpire;
}

SWGObject*
SWGApprovalRule::getXp() {
    return xp;
}
void
SWGApprovalRule::setXp(SWGObject* xp) {
    this->xp = xp;
}



} /* namespace Swagger */
