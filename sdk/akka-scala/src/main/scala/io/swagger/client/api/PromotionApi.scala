/**
 * NOTE: This class is auto generated by the akka-scala (beta) swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * For any issue or feedback, please open a ticket via https://github.com/swagger-api/swagger-codegen/issues/new
 */
package io.swagger.client.api

import io.swagger.client.model.Any
import io.swagger.client.model.Promotion
import io.swagger.client.model.PromotionAssignment
import io.swagger.client.core._
import io.swagger.client.core.CollectionFormats._
import io.swagger.client.core.ApiKeyLocations._

object PromotionApi {

  /**
   * 
   * 
   * Expected answers:
   *   code 201 : Any 
   * 
   * @param promo 
   */
  def create(promo: Promotion): ApiRequest[Any] =
    ApiRequest[Any](ApiMethods.POST, "https://api.ordercloud.io/v1", "/promotions", "application/json")
      .withBody(promo)
      .withSuccessResponse[Any](201)
        /**
   * 
   * 
   * Expected answers:
   *   code 204 :  
   * 
   * @param promotionID ID of the promotion.
   */
  def delete(promotionID: String): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.DELETE, "https://api.ordercloud.io/v1", "/promotions/{promotionID}", "application/json")
      .withPathParam("promotionID", promotionID)
      .withSuccessResponse[Unit](204)
        /**
   * 
   * 
   * Expected answers:
   *   code 204 :  
   * 
   * @param promotionID ID of the promotion.
   * @param buyerID ID of the buyer.
   * @param userID ID of the user.
   * @param userGroupID ID of the user group.
   */
  def deleteAssignment(promotionID: String, buyerID: String, userID: Option[String] = None, userGroupID: Option[String] = None): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.DELETE, "https://api.ordercloud.io/v1", "/promotions/{promotionID}/assignments", "application/json")
      .withQueryParam("buyerID", buyerID)
      .withQueryParam("userID", userID)
      .withQueryParam("userGroupID", userGroupID)
      .withPathParam("promotionID", promotionID)
      .withSuccessResponse[Unit](204)
        /**
   * 
   * 
   * Expected answers:
   *   code 200 : Any 
   * 
   * @param promotionID ID of the promotion.
   */
  def get(promotionID: String): ApiRequest[Any] =
    ApiRequest[Any](ApiMethods.GET, "https://api.ordercloud.io/v1", "/promotions/{promotionID}", "application/json")
      .withPathParam("promotionID", promotionID)
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
    ApiRequest[Any](ApiMethods.GET, "https://api.ordercloud.io/v1", "/promotions", "application/json")
      .withQueryParam("search", search)
      .withQueryParam("searchOn", searchOn)
      .withQueryParam("sortBy", sortBy)
      .withQueryParam("page", page)
      .withQueryParam("pageSize", pageSize)
      .withSuccessResponse[Any](200)
        /**
   * 
   * 
   * Expected answers:
   *   code 200 : Any 
   * 
   * @param buyerID ID of the buyer.
   * @param promotionID ID of the promotion.
   * @param userID ID of the user.
   * @param userGroupID ID of the user group.
   * @param level Level of the promotion.
   * @param page Page of results to return. Default: 1
   * @param pageSize Number of results to return per page. Default: 20, max: 100.
   */
  def listAssignments(buyerID: String, promotionID: Option[String] = None, userID: Option[String] = None, userGroupID: Option[String] = None, level: Option[String] = None, page: Option[Int] = None, pageSize: Option[Int] = None): ApiRequest[Any] =
    ApiRequest[Any](ApiMethods.GET, "https://api.ordercloud.io/v1", "/promotions/assignments", "application/json")
      .withQueryParam("buyerID", buyerID)
      .withQueryParam("promotionID", promotionID)
      .withQueryParam("userID", userID)
      .withQueryParam("userGroupID", userGroupID)
      .withQueryParam("level", level)
      .withQueryParam("page", page)
      .withQueryParam("pageSize", pageSize)
      .withSuccessResponse[Any](200)
        /**
   * 
   * 
   * Expected answers:
   *   code 200 : Any 
   * 
   * @param promotionID ID of the promotion.
   * @param partialPromotion 
   */
  def patch(promotionID: String, partialPromotion: Promotion): ApiRequest[Any] =
    ApiRequest[Any](ApiMethods.PATCH, "https://api.ordercloud.io/v1", "/promotions/{promotionID}", "application/json")
      .withBody(partialPromotion)
      .withPathParam("promotionID", promotionID)
      .withSuccessResponse[Any](200)
        /**
   * 
   * 
   * Expected answers:
   *   code 204 :  
   * 
   * @param assignment 
   */
  def saveAssignment(assignment: PromotionAssignment): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.POST, "https://api.ordercloud.io/v1", "/promotions/assignments", "application/json")
      .withBody(assignment)
      .withSuccessResponse[Unit](204)
        /**
   * 
   * 
   * Expected answers:
   *   code 200 : Any 
   * 
   * @param promotionID ID of the promotion.
   * @param promo 
   */
  def update(promotionID: String, promo: Promotion): ApiRequest[Any] =
    ApiRequest[Any](ApiMethods.PUT, "https://api.ordercloud.io/v1", "/promotions/{promotionID}", "application/json")
      .withBody(promo)
      .withPathParam("promotionID", promotionID)
      .withSuccessResponse[Any](200)
      

}
