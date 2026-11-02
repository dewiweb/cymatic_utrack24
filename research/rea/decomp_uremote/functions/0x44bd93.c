// rea decompile_all
// name: FUN_0044bd93
// address: 0x44bd93
// body: available
// range: 0x44bd93-0x44be79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0044bd93(undefined4 *param_1)

{
  int in_ECX;
  undefined1 **local_4c [5];
  undefined1 local_38 [32];
  undefined1 *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x44bd9f;
  local_18[0] = (undefined1 *)local_4c;
  FUN_0046537e(local_4c);
  FUN_0044565e(0);
  local_8 = 0;
  local_4c[0] = (undefined1 **)0x0;
  *param_1 = HomePanel::vftable;
  param_1[0x26] = in_ECX;
  FUN_0043e0b3(param_1 + 0x27,*(undefined4 *)(in_ECX + 0x7c));
  local_8._0_1_ = 1;
  FUN_0044a5f5(param_1 + 0x86);
  local_4c[0] = local_18;
  local_8._0_1_ = 2;
  FUN_0046537e();
  local_4c[0] = local_18;
  local_8._0_1_ = 3;
  local_4c[0] = (undefined1 **)FUN_004cefd8(local_38);
  local_8._0_1_ = 4;
  FUN_00478907();
  local_4c[0] = (undefined1 **)0x44be2a;
  FUN_004f7994();
  local_8 = CONCAT31(local_8._1_3_,2);
  local_4c[0] = (undefined1 **)0x44be36;
  FUN_004652d6();
  local_4c[0] = (undefined1 **)0x3f4ccccd;
  FUN_00478a11(param_1 + 0x1e,0x3dcccccd,0x3dcccccd,0x3f4ccccd);
  local_4c[0] = (undefined1 **)0xffffffff;
  FUN_004c1064();
  local_4c[0] = (undefined1 **)0xffffffff;
  FUN_004c1064();
  return param_1;
}

