<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet
  xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
  version="1.0">

  <xsl:template match="@*|node()">
    <xsl:copy>
      <xsl:apply-templates select="@*|node()"/>
    </xsl:copy>
  </xsl:template>

  <xsl:template match="object">
    <xsl:copy>
      <xsl:apply-templates select="@*"/>
      <xsl:apply-templates select="property">
        <xsl:sort select="@ident"/>
        <xsl:sort select="@type"/>
      </xsl:apply-templates>
      <xsl:apply-templates select="product">
        <xsl:sort select="@id"/>
      </xsl:apply-templates>
    </xsl:copy>
  </xsl:template>

</xsl:stylesheet>
