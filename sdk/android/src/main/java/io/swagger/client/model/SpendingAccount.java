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

package io.swagger.client.model;

import java.math.BigDecimal;
import java.util.Date;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class SpendingAccount  {
  
  @SerializedName("ID")
  private String ID = null;
  @SerializedName("Name")
  private String name = null;
  @SerializedName("Balance")
  private BigDecimal balance = null;
  @SerializedName("AllowAsPaymentMethod")
  private Boolean allowAsPaymentMethod = null;
  @SerializedName("RedemptionCode")
  private String redemptionCode = null;
  @SerializedName("StartDate")
  private Date startDate = null;
  @SerializedName("EndDate")
  private Date endDate = null;
  @SerializedName("xp")
  private Object xp = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public String getID() {
    return ID;
  }
  public void setID(String ID) {
    this.ID = ID;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getBalance() {
    return balance;
  }
  public void setBalance(BigDecimal balance) {
    this.balance = balance;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getAllowAsPaymentMethod() {
    return allowAsPaymentMethod;
  }
  public void setAllowAsPaymentMethod(Boolean allowAsPaymentMethod) {
    this.allowAsPaymentMethod = allowAsPaymentMethod;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getRedemptionCode() {
    return redemptionCode;
  }
  public void setRedemptionCode(String redemptionCode) {
    this.redemptionCode = redemptionCode;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Date getStartDate() {
    return startDate;
  }
  public void setStartDate(Date startDate) {
    this.startDate = startDate;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Date getEndDate() {
    return endDate;
  }
  public void setEndDate(Date endDate) {
    this.endDate = endDate;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Object getXp() {
    return xp;
  }
  public void setXp(Object xp) {
    this.xp = xp;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SpendingAccount spendingAccount = (SpendingAccount) o;
    return (ID == null ? spendingAccount.ID == null : ID.equals(spendingAccount.ID)) &&
        (name == null ? spendingAccount.name == null : name.equals(spendingAccount.name)) &&
        (balance == null ? spendingAccount.balance == null : balance.equals(spendingAccount.balance)) &&
        (allowAsPaymentMethod == null ? spendingAccount.allowAsPaymentMethod == null : allowAsPaymentMethod.equals(spendingAccount.allowAsPaymentMethod)) &&
        (redemptionCode == null ? spendingAccount.redemptionCode == null : redemptionCode.equals(spendingAccount.redemptionCode)) &&
        (startDate == null ? spendingAccount.startDate == null : startDate.equals(spendingAccount.startDate)) &&
        (endDate == null ? spendingAccount.endDate == null : endDate.equals(spendingAccount.endDate)) &&
        (xp == null ? spendingAccount.xp == null : xp.equals(spendingAccount.xp));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (ID == null ? 0: ID.hashCode());
    result = 31 * result + (name == null ? 0: name.hashCode());
    result = 31 * result + (balance == null ? 0: balance.hashCode());
    result = 31 * result + (allowAsPaymentMethod == null ? 0: allowAsPaymentMethod.hashCode());
    result = 31 * result + (redemptionCode == null ? 0: redemptionCode.hashCode());
    result = 31 * result + (startDate == null ? 0: startDate.hashCode());
    result = 31 * result + (endDate == null ? 0: endDate.hashCode());
    result = 31 * result + (xp == null ? 0: xp.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class SpendingAccount {\n");
    
    sb.append("  ID: ").append(ID).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  balance: ").append(balance).append("\n");
    sb.append("  allowAsPaymentMethod: ").append(allowAsPaymentMethod).append("\n");
    sb.append("  redemptionCode: ").append(redemptionCode).append("\n");
    sb.append("  startDate: ").append(startDate).append("\n");
    sb.append("  endDate: ").append(endDate).append("\n");
    sb.append("  xp: ").append(xp).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
