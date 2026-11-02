// rea decompile_all
// name: FUN_0044bb4f
// address: 0x44bb4f
// body: available
// range: 0x44bb4f-0x44bce4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044bb4f(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 *puVar3;
  undefined1 local_30 [28];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e0a16;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0044bfc5();
  puVar3 = local_30;
  FUN_0047745f((float)*(int *)(in_ECX + 400),puVar3);
  FUN_0047713c(puVar3);
  iVar1 = *(int *)(in_ECX + 0x188);
  if (iVar1 == 0) {
    FUN_0044bfc5();
  }
  else {
    if (iVar1 == 1) {
      FUN_0047badf();
      iVar1 = FUN_0044bfc5();
      FUN_0047d2d0(iVar1 + 0x11c);
      iVar1 = *(int *)(in_ECX + 400) + *(int *)(in_ECX + 0x194);
      uVar2 = FUN_00465858();
      local_c = 0;
      FUN_0047d02d(param_1,uVar2,iVar1,0,*(int *)(in_ECX + 0x18) - iVar1,
                   *(undefined4 *)(in_ECX + 0x1c));
      local_c = 0xffffffff;
      FUN_004652d6();
      goto LAB_0044bc94;
    }
    if (iVar1 != 2) goto LAB_0044bc94;
    FUN_0044bfc5();
  }
  FUN_0047d2ae();
LAB_0044bc94:
  FUN_0044bfc5();
  FUN_004d076d();
  FUN_0047cda7();
  FUN_0047d84f(param_1,*(int *)(in_ECX + 0x1c) + -1);
  ExceptionList = local_14;
  return;
}

