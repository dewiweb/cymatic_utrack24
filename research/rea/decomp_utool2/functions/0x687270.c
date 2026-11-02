// rea decompile_all
// name: FUN_00687270
// address: 0x687270
// body: available
// range: 0x687270-0x6873c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HICON FUN_00687270(DWORD param_1,DWORD param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  HBITMAP ho;
  HICON pHVar6;
  int *in_ECX;
  undefined4 uVar7;
  int nHeight;
  BOOL in_EDX;
  int *piVar8;
  ICONINFO local_38;
  int *local_24;
  int *local_20;
  undefined1 local_1c;
  int *local_18;
  BOOL local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720ee5;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = in_EDX;
  local_18 = operator_new(0xb4);
  iVar5 = *in_ECX;
  if (iVar5 == 0) {
    uVar7 = 0;
    uVar3 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(iVar5 + 0x10);
    uVar3 = *(undefined4 *)(iVar5 + 0xc);
  }
  piVar4 = (int *)FUN_004a51b0(2,uVar3,uVar7,1);
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar4[1] = piVar4[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  local_18 = piVar4;
  if (piVar4 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)(**(code **)(*piVar4 + 4))(uVar2);
  }
  local_1c = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_24 = piVar8;
  local_20 = piVar8;
  if ((*in_ECX != 0) && (cVar1 = (**(code **)(*piVar8 + 0x30))(), cVar1 == '\0')) {
    (**(code **)(*piVar8 + 0x60))();
  }
  if (piVar8 != (int *)0x0) {
    (**(code **)*piVar8)(1);
  }
  iVar5 = *in_ECX;
  if (iVar5 == 0) {
    nHeight = 0;
    iVar5 = 0;
  }
  else {
    nHeight = *(int *)(iVar5 + 0x10);
    iVar5 = *(int *)(iVar5 + 0xc);
  }
  ho = CreateBitmap(iVar5,nHeight,1,1,(void *)0x0);
  local_38.fIcon = local_14;
  local_38.xHotspot = param_1;
  local_38.yHotspot = param_2;
  local_38.hbmColor = (HBITMAP)piVar4[0xb];
  local_38.hbmMask = ho;
  pHVar6 = CreateIconIndirect(&local_38);
  DeleteObject(ho);
  LOCK();
  piVar8 = piVar4 + 1;
  iVar5 = *piVar8;
  *piVar8 = *piVar8 + -1;
  UNLOCK();
  if (iVar5 == 1) {
    (**(code **)*piVar4)(1);
  }
  ExceptionList = local_10;
  return pHVar6;
}

