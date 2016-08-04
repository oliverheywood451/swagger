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

package com.wordnik.client.api

import com.wordnik.client.model.EmailTemplate

import java.io.File

import org.scalatra.{ TypedParamSupport, ScalatraServlet }
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{FileUploadSupport, MultipartConfig, SizeConstraintExceededException}

import scala.collection.JavaConverters._

class EmailTemplateApi (implicit val swagger: Swagger) extends ScalatraServlet
    with FileUploadSupport
    with JacksonJsonSupport
    with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "EmailTemplateApi"
  override protected val applicationName: Option[String] = Some("/v1/EmailTemplate")

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val getOperation = (apiOperation[Object]("get")
      summary ""
      parameters(pathParam[String]("buyerID").description(""), pathParam[String]("emailTemplateType").description(""))
  )

  get("/buyers/{buyerID}/emailtemplates/{emailTemplateType}",operation(getOperation)) {
    
    
      val buyerID = params.getOrElse("buyerID", halt(400))
    
    println("buyerID: " + buyerID)
    
    
      val emailTemplateType = params.getOrElse("emailTemplateType", halt(400))
    
    println("emailTemplateType: " + emailTemplateType)
  }

  

  val patchOperation = (apiOperation[Unit]("patch")
      summary ""
      parameters(pathParam[String]("buyerID").description(""), pathParam[String]("emailTemplateType").description(""), bodyParam[EmailTemplate]("emailTemplate").description(""))
  )

  patch("/buyers/{buyerID}/emailtemplates/{emailTemplateType}",operation(patchOperation)) {
    
    
      val buyerID = params.getOrElse("buyerID", halt(400))
    
    println("buyerID: " + buyerID)
    
    
      val emailTemplateType = params.getOrElse("emailTemplateType", halt(400))
    
    println("emailTemplateType: " + emailTemplateType)
    
    
          val emailTemplate = parsedBody.extract[EmailTemplate]

    println("emailTemplate: " + emailTemplate)
  }

  

  val resetToDefaultOperation = (apiOperation[Unit]("resetToDefault")
      summary ""
      parameters(pathParam[String]("buyerID").description(""), pathParam[String]("emailTemplateType").description(""))
  )

  delete("/buyers/{buyerID}/emailtemplates/{emailTemplateType}",operation(resetToDefaultOperation)) {
    
    
      val buyerID = params.getOrElse("buyerID", halt(400))
    
    println("buyerID: " + buyerID)
    
    
      val emailTemplateType = params.getOrElse("emailTemplateType", halt(400))
    
    println("emailTemplateType: " + emailTemplateType)
  }

  

  val updateOperation = (apiOperation[Unit]("update")
      summary ""
      parameters(pathParam[String]("buyerID").description(""), pathParam[String]("emailTemplateType").description(""), bodyParam[EmailTemplate]("emailTemplate").description(""))
  )

  put("/buyers/{buyerID}/emailtemplates/{emailTemplateType}",operation(updateOperation)) {
    
    
      val buyerID = params.getOrElse("buyerID", halt(400))
    
    println("buyerID: " + buyerID)
    
    
      val emailTemplateType = params.getOrElse("emailTemplateType", halt(400))
    
    println("emailTemplateType: " + emailTemplateType)
    
    
          val emailTemplate = parsedBody.extract[EmailTemplate]

    println("emailTemplate: " + emailTemplate)
  }

}