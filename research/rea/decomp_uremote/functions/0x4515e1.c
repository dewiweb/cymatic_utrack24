// rea decompile_all
// name: FUN_004515e1
// address: 0x4515e1
// body: available
// range: 0x4515e1-0x4517d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004515e1(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  float *pfStack_60;
  undefined4 **ppuStack_5c;
  float local_58;
  uint uStack_54;
  int iStack_44;
  float *local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 *puStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e08d5;
  local_14 = ExceptionList;
  uStack_54 = DAT_00955fd4 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_14;
  local_34 = *(float *)(in_ECX + 0x1c);
  ppuStack_5c = &local_40;
  local_58 = (float)(int)local_34 * 0.4;
  local_3c = local_58 * 0.5;
  pfStack_60 = (float *)0x451644;
  local_38 = local_58;
  FUN_0044bfc5();
  pfStack_60 = (float *)0x45164f;
  local_58 = (float)FUN_0049f81a();
  local_c = 0;
  ppuStack_5c = (undefined4 **)0x45165f;
  FUN_0047ceaa();
  puStack_10 = (undefined1 *)0xffffffff;
  ppuStack_5c = (undefined4 **)0x45166d;
  FUN_004c4d7a();
  iVar1 = *(int *)(*(int *)(in_ECX + 0x178) + 0x7c);
  ppuStack_5c = (undefined4 **)0x45167b;
  FUN_0045ef8e();
  ppuStack_5c = *(undefined4 ***)(iVar1 + 0x240);
  pfStack_60 = (float *)0x45168a;
  FUN_00465858();
  puStack_10 = (undefined1 *)0x1;
  ppuStack_5c = (undefined4 **)0x4516a0;
  FUN_0045efa9();
  ppuStack_5c = (undefined4 **)&local_34;
  pfStack_60 = (float *)0x4516ac;
  FUN_0047cef9();
  ppuStack_5c = (undefined4 **)&local_38;
  puStack_10._0_1_ = 2;
  pfStack_60 = (float *)0x4516bb;
  FUN_0049fa60();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
  ppuStack_5c = (undefined4 **)0x4516cd;
  FUN_004c4d7a();
  ppuStack_5c = (undefined4 **)0x4516e0;
  iStack_44 = FUN_005b3fb0();
  if ((float)iStack_44 < (float)local_40 + (float)local_40) {
    ppuStack_5c = (undefined4 **)0x4516fc;
    iStack_44 = FUN_005b3fb0();
  }
  local_34 = (float)(*(int *)(in_ECX + 0x18) - iStack_44);
  fStack_2c = (float)(int)local_34;
  puStack_30 = (undefined1 *)&ppuStack_5c;
  fStack_28 = (float)*(int *)(in_ECX + 0x1c) * 0.1;
  fStack_24 = (float)iStack_44;
  fStack_20 = local_3c;
  pfStack_60 = (float *)0x45174d;
  FUN_004d076d();
  pfStack_60 = (float *)0x451754;
  FUN_0047cda7();
  pfStack_60 = &fStack_2c;
  ppuStack_5c = (undefined4 **)local_40;
  FUN_0047d575();
  pfStack_60 = (float *)0x451779;
  puStack_30 = (undefined1 *)&ppuStack_5c;
  FUN_004d076d();
  pfStack_60 = (float *)0x451780;
  FUN_0047cda7();
  ppuStack_5c = (undefined4 **)0x3f800000;
  pfStack_60 = local_40;
  FUN_0047d60d(param_1,&fStack_2c);
  ppuStack_5c = (undefined4 **)0x1;
  puStack_30 = (undefined1 *)&pfStack_60;
  pfStack_60 = (float *)0x24;
  FUN_0047cf16(param_1,&local_38);
  ppuStack_5c = (undefined4 **)0x4517c1;
  FUN_004652d6();
  ExceptionList = pvStack_18;
  return;
}

