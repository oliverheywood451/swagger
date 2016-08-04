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

#ifndef _SWG_SWGEmailTemplateApi_H_
#define _SWG_SWGEmailTemplateApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGObject.h"
#include "SWGEmailTemplate.h"

#include <QObject>

namespace Swagger {

class SWGEmailTemplateApi: public QObject {
    Q_OBJECT

public:
    SWGEmailTemplateApi();
    SWGEmailTemplateApi(QString host, QString basePath);
    ~SWGEmailTemplateApi();

    QString host;
    QString basePath;

    void get(QString* buyerID, QString* emailTemplateType);
    void patch(QString* buyerID, QString* emailTemplateType, SWGEmailTemplate emailTemplate);
    void resetToDefault(QString* buyerID, QString* emailTemplateType);
    void update(QString* buyerID, QString* emailTemplateType, SWGEmailTemplate emailTemplate);
    
private:
    void getCallback (HttpRequestWorker * worker);
    void patchCallback (HttpRequestWorker * worker);
    void resetToDefaultCallback (HttpRequestWorker * worker);
    void updateCallback (HttpRequestWorker * worker);
    
signals:
    void getSignal(SWGObject* summary);
    void patchSignal();
    void resetToDefaultSignal();
    void updateSignal();
    
};
}
#endif