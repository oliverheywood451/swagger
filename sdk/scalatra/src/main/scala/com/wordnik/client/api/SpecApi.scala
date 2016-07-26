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

import com.wordnik.client.model.Spec
import com.wordnik.client.model.SpecOption
import com.wordnik.client.model.SpecProductAssignment

import java.io.File

import org.scalatra.{ TypedParamSupport, ScalatraServlet }
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{FileUploadSupport, MultipartConfig, SizeConstraintExceededException}

import scala.collection.JavaConverters._

class SpecApi (implicit val swagger: Swagger) extends ScalatraServlet
    with FileUploadSupport
    with JacksonJsonSupport
    with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "SpecApi"
  override protected val applicationName: Option[String] = Some("/v1/Spec")

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val createOperation = (apiOperation[Object]("create")
      summary ""
      parameters(bodyParam[Spec]("spec").description(""))
  )

  post("/specs",operation(createOperation)) {
    
    
          val spec = parsedBody.extract[Spec]

    println("spec: " + spec)
  }

  

  val createOptionOperation = (apiOperation[Object]("createOption")
      summary ""
      parameters(pathParam[String]("specID").description(""), bodyParam[SpecOption]("option").description(""))
  )

  post("/specs/{specID}/options",operation(createOptionOperation)) {
    
    
      val specID = params.getOrElse("specID", halt(400))
    
    println("specID: " + specID)
    
    
          val option = parsedBody.extract[SpecOption]

    println("option: " + option)
  }

  

  val deleteOperation = (apiOperation[Unit]("delete")
      summary ""
      parameters(pathParam[String]("specID").description(""))
  )

  delete("/specs/{specID}",operation(deleteOperation)) {
    
    
      val specID = params.getOrElse("specID", halt(400))
    
    println("specID: " + specID)
  }

  

  val deleteOptionOperation = (apiOperation[Unit]("deleteOption")
      summary ""
      parameters(pathParam[String]("specID").description(""), pathParam[String]("optionID").description(""))
  )

  delete("/specs/{specID}/options/{optionID}",operation(deleteOptionOperation)) {
    
    
      val specID = params.getOrElse("specID", halt(400))
    
    println("specID: " + specID)
    
    
      val optionID = params.getOrElse("optionID", halt(400))
    
    println("optionID: " + optionID)
  }

  

  val deleteProductAssignmentOperation = (apiOperation[Unit]("deleteProductAssignment")
      summary ""
      parameters(pathParam[String]("specID").description(""), pathParam[String]("productID").description(""))
  )

  delete("/specs/{specID}/productassignments/{productID}",operation(deleteProductAssignmentOperation)) {
    
    
      val specID = params.getOrElse("specID", halt(400))
    
    println("specID: " + specID)
    
    
      val productID = params.getOrElse("productID", halt(400))
    
    println("productID: " + productID)
  }

  

  val getOperation = (apiOperation[Object]("get")
      summary ""
      parameters(pathParam[String]("specID").description(""))
  )

  get("/specs/{specID}",operation(getOperation)) {
    
    
      val specID = params.getOrElse("specID", halt(400))
    
    println("specID: " + specID)
  }

  

  val getOptionOperation = (apiOperation[Object]("getOption")
      summary ""
      parameters(pathParam[String]("specID").description(""), pathParam[String]("optionID").description(""))
  )

  get("/specs/{specID}/options/{optionID}",operation(getOptionOperation)) {
    
    
      val specID = params.getOrElse("specID", halt(400))
    
    println("specID: " + specID)
    
    
      val optionID = params.getOrElse("optionID", halt(400))
    
    println("optionID: " + optionID)
  }

  

  val listOperation = (apiOperation[Object]("list")
      summary ""
      parameters(queryParam[String]("search").description("").optional, queryParam[String]("searchOn").description("").optional, queryParam[String]("sortBy").description("").optional, queryParam[Int]("page").description("").optional, queryParam[Int]("pageSize").description("").optional)
  )

  get("/specs",operation(listOperation)) {
    
    
                val search = params.getAs[String]("search")

    println("search: " + search)
    
    
                val searchOn = params.getAs[String]("searchOn")

    println("searchOn: " + searchOn)
    
    
                val sortBy = params.getAs[String]("sortBy")

    println("sortBy: " + sortBy)
    
    
                val page = params.getAs[Int]("page")

    println("page: " + page)
    
    
                val pageSize = params.getAs[Int]("pageSize")

    println("pageSize: " + pageSize)
  }

  

  val listOptionsOperation = (apiOperation[Object]("listOptions")
      summary ""
      parameters(pathParam[String]("specID").description(""), queryParam[String]("search").description("").optional, queryParam[String]("searchOn").description("").optional, queryParam[String]("sortBy").description("").optional, queryParam[Int]("page").description("").optional, queryParam[Int]("pageSize").description("").optional)
  )

  get("/specs/{specID}/options",operation(listOptionsOperation)) {
    
    
      val specID = params.getOrElse("specID", halt(400))
    
    println("specID: " + specID)
    
    
                val search = params.getAs[String]("search")

    println("search: " + search)
    
    
                val searchOn = params.getAs[String]("searchOn")

    println("searchOn: " + searchOn)
    
    
                val sortBy = params.getAs[String]("sortBy")

    println("sortBy: " + sortBy)
    
    
                val page = params.getAs[Int]("page")

    println("page: " + page)
    
    
                val pageSize = params.getAs[Int]("pageSize")

    println("pageSize: " + pageSize)
  }

  

  val listProductAssignmentsOperation = (apiOperation[Object]("listProductAssignments")
      summary ""
      parameters(queryParam[String]("specID").description("").optional, queryParam[String]("productID").description("").optional, queryParam[Int]("page").description("").optional, queryParam[Int]("pageSize").description("").optional)
  )

  get("/specs/productassignments",operation(listProductAssignmentsOperation)) {
    
    
                val specID = params.getAs[String]("specID")

    println("specID: " + specID)
    
    
                val productID = params.getAs[String]("productID")

    println("productID: " + productID)
    
    
                val page = params.getAs[Int]("page")

    println("page: " + page)
    
    
                val pageSize = params.getAs[Int]("pageSize")

    println("pageSize: " + pageSize)
  }

  

  val patchOperation = (apiOperation[Object]("patch")
      summary ""
      parameters(pathParam[String]("specID").description(""), bodyParam[Spec]("spec").description(""))
  )

  patch("/specs/{specID}",operation(patchOperation)) {
    
    
      val specID = params.getOrElse("specID", halt(400))
    
    println("specID: " + specID)
    
    
          val spec = parsedBody.extract[Spec]

    println("spec: " + spec)
  }

  

  val patchOptionOperation = (apiOperation[Object]("patchOption")
      summary ""
      parameters(pathParam[String]("specID").description(""), pathParam[String]("optionID").description(""), bodyParam[SpecOption]("option").description(""))
  )

  patch("/specs/{specID}/options/{optionID}",operation(patchOptionOperation)) {
    
    
      val specID = params.getOrElse("specID", halt(400))
    
    println("specID: " + specID)
    
    
      val optionID = params.getOrElse("optionID", halt(400))
    
    println("optionID: " + optionID)
    
    
          val option = parsedBody.extract[SpecOption]

    println("option: " + option)
  }

  

  val saveProductAssignmentOperation = (apiOperation[Unit]("saveProductAssignment")
      summary ""
      parameters(bodyParam[SpecProductAssignment]("productAssignment").description(""))
  )

  post("/specs/productassignments",operation(saveProductAssignmentOperation)) {
    
    
          val productAssignment = parsedBody.extract[SpecProductAssignment]

    println("productAssignment: " + productAssignment)
  }

  

  val updateOperation = (apiOperation[Object]("update")
      summary ""
      parameters(pathParam[String]("specID").description(""), bodyParam[Spec]("spec").description(""))
  )

  put("/specs/{specID}",operation(updateOperation)) {
    
    
      val specID = params.getOrElse("specID", halt(400))
    
    println("specID: " + specID)
    
    
          val spec = parsedBody.extract[Spec]

    println("spec: " + spec)
  }

  

  val updateOptionOperation = (apiOperation[Object]("updateOption")
      summary ""
      parameters(pathParam[String]("specID").description(""), pathParam[String]("optionID").description(""), bodyParam[SpecOption]("option").description(""))
  )

  put("/specs/{specID}/options/{optionID}",operation(updateOptionOperation)) {
    
    
      val specID = params.getOrElse("specID", halt(400))
    
    println("specID: " + specID)
    
    
      val optionID = params.getOrElse("optionID", halt(400))
    
    println("optionID: " + optionID)
    
    
          val option = parsedBody.extract[SpecOption]

    println("option: " + option)
  }

}
