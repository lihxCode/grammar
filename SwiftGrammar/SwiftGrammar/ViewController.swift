//
//  ViewController.swift
//  SwiftGrammar
//
//  Created by delegate on 2020/5/28.
//  Copyright © 2020 Kx. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        ///guard
        let str = "www.baidu.com"
        var url = URL.init(string: str)
        guard let value = url else {
            fatalError("fail")
        }
        print("url is \(value)")
    }


}

