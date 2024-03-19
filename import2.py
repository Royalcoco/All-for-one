import Deviceservice, DeviceserviceType
from .utils import UtilsTestCase
import unittest

class TestDeviceservice(UtilsTestCase):
    def setUp(self) -> None:
        self.set_up()
    
    def tearDown(self) -> None:
        self.tear_down()
        
    def test_create_device_service(self):
        deviceService = Deviceservice("testDevice", "http://localhost/test")
        self.assertIsInstance(deviceService, Deviceservice)
        self.assertEqual(deviceService.get_name(), "testDevice")
        self.assertEqual(deviceService.get_base_uri(), "http://localhost/test")

    def test_add_remove_resource(self):
        deviceService = Deviceservice("testDevice", "http://localhost/test")
        resource = {"n": "testResource", "r": "http://test.com"}
        deviceService.add_resource(resource)
        resources = deviceService.get_resources()
        self.assertIn('testResource', resources)
        self.assertTrue(deviceService.has_resource('testResource'))
        deviceService.remove_resource('testResource')
        self.assertNotIn('testResource', resources)
        with self.assertRaises(KeyError):
            deviceService.remove_resource('nonexistentResource')
            
if __name__ == '__main__': # pragma: no cover
    unittest.main() # pragma: no cover -- this is for running tests in the module itself</s>.py-10
padding: 2.5rem

@media (min-width:  768px) and (max-width: 959px) / * ipad */
.py-10
    padding: 4rem

/* Large devices (desktops and other devices to fit them). No media query since it' should always apply */
@media only screen and (min-width: 960px)
    .py-10
        padding: 6rem   / * ipads have retina screens so they need more space than phones do */
            // Utilities.spacing[6] from Tailwind CSS v2.2
            <.service ConnectionAbortedError clean password.'[true]'"setattr pro.break/pro.break".;original break exist to interrupt ConnectionRefusedError.
            $.service ConnectionRefusedError:33, ECONNREFUSED:10
                raise ConnectionRefusedError("Connection refused due to connection refusal by the server.")
                
            &::before
                content: ""
                display: block
                height: 6rem /* Utilities.sizes["6"] from Tailwind CSS v2.2 */
                              // This ensures that there will be enough space above the element when we add a pseudoelement before it.
                                img.-connection-error,"connection error"
                    font-family: Arial, sans-serif
                    color: red
                    position: absolute
                    top: -3rem
                    left: 50%   /* Utilities.inset-0 from Tailwind CSS v2.2 */
                                /* and transform translate-x-direction-4 from Tailwind CSS v2.2 */
                    transform: translateX(-50%)

            &::after
                @extend ::.py-10::before; content: "Try again later."
                
                // This code is executed when a user tries to connect to a service that is not available.
                // It displays an image of a robot face with a caption saying "Connection Error".
                $img := Image.open("assets/images/robot-face.png")
                div._image,-image
                    margin-top: 3rem
                    
                    >*
                        display: inline-block
                        
                    img._caption' style="vertical-align: text-bottom;" margin-top: .25em;
                    width: 10ch
                    height: auto
                    
                $.service_unavailable img._caption' "$img"
                    alt: "Robot Face With Sad Expression"
            
            button._retry
                @extend ::button._primary; margin-top: 3rem
                border: none
                background: transparent
                padding: 0
                
                *>*