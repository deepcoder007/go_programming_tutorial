package main

import (
	"fmt"
	"net/http"
	"github.com/gin-gonic/gin"
)

func main() {

	router := gin.Default()

	router.GET("/", func(c *gin.Context) {
		c.JSON(http.StatusOK, gin.H{
			"message": "Welcome to GIN!",
		})
	})

	router.GET("/user/:name", func(c *gin.Context) {
		name := c.Param("name")
		fmt.Println("/user/: ", name)
		c.JSON(http.StatusOK, gin.H{
			"message": "Hello " + name,
		})
	})

	router.POST("/user", func(c *gin.Context) {
		fmt.Println("/user")
		var json struct {
			Name string `json:"name" binding:"required"`
			Age int `json:"age" binding:"required"`
		}

		if err := c.ShouldBindJSON(&json); err != nil {
			c.JSON(http.StatusBadRequest, gin.H{"error": err.Error()})
			return
		}

		c.JSON(http.StatusOK, gin.H{
			"status": "user created",
			"user": json,
		})
	})

	router.Run(":8080")
}
