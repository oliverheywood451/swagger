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
 * SWGProduct.h
 * 
 * 
 */

#ifndef SWGProduct_H_
#define SWGProduct_H_

#include <QJsonObject>


#include "SWGNumber.h"
#include "SWGObject.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGProduct: public SWGObject {
public:
    SWGProduct();
    SWGProduct(QString* json);
    virtual ~SWGProduct();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGProduct* fromJson(QString &jsonString);

    QString* getID();
    void setID(QString* ID);
QString* getName();
    void setName(QString* Name);
QString* getDescription();
    void setDescription(QString* Description);
qint32 getQuantityMultiplier();
    void setQuantityMultiplier(qint32 QuantityMultiplier);
SWGNumber* getShipWeight();
    void setShipWeight(SWGNumber* ShipWeight);
bool getActive();
    void setActive(bool Active);
QString* getType();
    void setType(QString* Type);
bool getInventoryEnabled();
    void setInventoryEnabled(bool InventoryEnabled);
qint32 getInventoryNotificationPoint();
    void setInventoryNotificationPoint(qint32 InventoryNotificationPoint);
bool getVariantLevelInventory();
    void setVariantLevelInventory(bool VariantLevelInventory);
SWGObject* getXp();
    void setXp(SWGObject* xp);
bool getAllowOrderExceedInventory();
    void setAllowOrderExceedInventory(bool AllowOrderExceedInventory);
bool getInventoryVisible();
    void setInventoryVisible(bool InventoryVisible);

private:
    QString* ID;
QString* Name;
QString* Description;
qint32 QuantityMultiplier;
SWGNumber* ShipWeight;
bool Active;
QString* Type;
bool InventoryEnabled;
qint32 InventoryNotificationPoint;
bool VariantLevelInventory;
SWGObject* xp;
bool AllowOrderExceedInventory;
bool InventoryVisible;
};

} /* namespace Swagger */

#endif /* SWGProduct_H_ */
