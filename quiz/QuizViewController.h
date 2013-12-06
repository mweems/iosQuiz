//
//  QuizViewController.h
//  quiz
//
//  Created by mweems on 12/4/13.
//  Copyright (c) 2013 mweems. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QuizViewController : UIViewController
{
    
int currentQuestionIndex;

NSMutableArray *questions;
NSMutableArray *answers;

IBOutlet UILabel *questionField;
IBOutlet UILabel *answerField;
    
}

- (IBAction)showQuestion:(id)sender;
- (IBAction)showAnswer:(id)sender;

@end
