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

#include "SWGProductApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGProductApi::SWGProductApi() {}

SWGProductApi::~SWGProductApi() {}

SWGProductApi::SWGProductApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGProductApi::create(SWGProduct product) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = product.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGProductApi::createCallback);

    worker->execute(&input);
}

void
SWGProductApi::createCallback(HttpRequestWorker * worker) {
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
SWGProductApi::delete(QString* productID) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/{productID}");

    QString productIDPathParam("{"); productIDPathParam.append("productID").append("}");
    fullPath.replace(productIDPathParam, stringValue(productID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGProductApi::deleteCallback);

    worker->execute(&input);
}

void
SWGProductApi::deleteCallback(HttpRequestWorker * worker) {
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
SWGProductApi::deleteAssignment(QString* buyerID, QString* productID, QString* userID, QString* userGroupID) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/{productID}/assignments/{buyerID}");

    QString buyerIDPathParam("{"); buyerIDPathParam.append("buyerID").append("}");
    fullPath.replace(buyerIDPathParam, stringValue(buyerID));
    QString productIDPathParam("{"); productIDPathParam.append("productID").append("}");
    fullPath.replace(productIDPathParam, stringValue(productID));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("userID"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(userID)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("userGroupID"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(userGroupID)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGProductApi::deleteAssignmentCallback);

    worker->execute(&input);
}

void
SWGProductApi::deleteAssignmentCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteAssignmentSignal();
}
void
SWGProductApi::generateVariants(QString* productID, bool overwriteExisting) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/{productID}/variants/generate");

    QString productIDPathParam("{"); productIDPathParam.append("productID").append("}");
    fullPath.replace(productIDPathParam, stringValue(productID));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("overwriteExisting"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(overwriteExisting)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGProductApi::generateVariantsCallback);

    worker->execute(&input);
}

void
SWGProductApi::generateVariantsCallback(HttpRequestWorker * worker) {
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

    emit generateVariantsSignal(output);
    
}
void
SWGProductApi::get(QString* productID) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/{productID}");

    QString productIDPathParam("{"); productIDPathParam.append("productID").append("}");
    fullPath.replace(productIDPathParam, stringValue(productID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGProductApi::getCallback);

    worker->execute(&input);
}

void
SWGProductApi::getCallback(HttpRequestWorker * worker) {
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
SWGProductApi::getInventory(QString* productID) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/{productID}/inventory");

    QString productIDPathParam("{"); productIDPathParam.append("productID").append("}");
    fullPath.replace(productIDPathParam, stringValue(productID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGProductApi::getInventoryCallback);

    worker->execute(&input);
}

void
SWGProductApi::getInventoryCallback(HttpRequestWorker * worker) {
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

    emit getInventorySignal(output);
    
}
void
SWGProductApi::getVariant(QString* productID, QString* variantID) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/{productID}/variants/{variantID}");

    QString productIDPathParam("{"); productIDPathParam.append("productID").append("}");
    fullPath.replace(productIDPathParam, stringValue(productID));
    QString variantIDPathParam("{"); variantIDPathParam.append("variantID").append("}");
    fullPath.replace(variantIDPathParam, stringValue(variantID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGProductApi::getVariantCallback);

    worker->execute(&input);
}

void
SWGProductApi::getVariantCallback(HttpRequestWorker * worker) {
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

    emit getVariantSignal(output);
    
}
void
SWGProductApi::getVariantInventory(QString* productID, QString* variantID) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/{productID}/variants/inventory/{variantID}");

    QString productIDPathParam("{"); productIDPathParam.append("productID").append("}");
    fullPath.replace(productIDPathParam, stringValue(productID));
    QString variantIDPathParam("{"); variantIDPathParam.append("variantID").append("}");
    fullPath.replace(variantIDPathParam, stringValue(variantID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGProductApi::getVariantInventoryCallback);

    worker->execute(&input);
}

void
SWGProductApi::getVariantInventoryCallback(HttpRequestWorker * worker) {
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

    emit getVariantInventorySignal(output);
    
}
void
SWGProductApi::list(QString* search, QString* searchOn, QString* sortBy, qint32 page, qint32 pageSize) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products");


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
            &SWGProductApi::listCallback);

    worker->execute(&input);
}

void
SWGProductApi::listCallback(HttpRequestWorker * worker) {
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
SWGProductApi::listAssignments(QString* productID, QString* buyerID, QString* userID, QString* userGroupID, QString* level, QString* priceScheduleID, qint32 page, qint32 pageSize) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/assignments");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("productID"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(productID)));

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
    fullPath.append(QUrl::toPercentEncoding("userID"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(userID)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("userGroupID"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(userGroupID)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("level"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(level)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("priceScheduleID"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(priceScheduleID)));

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
            &SWGProductApi::listAssignmentsCallback);

    worker->execute(&input);
}

void
SWGProductApi::listAssignmentsCallback(HttpRequestWorker * worker) {
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

    emit listAssignmentsSignal(output);
    
}
void
SWGProductApi::listInventory(QString* search, QString* searchOn, QString* sortBy, qint32 page, qint32 pageSize) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/inventory");


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
            &SWGProductApi::listInventoryCallback);

    worker->execute(&input);
}

void
SWGProductApi::listInventoryCallback(HttpRequestWorker * worker) {
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

    emit listInventorySignal(output);
    
}
void
SWGProductApi::listVariantInventory(QString* productID, QString* search, QString* searchOn, QString* sortBy, qint32 page, qint32 pageSize) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/{productID}/variants/inventory");

    QString productIDPathParam("{"); productIDPathParam.append("productID").append("}");
    fullPath.replace(productIDPathParam, stringValue(productID));

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
            &SWGProductApi::listVariantInventoryCallback);

    worker->execute(&input);
}

void
SWGProductApi::listVariantInventoryCallback(HttpRequestWorker * worker) {
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

    emit listVariantInventorySignal(output);
    
}
void
SWGProductApi::listVariants(QString* productID, QString* search, QString* searchOn, QString* sortBy, qint32 page, qint32 pageSize) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/{productID}/variants");

    QString productIDPathParam("{"); productIDPathParam.append("productID").append("}");
    fullPath.replace(productIDPathParam, stringValue(productID));

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
            &SWGProductApi::listVariantsCallback);

    worker->execute(&input);
}

void
SWGProductApi::listVariantsCallback(HttpRequestWorker * worker) {
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

    emit listVariantsSignal(output);
    
}
void
SWGProductApi::patch(QString* productID, SWGProduct product) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/{productID}");

    QString productIDPathParam("{"); productIDPathParam.append("productID").append("}");
    fullPath.replace(productIDPathParam, stringValue(productID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PATCH");

    
    QString output = product.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGProductApi::patchCallback);

    worker->execute(&input);
}

void
SWGProductApi::patchCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit patchSignal();
}
void
SWGProductApi::patchVariant(QString* productID, QString* variantID, SWGVariant variant) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/{productID}/variants/{variantID}");

    QString productIDPathParam("{"); productIDPathParam.append("productID").append("}");
    fullPath.replace(productIDPathParam, stringValue(productID));
    QString variantIDPathParam("{"); variantIDPathParam.append("variantID").append("}");
    fullPath.replace(variantIDPathParam, stringValue(variantID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PATCH");

    
    QString output = variant.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGProductApi::patchVariantCallback);

    worker->execute(&input);
}

void
SWGProductApi::patchVariantCallback(HttpRequestWorker * worker) {
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

    emit patchVariantSignal(output);
    
}
void
SWGProductApi::saveAssignment(SWGProductAssignment productAssignment) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/assignments");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = productAssignment.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGProductApi::saveAssignmentCallback);

    worker->execute(&input);
}

void
SWGProductApi::saveAssignmentCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit saveAssignmentSignal();
}
void
SWGProductApi::update(QString* productID, SWGProduct product) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/{productID}");

    QString productIDPathParam("{"); productIDPathParam.append("productID").append("}");
    fullPath.replace(productIDPathParam, stringValue(productID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = product.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGProductApi::updateCallback);

    worker->execute(&input);
}

void
SWGProductApi::updateCallback(HttpRequestWorker * worker) {
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
void
SWGProductApi::updateInventory(QString* productID, qint32 inventory) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/{productID}/inventory/{inventory}");

    QString productIDPathParam("{"); productIDPathParam.append("productID").append("}");
    fullPath.replace(productIDPathParam, stringValue(productID));
    QString inventoryPathParam("{"); inventoryPathParam.append("inventory").append("}");
    fullPath.replace(inventoryPathParam, stringValue(inventory));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGProductApi::updateInventoryCallback);

    worker->execute(&input);
}

void
SWGProductApi::updateInventoryCallback(HttpRequestWorker * worker) {
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

    emit updateInventorySignal(output);
    
}
void
SWGProductApi::updateVariant(QString* productID, QString* variantID, SWGVariant variant) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/{productID}/variants/{variantID}");

    QString productIDPathParam("{"); productIDPathParam.append("productID").append("}");
    fullPath.replace(productIDPathParam, stringValue(productID));
    QString variantIDPathParam("{"); variantIDPathParam.append("variantID").append("}");
    fullPath.replace(variantIDPathParam, stringValue(variantID));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = variant.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGProductApi::updateVariantCallback);

    worker->execute(&input);
}

void
SWGProductApi::updateVariantCallback(HttpRequestWorker * worker) {
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

    emit updateVariantSignal(output);
    
}
void
SWGProductApi::updateVariantInventory(QString* productID, QString* variantID, qint32 inventory) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/products/{productID}/variants/inventory/{variantID}/{inventory}");

    QString productIDPathParam("{"); productIDPathParam.append("productID").append("}");
    fullPath.replace(productIDPathParam, stringValue(productID));
    QString variantIDPathParam("{"); variantIDPathParam.append("variantID").append("}");
    fullPath.replace(variantIDPathParam, stringValue(variantID));
    QString inventoryPathParam("{"); inventoryPathParam.append("inventory").append("}");
    fullPath.replace(inventoryPathParam, stringValue(inventory));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGProductApi::updateVariantInventoryCallback);

    worker->execute(&input);
}

void
SWGProductApi::updateVariantInventoryCallback(HttpRequestWorker * worker) {
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

    emit updateVariantInventorySignal(output);
    
}
} /* namespace Swagger */
