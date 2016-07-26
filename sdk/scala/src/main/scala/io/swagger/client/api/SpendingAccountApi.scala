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

import io.swagger.client.model.SpendingAccount
import io.swagger.client.model.SpendingAccountAssignment
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class SpendingAccountApi(val defBasePath: String = "https://api.ordercloud.io/v1",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  /**
   * 
   * 
   * @param buyerID ID of the buyer. 
   * @param spendingAccount  
   * @return Any
   */
  def create (buyerID: String, spendingAccount: SpendingAccount) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/spendingaccounts".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if (spendingAccount == null) throw new Exception("Missing required parameter 'spendingAccount' when calling SpendingAccountApi->create")

        
    
    var postBody: AnyRef = spendingAccount

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
   * @param spendingAccountID ID of the spending account. 
   * @return void
   */
  def delete (buyerID: String, spendingAccountID: String)  = {
    // create path and map variables
    val path = "/buyers/{buyerID}/spendingaccounts/{spendingAccountID}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "spendingAccountID" + "\\}",apiInvoker.escape(spendingAccountID))


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
   * @param spendingAccountID ID of the spending account. 
   * @param userID ID of the user. (optional)
   * @param userGroupID ID of the user group. (optional)
   * @return void
   */
  def deleteAssignment (buyerID: String, spendingAccountID: String, userID: String, userGroupID: String)  = {
    // create path and map variables
    val path = "/buyers/{buyerID}/spendingaccounts/{spendingAccountID}/assignments".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "spendingAccountID" + "\\}",apiInvoker.escape(spendingAccountID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if(String.valueOf(userID) != "null") queryParams += "userID" -> userID.toString
if(String.valueOf(userGroupID) != "null") queryParams += "userGroupID" -> userGroupID.toString
    
    
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
   * @param spendingAccountID ID of the spending account. 
   * @return Any
   */
  def get (buyerID: String, spendingAccountID: String) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/spendingaccounts/{spendingAccountID}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "spendingAccountID" + "\\}",apiInvoker.escape(spendingAccountID))


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
   * @param search Word or phrase to search for. (optional)
   * @param searchOn Comma-delimited list of fields to search on. (optional)
   * @param sortBy Comma-delimited list of fields to sort by. (optional)
   * @param page Page of results to return. Default: 1 (optional)
   * @param pageSize Number of results to return per page. Default: 20, max: 100. (optional)
   * @return Any
   */
  def list (buyerID: String, search: String, searchOn: String, sortBy: String, page: Integer, pageSize: Integer) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/spendingaccounts".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))


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
   * @param spendingAccountID ID of the spending account. (optional)
   * @param userID ID of the user. (optional)
   * @param userGroupID ID of the user group. (optional)
   * @param level Level of the spending account. (optional)
   * @param page Page of results to return. Default: 1 (optional)
   * @param pageSize Number of results to return per page. Default: 20, max: 100. (optional)
   * @return Any
   */
  def listAssignments (buyerID: String, spendingAccountID: String, userID: String, userGroupID: String, level: String, page: Integer, pageSize: Integer) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/spendingaccounts/assignments".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if(String.valueOf(spendingAccountID) != "null") queryParams += "spendingAccountID" -> spendingAccountID.toString
if(String.valueOf(userID) != "null") queryParams += "userID" -> userID.toString
if(String.valueOf(userGroupID) != "null") queryParams += "userGroupID" -> userGroupID.toString
if(String.valueOf(level) != "null") queryParams += "level" -> level.toString
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
   * @param spendingAccountID ID of the spending account. 
   * @param spendingAccount  
   * @return Any
   */
  def patch (buyerID: String, spendingAccountID: String, spendingAccount: SpendingAccount) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/spendingaccounts/{spendingAccountID}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "spendingAccountID" + "\\}",apiInvoker.escape(spendingAccountID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if (spendingAccount == null) throw new Exception("Missing required parameter 'spendingAccount' when calling SpendingAccountApi->patch")

        
    
    var postBody: AnyRef = spendingAccount

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
   * @param assignment  
   * @return void
   */
  def saveAssignment (buyerID: String, assignment: SpendingAccountAssignment)  = {
    // create path and map variables
    val path = "/buyers/{buyerID}/spendingaccounts/assignments".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if (assignment == null) throw new Exception("Missing required parameter 'assignment' when calling SpendingAccountApi->saveAssignment")

        
    
    var postBody: AnyRef = assignment

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
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
   * @param spendingAccountID ID of the spending account. 
   * @param spendingAccount  
   * @return Any
   */
  def update (buyerID: String, spendingAccountID: String, spendingAccount: SpendingAccount) : Option[Any] = {
    // create path and map variables
    val path = "/buyers/{buyerID}/spendingaccounts/{spendingAccountID}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "buyerID" + "\\}",apiInvoker.escape(buyerID))

.replaceAll("\\{" + "spendingAccountID" + "\\}",apiInvoker.escape(spendingAccountID))


    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    if (spendingAccount == null) throw new Exception("Missing required parameter 'spendingAccount' when calling SpendingAccountApi->update")

        
    
    var postBody: AnyRef = spendingAccount

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
