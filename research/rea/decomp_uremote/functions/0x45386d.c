// rea decompile_all
// name: FUN_0045386d
// address: 0x45386d
// body: available
// range: 0x45386d-0x4539f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0045386d(undefined4 *param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 local_24 [12];
  undefined1 local_18 [4];
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x453879;
  iVar3 = (int)param_3 * 8;
  puStack_44 = (undefined4 *)(iVar3 + 8);
  puStack_48 = (undefined4 *)0x45388e;
  puStack_44 = (undefined4 *)FUN_00465858();
  local_8 = 0;
  local_2c = (undefined1 *)&puStack_48;
  local_14 = (undefined1 *)&puStack_48;
  puStack_4c = (undefined1 *)(iVar3 + 1);
  puStack_50 = (undefined1 *)0x4538a6;
  puStack_50 = (undefined1 *)FUN_00465858();
  local_2c = (undefined1 *)&puStack_4c;
  local_8._0_1_ = 1;
  FUN_00465bec(&puStack_4c);
  puStack_50 = local_14;
  FUN_00465c6b();
  puStack_4c = local_18;
  puStack_50 = (undefined1 *)0x4538d3;
  puStack_44 = (undefined4 *)FUN_00465c30();
  puStack_48 = param_1;
  local_8._0_1_ = 2;
  puStack_4c = (undefined1 *)0x4538de;
  FUN_004518b2();
  puStack_44 = (undefined4 *)0x4538e6;
  FUN_004652d6();
  puStack_44 = (undefined4 *)0x4538ee;
  FUN_004652d6();
  local_8._0_1_ = 6;
  puStack_44 = (undefined4 *)0x4538fa;
  FUN_004652d6();
  param_1[0x52] = param_2;
  param_1[0x53] = param_3;
  puStack_44 = &param_3;
  *param_1 = MADI96kOutChoice::vftable;
  param_1[0x1f] = MADI96kOutChoice::vftable;
  puStack_48 = (undefined4 *)0x453927;
  FUN_0046537e();
  puStack_44 = (undefined4 *)0x1;
  puStack_48 = &param_3;
  local_8._0_1_ = 7;
  puStack_4c = (undefined1 *)0x45393c;
  FUN_004e4a38();
  local_8 = CONCAT31(local_8._1_3_,6);
  puStack_44 = (undefined4 *)0x453948;
  FUN_004652d6();
  param_2 = 0;
  param_3 = (undefined1 *)0x1;
  do {
    puVar1 = param_3;
    puStack_44 = (undefined4 *)(param_2 + 2);
    puStack_48 = (undefined4 *)(param_3 + 7);
    puStack_4c = (undefined1 *)0x453969;
    puStack_48 = (undefined4 *)FUN_00465858();
    local_14 = (undefined1 *)&puStack_4c;
    puStack_50 = puVar1;
    local_8._0_1_ = 8;
    uVar2 = FUN_00465858();
    local_30 = (undefined1 *)&puStack_50;
    local_8._0_1_ = 9;
    FUN_00465bec(&puStack_50,uVar2);
    FUN_00465c6b(local_14);
    puStack_50 = local_24;
    puStack_48 = (undefined4 *)FUN_00465c30();
    local_8._0_1_ = 10;
    puStack_4c = (undefined1 *)0x4539bd;
    FUN_004e4a38();
    puStack_44 = (undefined4 *)0x4539c5;
    FUN_004652d6();
    puStack_44 = (undefined4 *)0x4539cd;
    FUN_004652d6();
    local_8 = CONCAT31(local_8._1_3_,6);
    puStack_44 = (undefined4 *)0x4539d9;
    FUN_004652d6();
    param_2 = param_2 + 1;
    param_3 = param_3 + 8;
  } while ((int)param_3 < 0x21);
  return param_1;
}

