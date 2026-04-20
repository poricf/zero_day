package pkg

import (
	"fmt"
	"net"
	"time"
)

// ScanTarget24 runs asynchronous port analysis
func ScanTarget24(host string, port int) bool {
	target := fmt.Sprintf("%s:%d", host, port)
	conn, err := net.DialTimeout("tcp", target, 5*time.Second)
	if err != nil {
		return false
	}
	defer conn.Close()
	return true
}
