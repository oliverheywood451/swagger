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

#ifndef _SWG_SWGSpecApi_H_
#define _SWG_SWGSpecApi_H_

#include "SWGHttpRequest.h"

#include "SWGSpec.h"
#include "SWGObject.h"
#include <QString>
#include "SWGSpecOption.h"
#include "SWGSpecProductAssignment.h"

#include <QObject>

namespace Swagger {

class SWGSpecApi: public QObject {
    Q_OBJECT

public:
    SWGSpecApi();
    SWGSpecApi(QString host, QString basePath);
    ~SWGSpecApi();

    QString host;
    QString basePath;

    void create(SWGSpec spec);
    void createOption(QString* specID, SWGSpecOption option);
    void delete(QString* specID);
    void deleteOption(QString* specID, QString* optionID);
    void deleteProductAssignment(QString* specID, QString* productID);
    void get(QString* specID);
    void getOption(QString* specID, QString* optionID);
    void list(QString* search, QString* searchOn, QString* sortBy, qint32 page, qint32 pageSize);
    void listOptions(QString* specID, QString* search, QString* searchOn, QString* sortBy, qint32 page, qint32 pageSize);
    void listProductAssignments(QString* specID, QString* productID, qint32 page, qint32 pageSize);
    void patch(QString* specID, SWGSpec spec);
    void patchOption(QString* specID, QString* optionID, SWGSpecOption option);
    void saveProductAssignment(SWGSpecProductAssignment productAssignment);
    void update(QString* specID, SWGSpec spec);
    void updateOption(QString* specID, QString* optionID, SWGSpecOption option);
    
private:
    void createCallback (HttpRequestWorker * worker);
    void createOptionCallback (HttpRequestWorker * worker);
    void deleteCallback (HttpRequestWorker * worker);
    void deleteOptionCallback (HttpRequestWorker * worker);
    void deleteProductAssignmentCallback (HttpRequestWorker * worker);
    void getCallback (HttpRequestWorker * worker);
    void getOptionCallback (HttpRequestWorker * worker);
    void listCallback (HttpRequestWorker * worker);
    void listOptionsCallback (HttpRequestWorker * worker);
    void listProductAssignmentsCallback (HttpRequestWorker * worker);
    void patchCallback (HttpRequestWorker * worker);
    void patchOptionCallback (HttpRequestWorker * worker);
    void saveProductAssignmentCallback (HttpRequestWorker * worker);
    void updateCallback (HttpRequestWorker * worker);
    void updateOptionCallback (HttpRequestWorker * worker);
    
signals:
    void createSignal(SWGObject* summary);
    void createOptionSignal(SWGObject* summary);
    void deleteSignal();
    void deleteOptionSignal();
    void deleteProductAssignmentSignal();
    void getSignal(SWGObject* summary);
    void getOptionSignal(SWGObject* summary);
    void listSignal(SWGObject* summary);
    void listOptionsSignal(SWGObject* summary);
    void listProductAssignmentsSignal(SWGObject* summary);
    void patchSignal(SWGObject* summary);
    void patchOptionSignal(SWGObject* summary);
    void saveProductAssignmentSignal();
    void updateSignal(SWGObject* summary);
    void updateOptionSignal(SWGObject* summary);
    
};
}
#endif
