// rea decompile_all
// name: FUN_004d7df8
// address: 0x4d7df8
// body: available
// range: 0x4d7df8-0x4d7f09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d7df8(undefined4 param_1,int param_2,char param_3)

{
  bool bVar1;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c;
  undefined1 *local_28 [5];
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4d7e04;
  bVar1 = param_3 != '\0';
  _param_3 = (undefined1 *)_DAT_0095768c;
  if (bVar1) {
    _param_3 = (undefined1 *)0x3f666666;
  }
  local_14 = (undefined1 *)local_28;
  puStack_30 = (undefined1 *)local_28;
  uStack_34 = 0x4d7e33;
  local_2c = _param_3;
  FUN_0047620f();
  local_2c = 0x4d7e3d;
  FUN_0047d23a();
  local_14 = (undefined1 *)local_28;
  puStack_30 = (undefined1 *)local_28;
  local_2c = 0x3f000000;
  uStack_34 = 0x4d7e58;
  FUN_0047620f();
  local_2c = 0x4d7e5f;
  FUN_0047cda7();
  local_28[0] = (undefined1 *)0x1;
  local_2c = param_1;
  puStack_30 = (undefined1 *)0x4d7e6c;
  FUN_0047d37e();
  local_14 = (undefined1 *)local_28;
  local_2c = 0x4d7e7c;
  FUN_004d076d();
  local_2c = 0x4d7e83;
  FUN_0047cda7();
  _param_3 = (undefined1 *)((float)*(int *)(param_2 + 0xc) * 0.7);
  local_2c = 0x4d7ea6;
  local_28[0] = _param_3;
  FUN_0049f51e();
  local_8 = 0;
  local_28[0] = &param_3;
  local_2c = 0x4d7eb2;
  local_28[0] = (undefined1 *)FUN_0049f995();
  local_8 = CONCAT31(local_8._1_3_,1);
  local_2c = 0x4d7ebf;
  FUN_0047ceaa();
  local_2c = 0x4d7ec7;
  FUN_004c4d7a();
  local_8 = 0xffffffff;
  local_2c = 0x4d7ed3;
  FUN_004c4d7a();
  local_2c = 0;
  puStack_30 = (undefined1 *)0x1;
  local_14 = (undefined1 *)&uStack_34;
  uStack_34 = 0x21;
  FUN_0047d12a(4,0,*(int *)(param_2 + 8) + -6,*(undefined4 *)(param_2 + 0xc));
  return;
}

