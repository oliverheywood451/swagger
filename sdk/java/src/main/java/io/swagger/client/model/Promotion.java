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

import java.util.Objects;
import com.google.gson.annotations.SerializedName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.joda.time.LocalDate;


/**
 * Promotion
 */
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2016-07-26T21:57:27.157Z")
public class Promotion   {
  @SerializedName("ID")
  private String ID = null;

  @SerializedName("Code")
  private String code = null;

  @SerializedName("Name")
  private String name = null;

  @SerializedName("UsagesRemaining")
  private Integer usagesRemaining = null;

  @SerializedName("Description")
  private String description = null;

  @SerializedName("FinePrint")
  private String finePrint = null;

  @SerializedName("StartDate")
  private LocalDate startDate = null;

  @SerializedName("ExpirationDate")
  private LocalDate expirationDate = null;

  @SerializedName("EligibleExpression")
  private String eligibleExpression = null;

  @SerializedName("ValueExpression")
  private String valueExpression = null;

  @SerializedName("CanCombine")
  private Boolean canCombine = null;

  @SerializedName("xp")
  private Object xp = null;

  public Promotion ID(String ID) {
    this.ID = ID;
    return this;
  }

   /**
   * Get ID
   * @return ID
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getID() {
    return ID;
  }

  public void setID(String ID) {
    this.ID = ID;
  }

  public Promotion code(String code) {
    this.code = code;
    return this;
  }

   /**
   * Get code
   * @return code
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getCode() {
    return code;
  }

  public void setCode(String code) {
    this.code = code;
  }

  public Promotion name(String name) {
    this.name = name;
    return this;
  }

   /**
   * Get name
   * @return name
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public Promotion usagesRemaining(Integer usagesRemaining) {
    this.usagesRemaining = usagesRemaining;
    return this;
  }

   /**
   * Get usagesRemaining
   * @return usagesRemaining
  **/
  @ApiModelProperty(example = "null", value = "")
  public Integer getUsagesRemaining() {
    return usagesRemaining;
  }

  public void setUsagesRemaining(Integer usagesRemaining) {
    this.usagesRemaining = usagesRemaining;
  }

  public Promotion description(String description) {
    this.description = description;
    return this;
  }

   /**
   * Get description
   * @return description
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getDescription() {
    return description;
  }

  public void setDescription(String description) {
    this.description = description;
  }

  public Promotion finePrint(String finePrint) {
    this.finePrint = finePrint;
    return this;
  }

   /**
   * Get finePrint
   * @return finePrint
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getFinePrint() {
    return finePrint;
  }

  public void setFinePrint(String finePrint) {
    this.finePrint = finePrint;
  }

  public Promotion startDate(LocalDate startDate) {
    this.startDate = startDate;
    return this;
  }

   /**
   * Get startDate
   * @return startDate
  **/
  @ApiModelProperty(example = "null", value = "")
  public LocalDate getStartDate() {
    return startDate;
  }

  public void setStartDate(LocalDate startDate) {
    this.startDate = startDate;
  }

  public Promotion expirationDate(LocalDate expirationDate) {
    this.expirationDate = expirationDate;
    return this;
  }

   /**
   * Get expirationDate
   * @return expirationDate
  **/
  @ApiModelProperty(example = "null", value = "")
  public LocalDate getExpirationDate() {
    return expirationDate;
  }

  public void setExpirationDate(LocalDate expirationDate) {
    this.expirationDate = expirationDate;
  }

  public Promotion eligibleExpression(String eligibleExpression) {
    this.eligibleExpression = eligibleExpression;
    return this;
  }

   /**
   * Get eligibleExpression
   * @return eligibleExpression
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getEligibleExpression() {
    return eligibleExpression;
  }

  public void setEligibleExpression(String eligibleExpression) {
    this.eligibleExpression = eligibleExpression;
  }

  public Promotion valueExpression(String valueExpression) {
    this.valueExpression = valueExpression;
    return this;
  }

   /**
   * Get valueExpression
   * @return valueExpression
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getValueExpression() {
    return valueExpression;
  }

  public void setValueExpression(String valueExpression) {
    this.valueExpression = valueExpression;
  }

  public Promotion canCombine(Boolean canCombine) {
    this.canCombine = canCombine;
    return this;
  }

   /**
   * Get canCombine
   * @return canCombine
  **/
  @ApiModelProperty(example = "null", value = "")
  public Boolean getCanCombine() {
    return canCombine;
  }

  public void setCanCombine(Boolean canCombine) {
    this.canCombine = canCombine;
  }

  public Promotion xp(Object xp) {
    this.xp = xp;
    return this;
  }

   /**
   * Get xp
   * @return xp
  **/
  @ApiModelProperty(example = "null", value = "")
  public Object getXp() {
    return xp;
  }

  public void setXp(Object xp) {
    this.xp = xp;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Promotion promotion = (Promotion) o;
    return Objects.equals(this.ID, promotion.ID) &&
        Objects.equals(this.code, promotion.code) &&
        Objects.equals(this.name, promotion.name) &&
        Objects.equals(this.usagesRemaining, promotion.usagesRemaining) &&
        Objects.equals(this.description, promotion.description) &&
        Objects.equals(this.finePrint, promotion.finePrint) &&
        Objects.equals(this.startDate, promotion.startDate) &&
        Objects.equals(this.expirationDate, promotion.expirationDate) &&
        Objects.equals(this.eligibleExpression, promotion.eligibleExpression) &&
        Objects.equals(this.valueExpression, promotion.valueExpression) &&
        Objects.equals(this.canCombine, promotion.canCombine) &&
        Objects.equals(this.xp, promotion.xp);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ID, code, name, usagesRemaining, description, finePrint, startDate, expirationDate, eligibleExpression, valueExpression, canCombine, xp);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Promotion {\n");
    
    sb.append("    ID: ").append(toIndentedString(ID)).append("\n");
    sb.append("    code: ").append(toIndentedString(code)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    usagesRemaining: ").append(toIndentedString(usagesRemaining)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    finePrint: ").append(toIndentedString(finePrint)).append("\n");
    sb.append("    startDate: ").append(toIndentedString(startDate)).append("\n");
    sb.append("    expirationDate: ").append(toIndentedString(expirationDate)).append("\n");
    sb.append("    eligibleExpression: ").append(toIndentedString(eligibleExpression)).append("\n");
    sb.append("    valueExpression: ").append(toIndentedString(valueExpression)).append("\n");
    sb.append("    canCombine: ").append(toIndentedString(canCombine)).append("\n");
    sb.append("    xp: ").append(toIndentedString(xp)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

