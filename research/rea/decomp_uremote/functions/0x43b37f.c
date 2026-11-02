// rea decompile_all
// name: FUN_0043b37f
// address: 0x43b37f
// body: available
// range: 0x43b37f-0x43b4d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0043b37f(undefined4 *param_1)

{
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 **ppuStack_3c;
  PNG_Image *pPStack_38;
  undefined4 uStack_34;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x43b38b;
  uStack_34 = 0x43b395;
  FUN_00439b70();
  *param_1 = AboutBox::Logos::vftable;
  param_1[0x1c] = AboutBox::Logos::vftable;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  uStack_34 = 0x4f18;
  ppuStack_3c = local_14;
  pPStack_38 = &PNG_00785b58;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  uStack_40 = 0x43b3c7;
  uStack_34 = FUN_0047ed0f();
  local_8._0_1_ = 2;
  pPStack_38 = (PNG_Image *)0x43b3d7;
  FUN_0043bc63();
  local_8 = CONCAT31(local_8._1_3_,1);
  uStack_34 = 0x43b3e3;
  FUN_004c4d7a();
  local_14[0] = (undefined1 *)&uStack_40;
  uStack_34 = 0x3ee66666;
  pPStack_38 = (PNG_Image *)0x0;
  ppuStack_3c = (undefined1 **)0x0;
  puStack_44 = (undefined1 *)0x43b40e;
  FUN_004d076d();
  puStack_44 = (undefined1 *)0x1;
  uStack_34 = FUN_0043a231();
  pPStack_38 = (PNG_Image *)0x43b422;
  FUN_00439cd1();
  uStack_34 = 0x3ecccccd;
  pPStack_38 = (PNG_Image *)0x3f19999a;
  ppuStack_3c = (undefined1 **)0x3f4ccccd;
  puStack_44 = (undefined1 *)&uStack_40;
  local_14[0] = (undefined1 *)&uStack_40;
  FUN_0046537e();
  local_14[0] = (undefined1 *)&puStack_44;
  FUN_004d076d();
  uStack_34 = FUN_0043a1cb(2);
  pPStack_38 = (PNG_Image *)0x43b472;
  FUN_00439cd1();
  uStack_34 = 1000;
  pPStack_38 = (PNG_Image *)0x1;
  ppuStack_3c = (undefined1 **)0x43b47f;
  uStack_34 = FUN_0043a2d2();
  pPStack_38 = (PNG_Image *)0x43b489;
  FUN_00439cd1();
  uStack_34 = 1000;
  pPStack_38 = (PNG_Image *)0x43b48f;
  uStack_34 = FUN_0043a322();
  pPStack_38 = (PNG_Image *)0x43b498;
  FUN_00439cd1();
  uStack_34 = 1000;
  pPStack_38 = (PNG_Image *)0x2;
  ppuStack_3c = (undefined1 **)0x43b4a0;
  uStack_34 = FUN_0043a2d2();
  pPStack_38 = (PNG_Image *)0x43b4aa;
  FUN_00439cd1();
  uStack_34 = 1000;
  pPStack_38 = (PNG_Image *)0x43b4b0;
  uStack_34 = FUN_0043a322();
  pPStack_38 = (PNG_Image *)0x43b4b9;
  FUN_00439cd1();
  uStack_34 = 0x43b4be;
  uStack_34 = FUN_0043a343();
  pPStack_38 = (PNG_Image *)0x43b4c6;
  FUN_00439cd1();
  uStack_34 = 0x43b4ce;
  FUN_0043a78b();
  return param_1;
}

