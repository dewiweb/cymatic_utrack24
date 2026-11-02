// rea decompile_all
// name: FUN_0068a830
// address: 0x68a830
// body: available
// range: 0x68a830-0x68a981 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068a830(undefined4 param_1,char param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  int *in_ECX;
  uint uVar6;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721205;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_2c = 0x68a863;
  FUN_006cfeb0();
  *in_ECX = (int)juce::TopLevelWindow::vftable;
  *(undefined2 *)(in_ECX + 0x1c) = 1;
  *(undefined1 *)((int)in_ECX + 0x72) = 0;
  in_ECX[0x1d] = 0;
  local_8 = 1;
  bVar2 = *(byte *)(in_ECX + 0x1a);
  if ((bVar2 & 4) == 0) {
    *(byte *)(in_ECX + 0x1a) = bVar2 | 4;
    if ((bVar2 & 1) != 0) {
      iVar5 = FUN_0068db10();
      if (iVar5 != 0) {
        uStack_2c = *(undefined4 *)(iVar5 + 8);
        uStack_30 = 0x68a8aa;
        (**(code **)(*in_ECX + 0x30))();
      }
    }
    FUN_006e6400(auStack_34);
    FUN_006ce9f0(1);
  }
  if (param_2 == '\0') {
    uStack_2c = 0x68a8f6;
    FUN_0068a620();
  }
  else {
    uVar6 = 0x101;
    if ((char)in_ECX[0x1c] == '\0') {
      uVar6 = 1;
    }
    uStack_2c = uVar6 | 8;
    if (*(char *)((int)in_ECX + 0x71) == '\0') {
      uStack_2c = uVar6;
    }
    uStack_30 = 0x68a8eb;
    FUN_006e9aa0();
  }
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) | 0x20;
  *(byte *)((int)in_ECX + 0x69) = *(byte *)((int)in_ECX + 0x69) | 4;
  if (DAT_00c8a6a8 == 0) {
    uStack_2c = 0x68a90f;
    operator_new(0x28);
    DAT_00c8a6a8 = FUN_004a4af0();
  }
  iVar5 = DAT_00c8a6a8;
  if (*(int *)(DAT_00c8a6a8 + 0x1c) < *(int *)(DAT_00c8a6a8 + 0x20) + 1) {
    uStack_2c = 0x68a945;
    FUN_00409cf0();
  }
  iVar3 = *(int *)(iVar5 + 0x20);
  *(int *)(iVar5 + 0x20) = iVar3 + 1;
  puVar1 = (undefined4 *)(*(int *)(iVar5 + 0x18) + iVar3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = in_ECX;
  }
  FUN_004a4bc0();
  uStack_2c = 0x68a969;
  uVar4 = FUN_004a4e00();
  *(undefined1 *)((int)in_ECX + 0x72) = uVar4;
  ExceptionList = local_10;
  return;
}

