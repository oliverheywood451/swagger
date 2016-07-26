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

#include "SWGFileApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGFileApi::SWGFileApi() {}

SWGFileApi::~SWGFileApi() {}

SWGFileApi::SWGFileApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGFileApi::get(QString* fileID) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/files/{fileID}");

    QString fileIDPathParam("{"); fileIDPathParam.append("fileID").append("}");
    fullPath.replace(fileIDPathParam, stringValue(fileID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGFileApi::getCallback);

    worker->execute(&input);
}

void
SWGFileApi::getCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGObject* output = static_cast<SWGObject*>(create(json, QString("SWGObject")));
    

    worker->deleteLater();

    emit getSignal(output);
    
}
void
SWGFileApi::list(qint32 page, qint32 pageSize) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/files");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("page"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(page)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("pageSize"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(pageSize)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGFileApi::listCallback);

    worker->execute(&input);
}

void
SWGFileApi::listCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGObject* output = static_cast<SWGObject*>(create(json, QString("SWGObject")));
    

    worker->deleteLater();

    emit listSignal(output);
    
}
void
SWGFileApi::postFileData(QString* filename) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/files");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filename"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filename)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGFileApi::postFileDataCallback);

    worker->execute(&input);
}

void
SWGFileApi::postFileDataCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGObject* output = static_cast<SWGObject*>(create(json, QString("SWGObject")));
    

    worker->deleteLater();

    emit postFileDataSignal(output);
    
}
} /* namespace Swagger */
