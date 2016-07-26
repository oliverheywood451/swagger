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

package io.swagger.client.api

import io.swagger.client.model.Payment
import io.swagger.client.model.PaymentTransaction
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class PaymentApi(val defBasePath: String = "https://api.ordercloud.io/v1",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  /**
   * 
   * 
   * @param buyerID ID of the buyer. 
   * @param orderID ID of the order. 
   * @param payment  
   * @return Any
   */
  def create (buyerID: String, orderID: String, payment: Payment) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/orders/{orderID}/payments".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "orderID" + "\\}",apiInvoker.escape(orderID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if (payment == null) throw new Exception("Missing required parameter 'payment' when calling PaymentApi->create")

        
    
    var postBody: AnyRef = payment

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Any]).asInstanceOf[Any])
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }

  /**
   * 
   * 
   * @param buyerID ID of the buyer. 
   * @param orderID ID of the order. 
   * @param paymentID ID of the payment. 
   * @param transaction  
   * @return Any
   */
  def createTransaction (buyerID: String, orderID: String, paymentID: String, transaction: PaymentTransaction) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/orders/{orderID}/payments/{paymentID}/transactions".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "orderID" + "\\}",apiInvoker.escape(orderID))

.replaceAll("\\{" + "paymentID" + "\\}",apiInvoker.escape(paymentID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if (transaction == null) throw new Exception("Missing required parameter 'transaction' when calling PaymentApi->createTransaction")

        
    
    var postBody: AnyRef = transaction

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Any]).asInstanceOf[Any])
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }

  /**
   * 
   * 
   * @param buyerID ID of the buyer. 
   * @param orderID ID of the order. 
   * @param paymentID ID of the payment. 
   * @return void
   */
  def delete (buyerID: String, orderID: String, paymentID: String)  = {
    // create path and map variables
    val path = "/buyers/{buyerID}/orders/{orderID}/payments/{paymentID}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "orderID" + "\\}",apiInvoker.escape(orderID))

.replaceAll("\\{" + "paymentID" + "\\}",apiInvoker.escape(paymentID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

        
    
    var postBody: AnyRef = null

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
    }

    try {
      apiInvoker.invokeApi(basePath, path, "DELETE", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
                  case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }

  /**
   * 
   * 
   * @param buyerID ID of the buyer. 
   * @param orderID ID of the order. 
   * @param paymentID ID of the payment. 
   * @param transactionID ID of the transaction. 
   * @return void
   */
  def deleteTransaction (buyerID: String, orderID: String, paymentID: String, transactionID: String)  = {
    // create path and map variables
    val path = "/buyers/{buyerID}/orders/{orderID}/payments/{paymentID}/transactions/{transactionID}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "orderID" + "\\}",apiInvoker.escape(orderID))

.replaceAll("\\{" + "paymentID" + "\\}",apiInvoker.escape(paymentID))

.replaceAll("\\{" + "transactionID" + "\\}",apiInvoker.escape(transactionID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

        
    
    var postBody: AnyRef = null

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
    }

    try {
      apiInvoker.invokeApi(basePath, path, "DELETE", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
                  case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }

  /**
   * 
   * 
   * @param buyerID ID of the buyer. 
   * @param orderID ID of the order. 
   * @param paymentID ID of the payment. 
   * @return Any
   */
  def get (buyerID: String, orderID: String, paymentID: String) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/orders/{orderID}/payments/{paymentID}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "orderID" + "\\}",apiInvoker.escape(orderID))

.replaceAll("\\{" + "paymentID" + "\\}",apiInvoker.escape(paymentID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

        
    
    var postBody: AnyRef = null

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
    }

    try {
      apiInvoker.invokeApi(basePath, path, "GET", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Any]).asInstanceOf[Any])
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }

  /**
   * 
   * 
   * @param buyerID ID of the buyer. 
   * @param orderID ID of the order. 
   * @param search Word or phrase to search for. (optional)
   * @param searchOn Comma-delimited list of fields to search on. (optional)
   * @param sortBy Comma-delimited list of fields to sort by. (optional)
   * @param page Page of results to return. Default: 1 (optional)
   * @param pageSize Number of results to return per page. Default: 20, max: 100. (optional)
   * @return Any
   */
  def list (buyerID: String, orderID: String, search: String, searchOn: String, sortBy: String, page: Integer, pageSize: Integer) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/orders/{orderID}/payments".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "orderID" + "\\}",apiInvoker.escape(orderID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if(String.valueOf(search) != "null") queryParams += "search" -> search.toString
if(String.valueOf(searchOn) != "null") queryParams += "searchOn" -> searchOn.toString
if(String.valueOf(sortBy) != "null") queryParams += "sortBy" -> sortBy.toString
if(String.valueOf(page) != "null") queryParams += "page" -> page.toString
if(String.valueOf(pageSize) != "null") queryParams += "pageSize" -> pageSize.toString
    
    
    var postBody: AnyRef = null

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
    }

    try {
      apiInvoker.invokeApi(basePath, path, "GET", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Any]).asInstanceOf[Any])
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }

  /**
   * 
   * 
   * @param buyerID ID of the buyer. 
   * @param orderID ID of the order. 
   * @param paymentID ID of the payment. 
   * @param partialPayment  
   * @return Any
   */
  def patch (buyerID: String, orderID: String, paymentID: String, partialPayment: Payment) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/orders/{orderID}/payments/{paymentID}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "orderID" + "\\}",apiInvoker.escape(orderID))

.replaceAll("\\{" + "paymentID" + "\\}",apiInvoker.escape(paymentID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if (partialPayment == null) throw new Exception("Missing required parameter 'partialPayment' when calling PaymentApi->patch")

        
    
    var postBody: AnyRef = partialPayment

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
    }

    try {
      apiInvoker.invokeApi(basePath, path, "PATCH", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Any]).asInstanceOf[Any])
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }

  /**
   * 
   * 
   * @param buyerID ID of the buyer. 
   * @param orderID ID of the order. 
   * @param paymentID ID of the payment. 
   * @param transactionID ID of the transaction. 
   * @param partialTransaction  
   * @return Any
   */
  def patchTransaction (buyerID: String, orderID: String, paymentID: String, transactionID: String, partialTransaction: PaymentTransaction) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/orders/{orderID}/payments/{paymentID}/transactions/{transactionID}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "orderID" + "\\}",apiInvoker.escape(orderID))

.replaceAll("\\{" + "paymentID" + "\\}",apiInvoker.escape(paymentID))

.replaceAll("\\{" + "transactionID" + "\\}",apiInvoker.escape(transactionID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if (partialTransaction == null) throw new Exception("Missing required parameter 'partialTransaction' when calling PaymentApi->patchTransaction")

        
    
    var postBody: AnyRef = partialTransaction

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
    }

    try {
      apiInvoker.invokeApi(basePath, path, "PATCH", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Any]).asInstanceOf[Any])
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }

  /**
   * 
   * 
   * @param buyerID ID of the buyer. 
   * @param orderID ID of the order. 
   * @param paymentID ID of the payment. 
   * @param payment  
   * @return Any
   */
  def update (buyerID: String, orderID: String, paymentID: String, payment: Payment) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/orders/{orderID}/payments/{paymentID}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "orderID" + "\\}",apiInvoker.escape(orderID))

.replaceAll("\\{" + "paymentID" + "\\}",apiInvoker.escape(paymentID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if (payment == null) throw new Exception("Missing required parameter 'payment' when calling PaymentApi->update")

        
    
    var postBody: AnyRef = payment

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
    }

    try {
      apiInvoker.invokeApi(basePath, path, "PUT", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Any]).asInstanceOf[Any])
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }

  /**
   * 
   * 
   * @param buyerID ID of the buyer. 
   * @param orderID ID of the order. 
   * @param paymentID ID of the payment. 
   * @param transactionID ID of the transaction. 
   * @param transaction  
   * @return Any
   */
  def updateTransaction (buyerID: String, orderID: String, paymentID: String, transactionID: String, transaction: PaymentTransaction) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/orders/{orderID}/payments/{paymentID}/transactions/{transactionID}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "orderID" + "\\}",apiInvoker.escape(orderID))

.replaceAll("\\{" + "paymentID" + "\\}",apiInvoker.escape(paymentID))

.replaceAll("\\{" + "transactionID" + "\\}",apiInvoker.escape(transactionID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if (transaction == null) throw new Exception("Missing required parameter 'transaction' when calling PaymentApi->updateTransaction")

        
    
    var postBody: AnyRef = transaction

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
    }

    try {
      apiInvoker.invokeApi(basePath, path, "PUT", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Any]).asInstanceOf[Any])
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }

}
