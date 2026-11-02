// rea decompile_all
// name: FUN_004dd6b4
// address: 0x4dd6b4
// body: available
// range: 0x4dd6b4-0x4dd776 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004dd6b4(float param_1,float param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  float local_48 [5];
  undefined1 local_34 [32];
  undefined1 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x4dd6c0;
  param_2 = param_2 * 0.5;
  local_48[0] = param_2;
  FUN_0049f51e();
  local_8 = 0;
  local_48[0] = 0.0;
  uVar1 = FUN_004c30fb(in_ECX);
  local_48[0] = (float)(uVar1 & 0xff);
  FUN_0049f9e7();
  local_48[0] = 7.148455e-39;
  FUN_0049dba1();
  local_14[0] = (undefined1 *)local_48;
  local_48[0] = 5.04467e-44;
  FUN_0049dc9b();
  local_14[0] = (undefined1 *)local_48;
  FUN_004d076d();
  local_8._0_1_ = 2;
  uVar2 = FUN_00466678(in_ECX + 0x88,local_14);
  local_8._0_1_ = 4;
  FUN_0049dc28(local_34,uVar2,&param_2);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_48[0] = 7.148573e-39;
  FUN_004652d6();
  local_48[0] = param_1;
  FUN_004a1576();
  local_48[0] = 7.148608e-39;
  FUN_0049dbc5();
  local_48[0] = 7.148619e-39;
  FUN_004c4d7a();
  return;
}

