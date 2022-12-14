/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFBrowserMenuProvider : NSObject {
    long long  _persona;
    NSSet * _personaToCommandSetMap;
    NSDictionary * _personaToMenusMap;
}

+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)_commandWithAction:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4 webInterceptable:(bool)arg5;
- (id)_commandWithAction:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4 webInterceptable:(bool)arg5 alternates:(id)arg6;
- (id)_commandWithAction:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4 webInterceptable:(bool)arg5 property:(unsigned long long)arg6 alternates:(id)arg7;
- (id)_commandWithAction:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 webInterceptable:(bool)arg4 property:(unsigned long long)arg5;
- (id)_commandWithPriorityOverTextEditingForCommand:(id)arg1;
- (void)_enabledExtensionsDidChange;
- (id)_extensionsMenu;
- (id)_placeholderCommandWithAction:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4;
- (void)_setMenusForPersona:(long long)arg1 withBuilder:(id)arg2;
- (void)_setMenusIfNecessaryForPersona:(long long)arg1;
- (id)_switchToTabCommands;
- (bool)commandConflictsWithTextEditing:(id)arg1;
- (id)init;
- (void)rebuildMenuIfNeededForPersona:(long long)arg1;
- (void)setMenusForSafariWithBuilder:(id)arg1;
- (void)setMenusIfNecessaryForSafariViewServiceWithBuilder:(id)arg1;

@end
