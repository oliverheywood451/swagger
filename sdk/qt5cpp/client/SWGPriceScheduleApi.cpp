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

#include "SWGPriceScheduleApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGPriceScheduleApi::SWGPriceScheduleApi() {}

SWGPriceScheduleApi::~SWGPriceScheduleApi() {}

SWGPriceScheduleApi::SWGPriceScheduleApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGPriceScheduleApi::create(SWGPriceSchedule priceSchedule) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/priceschedules");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = priceSchedule.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPriceScheduleApi::createCallback);

    worker->execute(&input);
}

void
SWGPriceScheduleApi::createCallback(HttpRequestWorker * worker) {
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

    emit createSignal(output);
    
}
void
SWGPriceScheduleApi::delete(QString* priceScheduleID) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/priceschedules/{priceScheduleID}");

    QString priceScheduleIDPathParam("{"); priceScheduleIDPathParam.append("priceScheduleID").append("}");
    fullPath.replace(priceScheduleIDPathParam, stringValue(priceScheduleID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPriceScheduleApi::deleteCallback);

    worker->execute(&input);
}

void
SWGPriceScheduleApi::deleteCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteSignal();
}
void
SWGPriceScheduleApi::deletePriceBreak(QString* priceScheduleID, qint32 quantity) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/priceschedules/{priceScheduleID}/PriceBreaks");

    QString priceScheduleIDPathParam("{"); priceScheduleIDPathParam.append("priceScheduleID").append("}");
    fullPath.replace(priceScheduleIDPathParam, stringValue(priceScheduleID));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("quantity"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(quantity)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPriceScheduleApi::deletePriceBreakCallback);

    worker->execute(&input);
}

void
SWGPriceScheduleApi::deletePriceBreakCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deletePriceBreakSignal();
}
void
SWGPriceScheduleApi::get(QString* priceScheduleID) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/priceschedules/{priceScheduleID}");

    QString priceScheduleIDPathParam("{"); priceScheduleIDPathParam.append("priceScheduleID").append("}");
    fullPath.replace(priceScheduleIDPathParam, stringValue(priceScheduleID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPriceScheduleApi::getCallback);

    worker->execute(&input);
}

void
SWGPriceScheduleApi::getCallback(HttpRequestWorker * worker) {
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
SWGPriceScheduleApi::list(QString* search, QString* searchOn, QString* sortBy, qint32 page, qint32 pageSize) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/priceschedules");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("search"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(search)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("searchOn"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(searchOn)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sortBy"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sortBy)));

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
            &SWGPriceScheduleApi::listCallback);

    worker->execute(&input);
}

void
SWGPriceScheduleApi::listCallback(HttpRequestWorker * worker) {
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
SWGPriceScheduleApi::patch(QString* priceScheduleID, SWGPriceSchedule priceSchedule) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/priceschedules/{priceScheduleID}");

    QString priceScheduleIDPathParam("{"); priceScheduleIDPathParam.append("priceScheduleID").append("}");
    fullPath.replace(priceScheduleIDPathParam, stringValue(priceScheduleID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PATCH");

    
    QString output = priceSchedule.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPriceScheduleApi::patchCallback);

    worker->execute(&input);
}

void
SWGPriceScheduleApi::patchCallback(HttpRequestWorker * worker) {
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

    emit patchSignal(output);
    
}
void
SWGPriceScheduleApi::savePriceBreak(QString* priceScheduleID, SWGPriceBreak priceBreak) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/priceschedules/{priceScheduleID}/PriceBreaks");

    QString priceScheduleIDPathParam("{"); priceScheduleIDPathParam.append("priceScheduleID").append("}");
    fullPath.replace(priceScheduleIDPathParam, stringValue(priceScheduleID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = priceBreak.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPriceScheduleApi::savePriceBreakCallback);

    worker->execute(&input);
}

void
SWGPriceScheduleApi::savePriceBreakCallback(HttpRequestWorker * worker) {
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

    emit savePriceBreakSignal(output);
    
}
void
SWGPriceScheduleApi::update(QString* priceScheduleID, SWGPriceSchedule priceSchedule) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/priceschedules/{priceScheduleID}");

    QString priceScheduleIDPathParam("{"); priceScheduleIDPathParam.append("priceScheduleID").append("}");
    fullPath.replace(priceScheduleIDPathParam, stringValue(priceScheduleID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = priceSchedule.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPriceScheduleApi::updateCallback);

    worker->execute(&input);
}

void
SWGPriceScheduleApi::updateCallback(HttpRequestWorker * worker) {
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

    emit updateSignal(output);
    
}
} /* namespace Swagger */
