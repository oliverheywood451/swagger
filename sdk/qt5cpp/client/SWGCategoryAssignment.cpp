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


#include "SWGCategoryAssignment.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCategoryAssignment::SWGCategoryAssignment(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCategoryAssignment::SWGCategoryAssignment() {
    init();
}

SWGCategoryAssignment::~SWGCategoryAssignment() {
    this->cleanup();
}

void
SWGCategoryAssignment::init() {
    CategoryID = new QString("");
UserID = new QString("");
UserGroupID = new QString("");
}

void
SWGCategoryAssignment::cleanup() {
    if(CategoryID != NULL) {
        delete CategoryID;
    }
if(UserID != NULL) {
        delete UserID;
    }
if(UserGroupID != NULL) {
        delete UserGroupID;
    }
}

SWGCategoryAssignment*
SWGCategoryAssignment::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCategoryAssignment::fromJsonObject(QJsonObject &pJson) {
    setValue(&CategoryID, pJson["CategoryID"], "QString", "QString");
setValue(&UserID, pJson["UserID"], "QString", "QString");
setValue(&UserGroupID, pJson["UserGroupID"], "QString", "QString");
}

QString
SWGCategoryAssignment::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCategoryAssignment::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("CategoryID"), CategoryID, obj, QString("QString"));
    
        

    
    toJsonValue(QString("UserID"), UserID, obj, QString("QString"));
    
        

    
    toJsonValue(QString("UserGroupID"), UserGroupID, obj, QString("QString"));
    
        

    return obj;
}

QString*
SWGCategoryAssignment::getCategoryID() {
    return CategoryID;
}
void
SWGCategoryAssignment::setCategoryID(QString* CategoryID) {
    this->CategoryID = CategoryID;
}

QString*
SWGCategoryAssignment::getUserID() {
    return UserID;
}
void
SWGCategoryAssignment::setUserID(QString* UserID) {
    this->UserID = UserID;
}

QString*
SWGCategoryAssignment::getUserGroupID() {
    return UserGroupID;
}
void
SWGCategoryAssignment::setUserGroupID(QString* UserGroupID) {
    this->UserGroupID = UserGroupID;
}



} /* namespace Swagger */
