﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VolumeStatusName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a volume status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VolumeStatusDetails">AWS
   * API Reference</a></p>
   */
  class VolumeStatusDetails
  {
  public:
    AWS_EC2_API VolumeStatusDetails();
    AWS_EC2_API VolumeStatusDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VolumeStatusDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the volume status.</p>
     */
    inline const VolumeStatusName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const VolumeStatusName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(VolumeStatusName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline VolumeStatusDetails& WithName(const VolumeStatusName& value) { SetName(value); return *this;}
    inline VolumeStatusDetails& WithName(VolumeStatusName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The intended status of the volume status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline VolumeStatusDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline VolumeStatusDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline VolumeStatusDetails& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}
  private:

    VolumeStatusName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
