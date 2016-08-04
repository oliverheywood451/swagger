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

import io.swagger.client.model.LineItem
import io.swagger.client.model.Address
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class LineItemApi(val defBasePath: String = "https://api.ordercloud.io/v1",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  /**
   * 
   * 
   * @param buyerID ID of the buyer. 
   * @param orderID ID of the order. 
   * @param lineItem  
   * @return Any
   */
  def create (buyerID: String, orderID: String, lineItem: LineItem) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/orders/{orderID}/lineitems".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "orderID" + "\\}",apiInvoker.escape(orderID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if (lineItem == null) throw new Exception("Missing required parameter 'lineItem' when calling LineItemApi->create")

        
    
    var postBody: AnyRef = lineItem

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
   * @param lineItemID ID of the line item. 
   * @return void
   */
  def delete (buyerID: String, orderID: String, lineItemID: String)  = {
    // create path and map variables
    val path = "/buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "orderID" + "\\}",apiInvoker.escape(orderID))

.replaceAll("\\{" + "lineItemID" + "\\}",apiInvoker.escape(lineItemID))


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
   * @param lineItemID ID of the line item. 
   * @return Any
   */
  def get (buyerID: String, orderID: String, lineItemID: String) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "orderID" + "\\}",apiInvoker.escape(orderID))

.replaceAll("\\{" + "lineItemID" + "\\}",apiInvoker.escape(lineItemID))


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
    val path = "/buyers/{buyerID}/orders/{orderID}/lineitems".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

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
   * @param lineItemID ID of the line item. 
   * @param partialLineItem  
   * @return Any
   */
  def patch (buyerID: String, orderID: String, lineItemID: String, partialLineItem: LineItem) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "orderID" + "\\}",apiInvoker.escape(orderID))

.replaceAll("\\{" + "lineItemID" + "\\}",apiInvoker.escape(lineItemID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if (partialLineItem == null) throw new Exception("Missing required parameter 'partialLineItem' when calling LineItemApi->patch")

        
    
    var postBody: AnyRef = partialLineItem

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
   * @param lineItemID ID of the line item. 
   * @param address  
   * @return Any
   */
  def patchShippingAddress (buyerID: String, orderID: String, lineItemID: String, address: Address) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID}/shipto".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "orderID" + "\\}",apiInvoker.escape(orderID))

.replaceAll("\\{" + "lineItemID" + "\\}",apiInvoker.escape(lineItemID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if (address == null) throw new Exception("Missing required parameter 'address' when calling LineItemApi->patchShippingAddress")

        
    
    var postBody: AnyRef = address

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
   * @param lineItemID ID of the line item. 
   * @param address  
   * @return Any
   */
  def setShippingAddress (buyerID: String, orderID: String, lineItemID: String, address: Address) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID}/shipto".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "orderID" + "\\}",apiInvoker.escape(orderID))

.replaceAll("\\{" + "lineItemID" + "\\}",apiInvoker.escape(lineItemID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if (address == null) throw new Exception("Missing required parameter 'address' when calling LineItemApi->setShippingAddress")

        
    
    var postBody: AnyRef = address

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
   * @param lineItemID ID of the line item. 
   * @param lineItem  
   * @return Any
   */
  def update (buyerID: String, orderID: String, lineItemID: String, lineItem: LineItem) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "orderID" + "\\}",apiInvoker.escape(orderID))

.replaceAll("\\{" + "lineItemID" + "\\}",apiInvoker.escape(lineItemID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if (lineItem == null) throw new Exception("Missing required parameter 'lineItem' when calling LineItemApi->update")

        
    
    var postBody: AnyRef = lineItem

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