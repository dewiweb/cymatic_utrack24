// rea decompile_all
// name: FUN_0068b7e0
// address: 0x68b7e0
// body: available
// range: 0x68b7e0-0x68b9b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068b7e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int *in_ECX;
  byte bVar8;
  int iStack_78;
  int iStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  uint uStack_68;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  undefined1 local_28 [24];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007212dd;
  local_10 = ExceptionList;
  uStack_68 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(byte *)(in_ECX + 0x1a) & 1) == 0) {
    cVar5 = *(char *)((int)in_ECX + 0x86);
LAB_0068b82b:
    if (cVar5 == '\0') goto LAB_0068b82f;
  }
  else {
    puStack_6c = (undefined1 *)0x68b816;
    piVar6 = (int *)FUN_006d1d80();
    if (piVar6 != (int *)0x0) {
      puStack_6c = (undefined1 *)0x68b823;
      cVar5 = (**(code **)(*piVar6 + 0x3c))();
      goto LAB_0068b82b;
    }
LAB_0068b82f:
    puStack_6c = (undefined1 *)0x68b836;
    cVar5 = FUN_0068b100();
    if (cVar5 == '\0') {
      local_8 = 0;
      if (*(char *)((int)in_ECX + 0x71) == '\0') {
LAB_0068b85c:
        bVar4 = false;
      }
      else {
        if ((*(byte *)(in_ECX + 0x1a) & 1) == 0) {
          puStack_6c = (undefined1 *)0x68b854;
          cVar5 = FUN_006e6420();
          if (cVar5 != '\0') goto LAB_0068b85c;
        }
        bVar4 = true;
      }
      local_8 = 0xffffffff;
      if (!bVar4) {
        bVar8 = 0;
        goto LAB_0068b86f;
      }
    }
  }
  bVar8 = 1;
LAB_0068b86f:
  if ((int *)in_ECX[0x1f] != (int *)0x0) {
    puStack_6c = (undefined1 *)(uint)(bVar8 ^ 1);
    puStack_70 = (undefined1 *)0x68b883;
    (**(code **)(*(int *)in_ECX[0x1f] + 0x28))();
    puStack_70 = local_28;
    iVar7 = in_ECX[0x1f];
    iStack_74 = 0x68b894;
    piVar6 = (int *)(**(code **)(*in_ECX + 0xb8))();
    if ((((*(int *)(iVar7 + 0x78) != *piVar6) || (*(int *)(iVar7 + 0x7c) != piVar6[1])) ||
        (*(int *)(iVar7 + 0x80) != piVar6[2])) || (*(int *)(iVar7 + 0x84) != piVar6[3])) {
      iVar1 = piVar6[1];
      iVar2 = piVar6[2];
      iVar3 = piVar6[3];
      *(int *)(iVar7 + 0x78) = *piVar6;
      *(int *)(iVar7 + 0x7c) = iVar1;
      *(int *)(iVar7 + 0x80) = iVar2;
      *(int *)(iVar7 + 0x84) = iVar3;
      FUN_006e6400(&iStack_78);
      FUN_006ce9f0(1);
    }
    puStack_6c = (undefined1 *)in_ECX[7];
    puStack_70 = (undefined1 *)in_ECX[6];
    iStack_74 = *(int *)(in_ECX[0x1f] + 0x14);
    iStack_78 = *(int *)(in_ECX[0x1f] + 0x10);
    FUN_006e9790();
    puStack_6c = (undefined1 *)0x68b8f2;
    FUN_006cfbb0();
  }
  if ((int *)in_ECX[0x1e] != (int *)0x0) {
    puStack_6c = (undefined1 *)(uint)(bVar8 ^ 1);
    puStack_70 = (undefined1 *)0x68b905;
    (**(code **)(*(int *)in_ECX[0x1e] + 0x28))();
    iStack_74 = in_ECX[7] + -0x12;
    puStack_6c = (undefined1 *)0x12;
    puStack_70 = (undefined1 *)0x12;
    iStack_78 = in_ECX[6] + -0x12;
    FUN_006e9790();
  }
  if ((in_ECX[0x20] != 0) && (*(int *)(in_ECX[0x20] + 8) != 0)) {
    puStack_6c = local_38;
    puStack_70 = (undefined1 *)0x68b94f;
    (**(code **)(*in_ECX + 0xbc))();
    puStack_6c = (undefined1 *)0x68b95b;
    puStack_6c = (undefined1 *)FUN_0048d850();
    puStack_70 = local_58;
    iStack_74 = 0x68b967;
    piVar6 = (int *)FUN_004107c0();
    puStack_6c = (undefined1 *)piVar6[3];
    puStack_70 = (undefined1 *)piVar6[2];
    iStack_74 = piVar6[1];
    iStack_78 = *piVar6;
    FUN_006e9790();
  }
  puStack_6c = (undefined1 *)0x68b980;
  cVar5 = FUN_006e6420();
  if (cVar5 != '\0') {
    puStack_6c = (undefined1 *)0x68b98b;
    FUN_0068b060();
    if ((*(byte *)(in_ECX + 0x1a) & 1) != 0) {
      puStack_6c = (undefined1 *)0x68b998;
      iVar7 = FUN_006d1d80();
      if (iVar7 != 0) {
        *(int *)(iVar7 + 0x1c) = in_ECX[0x36];
      }
    }
  }
  ExceptionList = local_10;
  return;
}

