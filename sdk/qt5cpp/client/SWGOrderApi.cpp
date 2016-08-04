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

#include "SWGOrderApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGOrderApi::SWGOrderApi() {}

SWGOrderApi::~SWGOrderApi() {}

SWGOrderApi::SWGOrderApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGOrderApi::addPromotion(QString* buyerID, QString* orderID, QString* promoCode) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}/promotions/{promoCode}");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));
    QString promoCodePathParam("{"); promoCodePathParam.append("promoCode").append("}");
    fullPath.replace(promoCodePathParam, stringValue(promoCode));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::addPromotionCallback);

    worker->execute(&input);
}

void
SWGOrderApi::addPromotionCallback(HttpRequestWorker * worker) {
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

    emit addPromotionSignal(output);
    
}
void
SWGOrderApi::approve(QString* buyerID, QString* orderID, QString* comments) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}/approve");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("comments"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(comments)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::approveCallback);

    worker->execute(&input);
}

void
SWGOrderApi::approveCallback(HttpRequestWorker * worker) {
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

    emit approveSignal(output);
    
}
void
SWGOrderApi::cancel(QString* buyerID, QString* orderID) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}/cancel");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::cancelCallback);

    worker->execute(&input);
}

void
SWGOrderApi::cancelCallback(HttpRequestWorker * worker) {
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

    emit cancelSignal(output);
    
}
void
SWGOrderApi::create(QString* buyerID, SWGOrder order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = order.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::createCallback);

    worker->execute(&input);
}

void
SWGOrderApi::createCallback(HttpRequestWorker * worker) {
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
SWGOrderApi::decline(QString* buyerID, QString* orderID, QString* comments) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}/decline");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("comments"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(comments)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::declineCallback);

    worker->execute(&input);
}

void
SWGOrderApi::declineCallback(HttpRequestWorker * worker) {
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

    emit declineSignal(output);
    
}
void
SWGOrderApi::delete(QString* buyerID, QString* orderID) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::deleteCallback);

    worker->execute(&input);
}

void
SWGOrderApi::deleteCallback(HttpRequestWorker * worker) {
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
SWGOrderApi::get(QString* buyerID, QString* orderID) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::getCallback);

    worker->execute(&input);
}

void
SWGOrderApi::getCallback(HttpRequestWorker * worker) {
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
SWGOrderApi::listApprovals(QString* buyerID, QString* orderID, QString* search, QString* searchOn, QString* sortBy, qint32 page, qint32 pageSize) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}/approvals");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));

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
            &SWGOrderApi::listApprovalsCallback);

    worker->execute(&input);
}

void
SWGOrderApi::listApprovalsCallback(HttpRequestWorker * worker) {
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

    emit listApprovalsSignal(output);
    
}
void
SWGOrderApi::listEligibleApprovers(QString* buyerID, QString* orderID, QString* search, QString* searchOn, QString* sortBy, qint32 page, qint32 pageSize) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}/eligibleapprovers");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));

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
            &SWGOrderApi::listEligibleApproversCallback);

    worker->execute(&input);
}

void
SWGOrderApi::listEligibleApproversCallback(HttpRequestWorker * worker) {
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

    emit listEligibleApproversSignal(output);
    
}
void
SWGOrderApi::listIncoming(QString* buyerID, QString* from, QString* to, QString* search, QString* searchOn, QString* sortBy, qint32 page, qint32 pageSize) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/orders/incoming");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("buyerID"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(buyerID)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("from"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(from)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("to"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(to)));

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
            &SWGOrderApi::listIncomingCallback);

    worker->execute(&input);
}

void
SWGOrderApi::listIncomingCallback(HttpRequestWorker * worker) {
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

    emit listIncomingSignal(output);
    
}
void
SWGOrderApi::listOutgoing(QString* buyerID, QString* from, QString* to, QString* search, QString* searchOn, QString* sortBy, qint32 page, qint32 pageSize) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/orders/outgoing");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("buyerID"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(buyerID)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("from"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(from)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("to"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(to)));

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
            &SWGOrderApi::listOutgoingCallback);

    worker->execute(&input);
}

void
SWGOrderApi::listOutgoingCallback(HttpRequestWorker * worker) {
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

    emit listOutgoingSignal(output);
    
}
void
SWGOrderApi::listPromotions(QString* buyerID, QString* orderID, QString* search, QString* searchOn, QString* sortBy, qint32 page, qint32 pageSize) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}/promotions");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));

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
            &SWGOrderApi::listPromotionsCallback);

    worker->execute(&input);
}

void
SWGOrderApi::listPromotionsCallback(HttpRequestWorker * worker) {
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

    emit listPromotionsSignal(output);
    
}
void
SWGOrderApi::patch(QString* buyerID, QString* orderID, SWGOrder partialOrder) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PATCH");

    
    QString output = partialOrder.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::patchCallback);

    worker->execute(&input);
}

void
SWGOrderApi::patchCallback(HttpRequestWorker * worker) {
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
SWGOrderApi::patchBillingAddress(QString* buyerID, QString* orderID, SWGAddress address) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}/billto");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PATCH");

    
    QString output = address.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::patchBillingAddressCallback);

    worker->execute(&input);
}

void
SWGOrderApi::patchBillingAddressCallback(HttpRequestWorker * worker) {
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

    emit patchBillingAddressSignal(output);
    
}
void
SWGOrderApi::patchShippingAddress(QString* buyerID, QString* orderID, SWGAddress address) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}/shipto");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PATCH");

    
    QString output = address.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::patchShippingAddressCallback);

    worker->execute(&input);
}

void
SWGOrderApi::patchShippingAddressCallback(HttpRequestWorker * worker) {
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

    emit patchShippingAddressSignal(output);
    
}
void
SWGOrderApi::removePromotion(QString* buyerID, QString* orderID, QString* promoCode) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}/promotions/{promoCode}");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));
    QString promoCodePathParam("{"); promoCodePathParam.append("promoCode").append("}");
    fullPath.replace(promoCodePathParam, stringValue(promoCode));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::removePromotionCallback);

    worker->execute(&input);
}

void
SWGOrderApi::removePromotionCallback(HttpRequestWorker * worker) {
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

    emit removePromotionSignal(output);
    
}
void
SWGOrderApi::setBillingAddress(QString* buyerID, QString* orderID, SWGAddress address) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}/billto");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = address.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::setBillingAddressCallback);

    worker->execute(&input);
}

void
SWGOrderApi::setBillingAddressCallback(HttpRequestWorker * worker) {
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

    emit setBillingAddressSignal(output);
    
}
void
SWGOrderApi::setShippingAddress(QString* buyerID, QString* orderID, SWGAddress address) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}/shipto");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = address.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::setShippingAddressCallback);

    worker->execute(&input);
}

void
SWGOrderApi::setShippingAddressCallback(HttpRequestWorker * worker) {
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

    emit setShippingAddressSignal(output);
    
}
void
SWGOrderApi::ship(QString* buyerID, QString* orderID, SWGShipment shipment) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}/ship");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = shipment.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::shipCallback);

    worker->execute(&input);
}

void
SWGOrderApi::shipCallback(HttpRequestWorker * worker) {
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

    emit shipSignal(output);
    
}
void
SWGOrderApi::submit(QString* buyerID, QString* orderID) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}/submit");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::submitCallback);

    worker->execute(&input);
}

void
SWGOrderApi::submitCallback(HttpRequestWorker * worker) {
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

    emit submitSignal(output);
    
}
void
SWGOrderApi::transferTempUserOrder(QString* buyerID, QString* tempUserToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("tempUserToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(tempUserToken)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::transferTempUserOrderCallback);

    worker->execute(&input);
}

void
SWGOrderApi::transferTempUserOrderCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit transferTempUserOrderSignal();
}
void
SWGOrderApi::update(QString* buyerID, QString* orderID, SWGOrder order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/buyers/{buyerID}/orders/{orderID}");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString orderIDPathParam("{"); orderIDPathParam.append("orderID").append("}");
    fullPath.replace(orderIDPathParam, stringValue(orderID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = order.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::updateCallback);

    worker->execute(&input);
}

void
SWGOrderApi::updateCallback(HttpRequestWorker * worker) {
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