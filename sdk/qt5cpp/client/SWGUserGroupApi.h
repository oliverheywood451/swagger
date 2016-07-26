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

#ifndef _SWG_SWGUserGroupApi_H_
#define _SWG_SWGUserGroupApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGUserGroup.h"
#include "SWGObject.h"
#include "SWGUserGroupAssignment.h"

#include <QObject>

namespace Swagger {

class SWGUserGroupApi: public QObject {
    Q_OBJECT

public:
    SWGUserGroupApi();
    SWGUserGroupApi(QString host, QString basePath);
    ~SWGUserGroupApi();

    QString host;
    QString basePath;

    void create(QString* buyerID, SWGUserGroup group);
    void delete(QString* buyerID, QString* userGroupID);
    void deleteUserAssignment(QString* buyerID, QString* userGroupID, QString* userID);
    void get(QString* buyerID, QString* userGroupID);
    void list(QString* buyerID, QString* search, QString* searchOn, QString* sortBy, qint32 page, qint32 pageSize);
    void listUserAssignments(QString* buyerID, QString* userGroupID, QString* userID, qint32 page, qint32 pageSize);
    void patch(QString* buyerID, QString* userGroupID, SWGUserGroup group);
    void saveUserAssignment(QString* buyerID, SWGUserGroupAssignment userGroupAssignment);
    void update(QString* buyerID, QString* userGroupID, SWGUserGroup group);
    
private:
    void createCallback (HttpRequestWorker * worker);
    void deleteCallback (HttpRequestWorker * worker);
    void deleteUserAssignmentCallback (HttpRequestWorker * worker);
    void getCallback (HttpRequestWorker * worker);
    void listCallback (HttpRequestWorker * worker);
    void listUserAssignmentsCallback (HttpRequestWorker * worker);
    void patchCallback (HttpRequestWorker * worker);
    void saveUserAssignmentCallback (HttpRequestWorker * worker);
    void updateCallback (HttpRequestWorker * worker);
    
signals:
    void createSignal(SWGObject* summary);
    void deleteSignal();
    void deleteUserAssignmentSignal();
    void getSignal(SWGObject* summary);
    void listSignal(SWGObject* summary);
    void listUserAssignmentsSignal(SWGObject* summary);
    void patchSignal();
    void saveUserAssignmentSignal();
    void updateSignal(SWGObject* summary);
    
};
}
#endif
