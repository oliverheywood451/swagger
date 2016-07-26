/**
 * NOTE: This class is auto generated by the akka-scala (beta) swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * For any issue or feedback, please open a ticket via https://github.com/swagger-api/swagger-codegen/issues/new
 */
package io.swagger.client.api

import io.swagger.client.model.Any
import io.swagger.client.core._
import io.swagger.client.core.CollectionFormats._
import io.swagger.client.core.ApiKeyLocations._

object SecurityProfileApi {

  /**
   * 
   * 
   * Expected answers:
   *   code 200 : Any 
   * 
   * @param securityProfileID ID of the security profile.
   */
  def get(securityProfileID: String): ApiRequest[Any] =
    ApiRequest[Any](ApiMethods.GET, "https://api.ordercloud.io/v1", "/SecurityProfiles/{securityProfileID}", "application/json")
      .withPathParam("securityProfileID", securityProfileID)
      .withSuccessResponse[Any](200)
        /**
   * 
   * 
   * Expected answers:
   *   code 200 : Any 
   * 
   * @param search Word or phrase to search for.
   * @param searchOn Comma-delimited list of fields to search on.
   * @param sortBy Comma-delimited list of fields to sort by.
   * @param page Page of results to return. Default: 1
   * @param pageSize Number of results to return per page. Default: 20, max: 100.
   */
  def list(search: Option[String] = None, searchOn: Option[String] = None, sortBy: Option[String] = None, page: Option[Int] = None, pageSize: Option[Int] = None): ApiRequest[Any] =
    ApiRequest[Any](ApiMethods.GET, "https://api.ordercloud.io/v1", "/SecurityProfiles", "application/json")
      .withQueryParam("search", search)
      .withQueryParam("searchOn", searchOn)
      .withQueryParam("sortBy", sortBy)
      .withQueryParam("page", page)
      .withQueryParam("pageSize", pageSize)
      .withSuccessResponse[Any](200)
      

}

