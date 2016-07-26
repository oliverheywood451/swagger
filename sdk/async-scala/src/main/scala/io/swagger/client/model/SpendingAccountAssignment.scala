package io.swagger.client.model

import org.joda.time.DateTime
import java.util.UUID


case class SpendingAccountAssignment (
  SpendingAccountID: Option[String],
UserID: Option[String],
UserGroupID: Option[String],
AllowExceed: Option[Boolean]
)
