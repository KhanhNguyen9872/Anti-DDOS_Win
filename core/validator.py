## Config validator
class ConfigValidator:
    """Validate config từ config.py"""
    
    @staticmethod
    def validate_all(config):
        """Validate tất cả config"""
        errors = []
        
        # Validate IP addresses
        if not ConfigValidator._validate_ip_format(config.get('host_fake'), config.get('host_real')):
            errors.append("ip fake or real may be not correct!")
        
        # Validate timeout_conn
        if config.get('timeout_conn', 0) < 1:
            errors.append("timeout conn should not be less than 1")
        
        # Validate type_block_send_data
        if config.get('type_block_send_data', -1) not in [0, 1, 2, 3]:
            errors.append("type block send data must be 0 or 1 or 2 or 3")
        
        # Validate type_block_spam
        if config.get('type_block_spam', -1) not in [1, 2, 3]:
            errors.append("type block spam must be 1 or 2 or 3")
        
        # Validate max_conn
        if config.get('max_conn', 0) < 1:
            errors.append("max conn should not be less than 1")
        
        # Validate port_real
        port_real = config.get('port_real', 0)
        if port_real < 1 or port_real > 65535:
            errors.append("Port real must in range 1-65535")
        
        # Validate port_fake
        port_fake = config.get('port_fake', 0)
        if port_fake < 1 or port_fake > 65535:
            errors.append("Port fake must in range 1-65535")
        
        # Validate port_fake != port_real
        if port_fake == port_real:
            errors.append("Port fake and real must not the same!")
        
        # Validate time_connect
        if config.get('time_connect', -1) < 0:
            errors.append("time connect should not be less than 0")
        
        # Validate block_on_count
        if config.get('block_on_count', 0) < 1:
            errors.append("Block on count should not be less than 1")
        
        # Validate reset_on_time
        if config.get('reset_on_time', 0) < 1:
            errors.append("Reset on time should not be less than 1")
        
        # Validate is_get_sock
        if config.get('is_get_sock', -1) not in [0, 1]:
            errors.append("is get sock must be 0 or 1")
        
        # Validate headers tồn tại
        if 'headers' not in config:
            errors.append("headers not found in config")
        
        return errors
    
    @staticmethod
    def _validate_ip_format(host_fake, host_real):
        """Validate định dạng IP"""
        try:
            fake_parts = len([str(x) for x in host_fake.split(".") if x and x != "\n"])
            real_parts = len([str(x) for x in host_real.split(".") if x and x != "\n"])
            return fake_parts + real_parts == 8
        except:
            return False

