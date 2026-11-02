// rea decompile_all
// name: FUN_00448b37
// address: 0x448b37
// body: available
// range: 0x448b37-0x448c16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00448b37(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 auStack_24 [7];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  *param_1 = FilePanel::vftable;
  param_1[0x26] = FilePanel::vftable;
  param_1[0x27] = FilePanel::vftable;
  param_1[0x28] = FilePanel::vftable;
  local_8 = 7;
  puVar2 = auStack_24;
  auStack_24[0] = 0x448b7c;
  FUN_004c4d7a();
  puVar3 = puVar2 + -1;
  puVar2[-1] = 0x448b87;
  FUN_004c4d7a();
  *(undefined4 *)((int)puVar3 + -4) = 0x448b92;
  FUN_004652d6();
  if ((undefined4 *)param_1[0x17f] != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)param_1[0x17f];
    *(undefined4 *)((int)puVar3 + -4) = 1;
    pcVar1 = (code *)*puVar2;
    puVar4 = (undefined4 *)((int)puVar3 + -8);
    puVar3 = (undefined4 *)((int)puVar3 + -8);
    *puVar4 = 0x448ba2;
    (*pcVar1)();
  }
  local_8._0_1_ = 6;
  if ((undefined4 *)param_1[0x17e] != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)param_1[0x17e];
    *(undefined4 *)((int)puVar3 + -4) = 1;
    pcVar1 = (code *)*puVar2;
    puVar5 = (undefined4 *)((int)puVar3 + -8);
    puVar3 = (undefined4 *)((int)puVar3 + -8);
    *puVar5 = 0x448bb6;
    (*pcVar1)();
  }
  *(undefined4 **)((int)puVar3 + -4) = param_1 + 0x120;
  local_8._0_1_ = 5;
  *(undefined4 *)((int)puVar3 + -8) = 0x448bc6;
  FUN_0043f7ba();
  *(undefined4 **)((int)puVar3 + -4) = param_1 + 0x46;
  local_8._0_1_ = 4;
  *(undefined4 *)((int)puVar3 + -8) = 0x448bd6;
  FUN_00440e11();
  *(undefined4 **)((int)puVar3 + -4) = param_1 + 0x29;
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined4 *)((int)puVar3 + -8) = 0x448be6;
  FUN_004493df();
  local_8 = 0xffffffff;
  param_1[0x28] = uTrack::BrowserListener::vftable;
  param_1[0x27] = uTrack::StatusListener::vftable;
  param_1[0x26] = PushButton::Listener::vftable;
  puVar6 = (undefined1 *)((int)puVar3 + -4);
  *(undefined4 *)((int)puVar3 + -4) = 0x448c0f;
  FUN_00445695();
  *(undefined4 *)(puVar6 + -4) = 0x448c14;
  return;
}

