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

#ifndef _SWG_SWGUserApi_H_
#define _SWG_SWGUserApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGObject.h"
#include "SWGUser.h"
#include "SWGImpersonateTokenRequest.h"

#include <QObject>

namespace Swagger {

class SWGUserApi: public QObject {
    Q_OBJECT

public:
    SWGUserApi();
    SWGUserApi(QString host, QString basePath);
    ~SWGUserApi();

    QString host;
    QString basePath;

    void create(QString* buyerID, SWGUser user);
    void delete(QString* buyerID, QString* userID);
    void get(QString* buyerID, QString* userID);
    void getAccessToken(QString* buyerID, QString* userID, SWGImpersonateTokenRequest tokenRequest);
    void list(QString* buyerID, QString* userGroupID, QString* search, QString* searchOn, QString* sortBy, qint32 page, qint32 pageSize);
    void patch(QString* buyerID, QString* userID, SWGUser user);
    void update(QString* buyerID, QString* userID, SWGUser user);
    
private:
    void createCallback (HttpRequestWorker * worker);
    void deleteCallback (HttpRequestWorker * worker);
    void getCallback (HttpRequestWorker * worker);
    void getAccessTokenCallback (HttpRequestWorker * worker);
    void listCallback (HttpRequestWorker * worker);
    void patchCallback (HttpRequestWorker * worker);
    void updateCallback (HttpRequestWorker * worker);
    
signals:
    void createSignal(SWGObject* summary);
    void deleteSignal();
    void getSignal(SWGObject* summary);
    void getAccessTokenSignal(SWGObject* summary);
    void listSignal(SWGObject* summary);
    void patchSignal();
    void updateSignal(SWGObject* summary);
    
};
}
#endif
