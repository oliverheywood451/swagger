/**
 * NOTE: This class is auto generated by the akka-scala (beta) swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * For any issue or feedback, please open a ticket via https://github.com/swagger-api/swagger-codegen/issues/new
 */

package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class Promotion (
  iD: Option[String],
  code: Option[String],
  name: Option[String],
  usagesRemaining: Option[Int],
  description: Option[String],
  finePrint: Option[String],
  startDate: Option[Date],
  expirationDate: Option[Date],
  eligibleExpression: Option[String],
  valueExpression: Option[String],
  canCombine: Option[Boolean],
  xp: Option[Any])
   extends ApiModel


