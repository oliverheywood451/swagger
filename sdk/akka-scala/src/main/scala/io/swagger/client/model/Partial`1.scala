/**
 * NOTE: This class is auto generated by the akka-scala (beta) swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * For any issue or feedback, please open a ticket via https://github.com/swagger-api/swagger-codegen/issues/new
 */

package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class Partial&#x60;1 (
  iD: Option[String],
  username: Option[String],
  password: Option[String],
  firstName: Option[String],
  lastName: Option[String],
  email: Option[String],
  phone: Option[String],
  termsAccepted: Option[Date],
  active: Option[Boolean],
  xp: Option[Any],
  securityProfileID: Option[String])
   extends ApiModel


