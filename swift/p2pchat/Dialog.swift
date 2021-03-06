import UIKit

class Dialog: NSObject {
    var dialog: UIAlertController?

    func show(title: String, message: String, handler: ((UIAlertAction) -> Void)?) -> UIAlertController {
        if dialog != nil {
            dialog?.dismiss(animated: true, completion: nil)
        }
        NSLog("show")
        dialog = UIAlertController(title: title, message: message, preferredStyle: .alert)
        if handler != nil {
            dialog?.addAction(UIAlertAction(title: "OK", style: .default, handler: handler))
            dialog?.addAction(UIAlertAction(title: "CANCEL", style: .cancel, handler: nil))
        }
        return dialog!
    }
}
