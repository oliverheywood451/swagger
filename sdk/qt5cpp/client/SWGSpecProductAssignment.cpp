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


#include "SWGSpecProductAssignment.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGSpecProductAssignment::SWGSpecProductAssignment(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSpecProductAssignment::SWGSpecProductAssignment() {
    init();
}

SWGSpecProductAssignment::~SWGSpecProductAssignment() {
    this->cleanup();
}

void
SWGSpecProductAssignment::init() {
    SpecID = new QString("");
ProductID = new QString("");
DefinesVariant = false;
}

void
SWGSpecProductAssignment::cleanup() {
    if(SpecID != NULL) {
        delete SpecID;
    }
if(ProductID != NULL) {
        delete ProductID;
    }

}

SWGSpecProductAssignment*
SWGSpecProductAssignment::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSpecProductAssignment::fromJsonObject(QJsonObject &pJson) {
    setValue(&SpecID, pJson["SpecID"], "QString", "QString");
setValue(&ProductID, pJson["ProductID"], "QString", "QString");
setValue(&DefinesVariant, pJson["DefinesVariant"], "bool", "");
}

QString
SWGSpecProductAssignment::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGSpecProductAssignment::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("SpecID"), SpecID, obj, QString("QString"));
    
        

    
    toJsonValue(QString("ProductID"), ProductID, obj, QString("QString"));
    
        
obj->insert("DefinesVariant", QJsonValue(DefinesVariant));

    return obj;
}

QString*
SWGSpecProductAssignment::getSpecID() {
    return SpecID;
}
void
SWGSpecProductAssignment::setSpecID(QString* SpecID) {
    this->SpecID = SpecID;
}

QString*
SWGSpecProductAssignment::getProductID() {
    return ProductID;
}
void
SWGSpecProductAssignment::setProductID(QString* ProductID) {
    this->ProductID = ProductID;
}

bool
SWGSpecProductAssignment::getDefinesVariant() {
    return DefinesVariant;
}
void
SWGSpecProductAssignment::setDefinesVariant(bool DefinesVariant) {
    this->DefinesVariant = DefinesVariant;
}



} /* namespace Swagger */

