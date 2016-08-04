/**
 * NOTE: This class is auto generated by the akka-scala (beta) swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * For any issue or feedback, please open a ticket via https://github.com/swagger-api/swagger-codegen/issues/new
 */

package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class BuyerAddress (
  shipping: Option[Boolean],
  billing: Option[Boolean],
  companyName: Option[String],
  firstName: Option[String],
  lastName: Option[String],
  street1: Option[String],
  street2: Option[String],
  city: Option[String],
  state: Option[String],
  zip: Option[String],
  country: Option[String],
  phone: Option[String],
  addressName: Option[String],
  xp: Option[Any])
   extends ApiModel

