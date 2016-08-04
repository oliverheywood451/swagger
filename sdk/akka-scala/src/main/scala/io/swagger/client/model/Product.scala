/**
 * NOTE: This class is auto generated by the akka-scala (beta) swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * For any issue or feedback, please open a ticket via https://github.com/swagger-api/swagger-codegen/issues/new
 */

package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class Product (
  iD: Option[String],
  name: Option[String],
  description: Option[String],
  quantityMultiplier: Option[Int],
  shipWeight: Option[Double],
  active: Option[Boolean],
  `type`: Option[String],
  inventoryEnabled: Option[Boolean],
  inventoryNotificationPoint: Option[Int],
  variantLevelInventory: Option[Boolean],
  xp: Option[Any],
  allowOrderExceedInventory: Option[Boolean],
  inventoryVisible: Option[Boolean])
   extends ApiModel

