// rea decompile_all
// name: FUN_00453624
// address: 0x453624
// body: available
// range: 0x453624-0x453819 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00453624(undefined4 *param_1,int param_2,undefined4 **param_3)

{
  undefined4 uVar1;
  undefined4 **ppuStack_50;
  undefined1 *puStack_4c;
  undefined4 *puStack_48;
  undefined1 *puStack_44;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 *local_28 [4];
  undefined1 local_18 [4];
  undefined1 **local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x453630;
  puStack_44 = (undefined1 *)((int)param_3 * 8 + 8);
  puStack_48 = (undefined4 *)0x453645;
  puStack_44 = (undefined1 *)FUN_00465858();
  local_8 = 0;
  local_2c = (undefined1 *)&puStack_48;
  local_14[0] = (undefined1 **)&puStack_48;
  puStack_4c = (undefined1 *)((int)param_3 * 8 + 1);
  ppuStack_50 = (undefined4 **)0x45365d;
  ppuStack_50 = (undefined4 **)FUN_00465858();
  local_2c = (undefined1 *)&puStack_4c;
  local_8._0_1_ = 1;
  FUN_00465bec(&puStack_4c);
  ppuStack_50 = (undefined4 **)local_14[0];
  FUN_00465c6b();
  puStack_4c = local_18;
  ppuStack_50 = (undefined1 ***)0x45368a;
  puStack_44 = (undefined1 *)FUN_00465c30();
  puStack_48 = param_1;
  local_8._0_1_ = 2;
  puStack_4c = (undefined1 *)0x453695;
  FUN_004518b2();
  puStack_44 = (undefined1 *)0x45369d;
  FUN_004652d6();
  puStack_44 = (undefined1 *)0x4536a5;
  FUN_004652d6();
  local_8 = CONCAT31(local_8._1_3_,6);
  puStack_44 = (undefined1 *)0x4536b1;
  FUN_004652d6();
  param_1[0x52] = param_2;
  param_1[0x53] = param_3;
  *param_1 = MADI48kOutChoice::vftable;
  param_1[0x1f] = MADI48kOutChoice::vftable;
  local_2c = (undefined1 *)0x0;
  param_3 = (undefined4 **)0x1;
  do {
    puStack_44 = local_2c + 1;
    puStack_48 = (undefined4 *)((int)param_3 + 7);
    puStack_4c = (undefined1 *)0x4536ed;
    local_2c = puStack_44;
    puStack_48 = (undefined4 *)FUN_00465858();
    ppuStack_50 = param_3;
    local_8._0_1_ = 7;
    uVar1 = FUN_00465858();
    local_30 = (undefined1 *)&ppuStack_50;
    local_8._0_1_ = 8;
    FUN_00465bec(&ppuStack_50,uVar1);
    FUN_00465c6b(&puStack_4c);
    ppuStack_50 = local_14;
    puStack_48 = (undefined4 *)FUN_00465c30();
    local_8._0_1_ = 9;
    puStack_4c = (undefined1 *)0x453741;
    FUN_004e4a38();
    puStack_44 = (undefined1 *)0x453749;
    FUN_004652d6();
    puStack_44 = (undefined1 *)0x453751;
    FUN_004652d6();
    local_8 = CONCAT31(local_8._1_3_,6);
    puStack_44 = (undefined1 *)0x45375d;
    FUN_004652d6();
    param_3 = param_3 + 2;
  } while ((int)param_3 < 0x19);
  param_2 = 0;
  param_3 = (undefined4 **)0x1;
  do {
    puStack_44 = (undefined1 *)(param_2 + 4);
    puStack_48 = (undefined4 *)((int)param_3 + 7);
    puStack_4c = (undefined1 *)0x45378f;
    puStack_48 = (undefined4 *)FUN_00465858();
    local_30 = (undefined1 *)&puStack_4c;
    local_2c = (undefined1 *)&puStack_4c;
    ppuStack_50 = param_3;
    local_8._0_1_ = 10;
    uVar1 = FUN_00465858();
    local_30 = (undefined1 *)&ppuStack_50;
    local_8._0_1_ = 0xb;
    FUN_00465bec(&ppuStack_50,uVar1);
    FUN_00465c6b(local_2c);
    ppuStack_50 = local_28;
    puStack_48 = (undefined4 *)FUN_00465c30();
    local_8._0_1_ = 0xc;
    puStack_4c = (undefined1 *)0x4537e3;
    FUN_004e4a38();
    puStack_44 = (undefined1 *)0x4537eb;
    FUN_004652d6();
    puStack_44 = (undefined1 *)0x4537f3;
    FUN_004652d6();
    local_8 = CONCAT31(local_8._1_3_,6);
    puStack_44 = (undefined1 *)0x4537ff;
    FUN_004652d6();
    param_3 = param_3 + 2;
    param_2 = param_2 + 1;
  } while ((int)param_3 < 0x41);
  return param_1;
}

