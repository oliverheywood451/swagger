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

#ifndef _SWG_SWGAddressApi_H_
#define _SWG_SWGAddressApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGAddress.h"
#include "SWGObject.h"
#include "SWGAddressAssignment.h"

#include <QObject>

namespace Swagger {

class SWGAddressApi: public QObject {
    Q_OBJECT

public:
    SWGAddressApi();
    SWGAddressApi(QString host, QString basePath);
    ~SWGAddressApi();

    QString host;
    QString basePath;

    void create(QString* buyerID, SWGAddress address);
    void delete(QString* buyerID, QString* addressID);
    void deleteAssignment(QString* buyerID, QString* addressID, QString* userID, QString* userGroupID);
    void get(QString* buyerID, QString* addressID);
    void list(QString* buyerID, QString* search, QString* searchOn, QString* sortBy, qint32 page, qint32 pageSize);
    void listAssignments(QString* buyerID, QString* addressID, QString* userID, QString* userGroupID, QString* level, bool isShipping, bool isBilling, qint32 page, qint32 pageSize);
    void patch(QString* buyerID, QString* addressID, SWGAddress address);
    void saveAssignment(QString* buyerID, SWGAddressAssignment assignment);
    void update(QString* buyerID, QString* addressID, SWGAddress address);
    
private:
    void createCallback (HttpRequestWorker * worker);
    void deleteCallback (HttpRequestWorker * worker);
    void deleteAssignmentCallback (HttpRequestWorker * worker);
    void getCallback (HttpRequestWorker * worker);
    void listCallback (HttpRequestWorker * worker);
    void listAssignmentsCallback (HttpRequestWorker * worker);
    void patchCallback (HttpRequestWorker * worker);
    void saveAssignmentCallback (HttpRequestWorker * worker);
    void updateCallback (HttpRequestWorker * worker);
    
signals:
    void createSignal(SWGObject* summary);
    void deleteSignal();
    void deleteAssignmentSignal();
    void getSignal(SWGObject* summary);
    void listSignal(SWGObject* summary);
    void listAssignmentsSignal(SWGObject* summary);
    void patchSignal(SWGObject* summary);
    void saveAssignmentSignal();
    void updateSignal(SWGObject* summary);
    
};
}
#endif
