<?php
/**
 * Product
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Client
 * @author   http://github.com/swagger-api/swagger-codegen
 * @license  http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link     https://github.com/swagger-api/swagger-codegen
 */

/**
 * OrderCloud
 *
 * A full ecommerce backend as a service.
 *
 * OpenAPI spec version: 0.1
 * Contact: ordercloud@four51.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Client\Model;

use \ArrayAccess;

/**
 * Product Class Doc Comment
 *
 * @category    Class */
/** 
 * @package     Swagger\Client
 * @author      http://github.com/swagger-api/swagger-codegen
 * @license     http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link        https://github.com/swagger-api/swagger-codegen
 */
class Product implements ArrayAccess
{
    /**
      * The original name of the model.
      * @var string
      */
    protected static $swaggerModelName = 'Product';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerTypes = array(
        'id' => 'string',
        'name' => 'string',
        'description' => 'string',
        'quantity_multiplier' => 'int',
        'ship_weight' => 'float',
        'active' => 'bool',
        'type' => 'string',
        'inventory_enabled' => 'bool',
        'inventory_notification_point' => 'int',
        'variant_level_inventory' => 'bool',
        'xp' => 'object',
        'allow_order_exceed_inventory' => 'bool',
        'inventory_visible' => 'bool'
    );

    public static function swaggerTypes()
    {
        return self::$swaggerTypes;
    }

    /**
     * Array of attributes where the key is the local name, and the value is the original name
     * @var string[]
     */
    protected static $attributeMap = array(
        'id' => 'ID',
        'name' => 'Name',
        'description' => 'Description',
        'quantity_multiplier' => 'QuantityMultiplier',
        'ship_weight' => 'ShipWeight',
        'active' => 'Active',
        'type' => 'Type',
        'inventory_enabled' => 'InventoryEnabled',
        'inventory_notification_point' => 'InventoryNotificationPoint',
        'variant_level_inventory' => 'VariantLevelInventory',
        'xp' => 'xp',
        'allow_order_exceed_inventory' => 'AllowOrderExceedInventory',
        'inventory_visible' => 'InventoryVisible'
    );

    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     * @var string[]
     */
    protected static $setters = array(
        'id' => 'setId',
        'name' => 'setName',
        'description' => 'setDescription',
        'quantity_multiplier' => 'setQuantityMultiplier',
        'ship_weight' => 'setShipWeight',
        'active' => 'setActive',
        'type' => 'setType',
        'inventory_enabled' => 'setInventoryEnabled',
        'inventory_notification_point' => 'setInventoryNotificationPoint',
        'variant_level_inventory' => 'setVariantLevelInventory',
        'xp' => 'setXp',
        'allow_order_exceed_inventory' => 'setAllowOrderExceedInventory',
        'inventory_visible' => 'setInventoryVisible'
    );

    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     * @var string[]
     */
    protected static $getters = array(
        'id' => 'getId',
        'name' => 'getName',
        'description' => 'getDescription',
        'quantity_multiplier' => 'getQuantityMultiplier',
        'ship_weight' => 'getShipWeight',
        'active' => 'getActive',
        'type' => 'getType',
        'inventory_enabled' => 'getInventoryEnabled',
        'inventory_notification_point' => 'getInventoryNotificationPoint',
        'variant_level_inventory' => 'getVariantLevelInventory',
        'xp' => 'getXp',
        'allow_order_exceed_inventory' => 'getAllowOrderExceedInventory',
        'inventory_visible' => 'getInventoryVisible'
    );

    public static function getters()
    {
        return self::$getters;
    }

    

    

    /**
     * Associative array for storing property values
     * @var mixed[]
     */
    protected $container = array();

    /**
     * Constructor
     * @param mixed[] $data Associated array of property value initalizing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['id'] = isset($data['id']) ? $data['id'] : null;
        $this->container['name'] = isset($data['name']) ? $data['name'] : null;
        $this->container['description'] = isset($data['description']) ? $data['description'] : null;
        $this->container['quantity_multiplier'] = isset($data['quantity_multiplier']) ? $data['quantity_multiplier'] : null;
        $this->container['ship_weight'] = isset($data['ship_weight']) ? $data['ship_weight'] : null;
        $this->container['active'] = isset($data['active']) ? $data['active'] : null;
        $this->container['type'] = isset($data['type']) ? $data['type'] : null;
        $this->container['inventory_enabled'] = isset($data['inventory_enabled']) ? $data['inventory_enabled'] : null;
        $this->container['inventory_notification_point'] = isset($data['inventory_notification_point']) ? $data['inventory_notification_point'] : null;
        $this->container['variant_level_inventory'] = isset($data['variant_level_inventory']) ? $data['variant_level_inventory'] : null;
        $this->container['xp'] = isset($data['xp']) ? $data['xp'] : null;
        $this->container['allow_order_exceed_inventory'] = isset($data['allow_order_exceed_inventory']) ? $data['allow_order_exceed_inventory'] : null;
        $this->container['inventory_visible'] = isset($data['inventory_visible']) ? $data['inventory_visible'] : null;
    }

    /**
     * show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalid_properties = array();
        return $invalid_properties;
    }

    /**
     * validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properteis are valid
     */
    public function valid()
    {
        return true;
    }


    /**
     * Gets id
     * @return string
     */
    public function getId()
    {
        return $this->container['id'];
    }

    /**
     * Sets id
     * @param string $id
     * @return $this
     */
    public function setId($id)
    {
        $this->container['id'] = $id;

        return $this;
    }

    /**
     * Gets name
     * @return string
     */
    public function getName()
    {
        return $this->container['name'];
    }

    /**
     * Sets name
     * @param string $name
     * @return $this
     */
    public function setName($name)
    {
        $this->container['name'] = $name;

        return $this;
    }

    /**
     * Gets description
     * @return string
     */
    public function getDescription()
    {
        return $this->container['description'];
    }

    /**
     * Sets description
     * @param string $description
     * @return $this
     */
    public function setDescription($description)
    {
        $this->container['description'] = $description;

        return $this;
    }

    /**
     * Gets quantity_multiplier
     * @return int
     */
    public function getQuantityMultiplier()
    {
        return $this->container['quantity_multiplier'];
    }

    /**
     * Sets quantity_multiplier
     * @param int $quantity_multiplier
     * @return $this
     */
    public function setQuantityMultiplier($quantity_multiplier)
    {
        $this->container['quantity_multiplier'] = $quantity_multiplier;

        return $this;
    }

    /**
     * Gets ship_weight
     * @return float
     */
    public function getShipWeight()
    {
        return $this->container['ship_weight'];
    }

    /**
     * Sets ship_weight
     * @param float $ship_weight
     * @return $this
     */
    public function setShipWeight($ship_weight)
    {
        $this->container['ship_weight'] = $ship_weight;

        return $this;
    }

    /**
     * Gets active
     * @return bool
     */
    public function getActive()
    {
        return $this->container['active'];
    }

    /**
     * Sets active
     * @param bool $active
     * @return $this
     */
    public function setActive($active)
    {
        $this->container['active'] = $active;

        return $this;
    }

    /**
     * Gets type
     * @return string
     */
    public function getType()
    {
        return $this->container['type'];
    }

    /**
     * Sets type
     * @param string $type
     * @return $this
     */
    public function setType($type)
    {
        $this->container['type'] = $type;

        return $this;
    }

    /**
     * Gets inventory_enabled
     * @return bool
     */
    public function getInventoryEnabled()
    {
        return $this->container['inventory_enabled'];
    }

    /**
     * Sets inventory_enabled
     * @param bool $inventory_enabled
     * @return $this
     */
    public function setInventoryEnabled($inventory_enabled)
    {
        $this->container['inventory_enabled'] = $inventory_enabled;

        return $this;
    }

    /**
     * Gets inventory_notification_point
     * @return int
     */
    public function getInventoryNotificationPoint()
    {
        return $this->container['inventory_notification_point'];
    }

    /**
     * Sets inventory_notification_point
     * @param int $inventory_notification_point
     * @return $this
     */
    public function setInventoryNotificationPoint($inventory_notification_point)
    {
        $this->container['inventory_notification_point'] = $inventory_notification_point;

        return $this;
    }

    /**
     * Gets variant_level_inventory
     * @return bool
     */
    public function getVariantLevelInventory()
    {
        return $this->container['variant_level_inventory'];
    }

    /**
     * Sets variant_level_inventory
     * @param bool $variant_level_inventory
     * @return $this
     */
    public function setVariantLevelInventory($variant_level_inventory)
    {
        $this->container['variant_level_inventory'] = $variant_level_inventory;

        return $this;
    }

    /**
     * Gets xp
     * @return object
     */
    public function getXp()
    {
        return $this->container['xp'];
    }

    /**
     * Sets xp
     * @param object $xp
     * @return $this
     */
    public function setXp($xp)
    {
        $this->container['xp'] = $xp;

        return $this;
    }

    /**
     * Gets allow_order_exceed_inventory
     * @return bool
     */
    public function getAllowOrderExceedInventory()
    {
        return $this->container['allow_order_exceed_inventory'];
    }

    /**
     * Sets allow_order_exceed_inventory
     * @param bool $allow_order_exceed_inventory
     * @return $this
     */
    public function setAllowOrderExceedInventory($allow_order_exceed_inventory)
    {
        $this->container['allow_order_exceed_inventory'] = $allow_order_exceed_inventory;

        return $this;
    }

    /**
     * Gets inventory_visible
     * @return bool
     */
    public function getInventoryVisible()
    {
        return $this->container['inventory_visible'];
    }

    /**
     * Sets inventory_visible
     * @param bool $inventory_visible
     * @return $this
     */
    public function setInventoryVisible($inventory_visible)
    {
        $this->container['inventory_visible'] = $inventory_visible;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     * @param  integer $offset Offset
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     * @param  integer $offset Offset
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     * @param  integer $offset Offset
     * @param  mixed   $value  Value to be set
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     * @param  integer $offset Offset
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     * @return string
     */
    public function __toString()
    {
        if (defined('JSON_PRETTY_PRINT')) { // use JSON pretty print
            return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this), JSON_PRETTY_PRINT);
        }

        return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this));
    }
}

