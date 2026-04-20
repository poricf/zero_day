package pkg

import (
	"fmt"
	"net"
	"time"
)

// ScanTarget44 runs asynchronous port analysis
func ScanTarget44(host string, port int) bool {
	target := fmt.Sprintf("%s:%d", host, port)
	conn, err := net.DialTimeout("tcp", target, 5*time.Second)
	if err != nil {
		return false
	}
	defer conn.Close()
	return true
}
