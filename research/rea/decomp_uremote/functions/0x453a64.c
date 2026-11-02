// rea decompile_all
// name: FUN_00453a64
// address: 0x453a64
// body: available
// range: 0x453a64-0x453c3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00453a64(undefined4 *param_1,int param_2,undefined1 ***param_3)

{
  undefined1 ***pppuVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 ***pppuStack_50;
  undefined4 **ppuStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined1 *local_30;
  undefined4 **local_28;
  undefined4 *local_24;
  undefined1 *local_18;
  undefined4 **local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x453a70;
  iVar3 = (int)param_3 * 8;
  puStack_44 = (undefined4 *)(iVar3 + 8);
  puStack_48 = (undefined4 *)0x453a88;
  local_24 = puStack_44;
  puStack_44 = (undefined4 *)FUN_00465858();
  local_8 = 0;
  local_14[0] = &puStack_48;
  local_30 = (undefined1 *)&puStack_48;
  ppuStack_4c = (undefined4 **)(iVar3 + 1);
  pppuStack_50 = (undefined1 ***)0x453aa5;
  local_28 = ppuStack_4c;
  pppuStack_50 = (undefined1 ***)FUN_00465858();
  local_30 = (undefined1 *)&ppuStack_4c;
  local_8._0_1_ = 1;
  FUN_00465bec(&ppuStack_4c);
  pppuStack_50 = (undefined1 ***)local_14[0];
  FUN_00465c6b();
  ppuStack_4c = (undefined4 **)&local_18;
  pppuStack_50 = (undefined1 ***)0x453ad2;
  puStack_44 = (undefined4 *)FUN_00465c30();
  puStack_48 = param_1;
  local_8._0_1_ = 2;
  ppuStack_4c = (undefined4 **)0x453add;
  FUN_004518b2();
  puStack_44 = (undefined4 *)0x453ae5;
  FUN_004652d6();
  puStack_44 = (undefined4 *)0x453aed;
  FUN_004652d6();
  local_8._0_1_ = 6;
  puStack_44 = (undefined4 *)0x453af9;
  FUN_004652d6();
  param_1[0x52] = param_2;
  param_1[0x53] = param_3;
  puStack_44 = (undefined4 *)((int)param_3 + 1);
  puStack_48 = local_24;
  *param_1 = MADIInputAssignmentChoice::vftable;
  param_1[0x1f] = MADIInputAssignmentChoice::vftable;
  ppuStack_4c = (undefined4 **)0x453b25;
  puStack_48 = (undefined4 *)FUN_00465858();
  local_30 = (undefined1 *)&ppuStack_4c;
  local_8._0_1_ = 7;
  pppuStack_50 = (undefined1 ***)local_28;
  uVar2 = FUN_00465858();
  local_30 = (undefined1 *)&pppuStack_50;
  local_8._0_1_ = 8;
  FUN_00465bec(&pppuStack_50,uVar2);
  FUN_00465c6b(&ppuStack_4c);
  pppuStack_50 = (undefined1 ***)&param_3;
  puStack_48 = (undefined4 *)FUN_00465c30();
  local_8._0_1_ = 9;
  ppuStack_4c = (undefined4 **)0x453b75;
  FUN_004e4a38();
  puStack_44 = (undefined4 *)0x453b7d;
  FUN_004652d6();
  puStack_44 = (undefined4 *)0x453b85;
  FUN_004652d6();
  local_8 = CONCAT31(local_8._1_3_,6);
  puStack_44 = (undefined4 *)0x453b91;
  FUN_004652d6();
  param_2 = 0;
  param_3 = (undefined1 ***)0x1;
  do {
    pppuVar1 = param_3;
    puStack_44 = (undefined4 *)(param_2 + 4);
    puStack_48 = (undefined4 *)((int)param_3 + 7);
    ppuStack_4c = (undefined4 **)0x453bb2;
    puStack_48 = (undefined4 *)FUN_00465858();
    local_28 = &ppuStack_4c;
    pppuStack_50 = pppuVar1;
    local_8._0_1_ = 10;
    uVar2 = FUN_00465858();
    local_24 = &pppuStack_50;
    local_8._0_1_ = 0xb;
    FUN_00465bec(&pppuStack_50,uVar2);
    FUN_00465c6b(local_28);
    pppuStack_50 = (undefined1 ***)local_14;
    puStack_48 = (undefined4 *)FUN_00465c30();
    local_8._0_1_ = 0xc;
    ppuStack_4c = (undefined4 **)0x453c06;
    FUN_004e4a38();
    puStack_44 = (undefined4 *)0x453c0e;
    FUN_004652d6();
    puStack_44 = (undefined4 *)0x453c16;
    FUN_004652d6();
    local_8 = CONCAT31(local_8._1_3_,6);
    puStack_44 = (undefined4 *)0x453c22;
    FUN_004652d6();
    param_2 = param_2 + 1;
    param_3 = param_3 + 2;
  } while ((int)param_3 < 0x41);
  return param_1;
}

