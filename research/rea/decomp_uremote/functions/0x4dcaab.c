// rea decompile_all
// name: FUN_004dcaab
// address: 0x4dcaab
// body: available
// range: 0x4dcaab-0x4dccf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dcaab(void)

{
  undefined4 *in_EAX;
  undefined1 **ppuVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uStack_1c;
  undefined1 *local_10;
  undefined1 *local_c [2];
  
  uStack_1c = 0x4dcabc;
  FUN_004d332e();
  *in_EAX = juce::LookAndFeel_V3::vftable;
  in_EAX[1] = juce::LookAndFeel_V3::vftable;
  in_EAX[2] = juce::LookAndFeel_V3::vftable;
  in_EAX[3] = juce::LookAndFeel_V3::vftable;
  in_EAX[4] = juce::LookAndFeel_V3::vftable;
  in_EAX[5] = juce::LookAndFeel_V3::vftable;
  in_EAX[6] = juce::LookAndFeel_V3::vftable;
  in_EAX[7] = juce::LookAndFeel_V3::vftable;
  in_EAX[8] = juce::LookAndFeel_V3::vftable;
  in_EAX[9] = juce::LookAndFeel_V3::vftable;
  in_EAX[10] = juce::LookAndFeel_V3::vftable;
  in_EAX[0xb] = juce::LookAndFeel_V3::vftable;
  in_EAX[0xc] = juce::LookAndFeel_V3::vftable;
  in_EAX[0xd] = juce::LookAndFeel_V3::vftable;
  in_EAX[0xe] = juce::LookAndFeel_V3::vftable;
  in_EAX[0xf] = juce::LookAndFeel_V3::vftable;
  in_EAX[0x10] = juce::LookAndFeel_V3::vftable;
  in_EAX[0x11] = juce::LookAndFeel_V3::vftable;
  in_EAX[0x12] = juce::LookAndFeel_V3::vftable;
  in_EAX[0x13] = juce::LookAndFeel_V3::vftable;
  in_EAX[0x14] = juce::LookAndFeel_V3::vftable;
  in_EAX[0x15] = juce::LookAndFeel_V3::vftable;
  in_EAX[0x16] = juce::LookAndFeel_V3::vftable;
  in_EAX[0x17] = juce::LookAndFeel_V3::vftable;
  in_EAX[0x18] = juce::LookAndFeel_V3::vftable;
  in_EAX[0x19] = juce::LookAndFeel_V3::vftable;
  in_EAX[0x1a] = juce::LookAndFeel_V3::vftable;
  in_EAX[0x1b] = juce::LookAndFeel_V3::vftable;
  uStack_1c = 0x4dcb8a;
  FUN_004c6ae2();
  uStack_1c = 0x4dcb95;
  FUN_00476041();
  local_10 = (undefined1 *)&uStack_1c;
  FUN_0047604f();
  FUN_004d3081();
  uStack_1c = 0x4dcbc0;
  FUN_0047604f();
  local_c[0] = (undefined1 *)&uStack_1c;
  puVar3 = &uStack_1c;
  FUN_004d076d();
  FUN_004d3081();
  local_c[0] = (undefined1 *)&uStack_1c;
  FUN_004d076d();
  FUN_004d3081();
  local_c[0] = (undefined1 *)&uStack_1c;
  FUN_004d076d();
  FUN_004d3081();
  local_c[0] = (undefined1 *)&uStack_1c;
  FUN_0047604f();
  FUN_004d3081();
  local_c[0] = (undefined1 *)&uStack_1c;
  FUN_0047604f();
  FUN_004d3081();
  local_c[0] = (undefined1 *)&uStack_1c;
  FUN_0047604f();
  FUN_004d3081();
  local_c[0] = (undefined1 *)&uStack_1c;
  FUN_0047604f();
  FUN_004d3081();
  local_c[0] = (undefined1 *)&uStack_1c;
  FUN_0047604f();
  FUN_004d3081();
  uVar4 = 0x3e051eb8;
  uVar2 = 0x3f800000;
  ppuVar1 = local_c;
  local_c[0] = (undefined1 *)&uStack_1c;
  FUN_00476599(&local_10,0x3f4ccccd,ppuVar1,0x3f800000,&uStack_1c,0x3e051eb8);
  FUN_004765bf(ppuVar1,uVar2);
  FUN_0047620f(puVar3,uVar4);
  FUN_004d3081();
  return;
}

