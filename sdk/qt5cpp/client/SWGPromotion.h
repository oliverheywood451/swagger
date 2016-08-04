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
 * SWGPromotion.h
 * 
 * 
 */

#ifndef SWGPromotion_H_
#define SWGPromotion_H_

#include <QJsonObject>


#include "SWGObject.h"
#include <QDate>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGPromotion: public SWGObject {
public:
    SWGPromotion();
    SWGPromotion(QString* json);
    virtual ~SWGPromotion();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGPromotion* fromJson(QString &jsonString);

    QString* getID();
    void setID(QString* ID);
QString* getCode();
    void setCode(QString* Code);
QString* getName();
    void setName(QString* Name);
qint32 getUsagesRemaining();
    void setUsagesRemaining(qint32 UsagesRemaining);
QString* getDescription();
    void setDescription(QString* Description);
QString* getFinePrint();
    void setFinePrint(QString* FinePrint);
QDate* getStartDate();
    void setStartDate(QDate* StartDate);
QDate* getExpirationDate();
    void setExpirationDate(QDate* ExpirationDate);
QString* getEligibleExpression();
    void setEligibleExpression(QString* EligibleExpression);
QString* getValueExpression();
    void setValueExpression(QString* ValueExpression);
bool getCanCombine();
    void setCanCombine(bool CanCombine);
SWGObject* getXp();
    void setXp(SWGObject* xp);

private:
    QString* ID;
QString* Code;
QString* Name;
qint32 UsagesRemaining;
QString* Description;
QString* FinePrint;
QDate* StartDate;
QDate* ExpirationDate;
QString* EligibleExpression;
QString* ValueExpression;
bool CanCombine;
SWGObject* xp;
};

} /* namespace Swagger */

#endif /* SWGPromotion_H_ */