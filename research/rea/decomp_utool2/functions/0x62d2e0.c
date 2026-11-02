// rea decompile_all
// name: FUN_0062d2e0
// address: 0x62d2e0
// body: available
// range: 0x62d2e0-0x62d4ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0062d2e0(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined4 *puStack_44;
  undefined1 *puStack_40;
  int iStack_3c;
  undefined1 *puStack_38;
  int *piStack_34;
  undefined4 *puStack_30;
  int *piStack_2c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  
  piStack_2c = (int *)0x62d2fa;
  uVar7 = (**(code **)(*param_1 + 0xc))();
  uStack_18 = (undefined4)((ulonglong)uVar7 >> 0x20);
  iVar5 = 0;
  if (0 < *(int *)(in_ECX + 8)) {
    do {
      piStack_34 = param_1;
      puStack_38 = (undefined1 *)0x62d320;
      puStack_30 = (undefined4 *)uVar7;
      piStack_2c = (int *)uStack_18;
      cVar3 = FUN_004568f0();
      if (cVar3 == '\0') {
        return 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 8));
  }
  piStack_2c = (int *)0x62d337;
  uVar7 = (**(code **)(*param_1 + 0xc))();
  iVar5 = 0;
  if (0 < *(int *)(in_ECX + 8)) {
    do {
      uStack_14 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_c = (undefined4)uVar7;
      piStack_2c = param_1;
      puStack_30 = (undefined4 *)0x62d351;
      cVar3 = FUN_00456b40();
      uVar7 = CONCAT44(uStack_14,uStack_c);
      if (cVar3 == '\0') {
        return 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 8));
  }
  uStack_14 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_c = (undefined4)uVar7;
  piStack_2c = (int *)0x62d364;
  uVar7 = (**(code **)(*param_1 + 0xc))();
  uStack_14 = (undefined4)((ulonglong)uVar7 >> 0x20);
  pcVar1 = *(code **)(*param_1 + 0x24);
  if (pcVar1 == FUN_0062a8d0) {
    piStack_2c = (int *)0x4;
    puStack_30 = &uStack_18;
    uStack_18 = 0x6054b50;
    piStack_34 = (int *)0x62d38e;
    (**(code **)(*param_1 + 0x10))();
  }
  else {
    piStack_2c = (int *)0x6054b50;
    puStack_30 = (undefined4 *)0x62d4b2;
    (*pcVar1)();
  }
  pcVar1 = *(code **)(*param_1 + 0x1c);
  if (pcVar1 == FUN_00620620) {
    piStack_34 = (int *)0x2;
    puStack_38 = &stack0xffffffe0;
    iStack_3c = 0x62d3bf;
    (**(code **)(*param_1 + 0x10))();
  }
  else {
    piStack_34 = (int *)0x0;
    puStack_38 = (undefined1 *)0x62d4bb;
    (*pcVar1)();
  }
  pcVar1 = *(code **)(*param_1 + 0x1c);
  if (pcVar1 == FUN_00620620) {
    iStack_3c = 2;
    puStack_40 = &stack0xffffffd8;
    puStack_44 = (undefined4 *)0x62d3e3;
    (**(code **)(*param_1 + 0x10))();
  }
  else {
    iStack_3c = 0;
    puStack_40 = (undefined1 *)0x62d4c4;
    (*pcVar1)();
  }
  pcVar1 = *(code **)(*param_1 + 0x1c);
  if (pcVar1 == FUN_00620620) {
    puStack_44 = (undefined4 *)0x2;
    puStack_30 = (undefined4 *)(uint)*(ushort *)(in_ECX + 8);
    (**(code **)(*param_1 + 0x10))(&puStack_30);
  }
  else {
    puStack_44 = (undefined4 *)(uint)*(ushort *)(in_ECX + 8);
    (*pcVar1)();
  }
  puVar4 = (undefined1 *)(uint)*(ushort *)(in_ECX + 8);
  pcVar1 = *(code **)(*param_1 + 0x1c);
  if (pcVar1 == FUN_00620620) {
    puVar8 = (undefined1 *)0x2;
    puStack_38 = puVar4;
    (**(code **)(*param_1 + 0x10))(&puStack_38,2);
    puVar4 = puVar8;
  }
  else {
    (*pcVar1)(puVar4);
  }
  piVar2 = piStack_34;
  piVar6 = (int *)((int)uVar7 - (int)piStack_34);
  pcVar1 = *(code **)(*param_1 + 0x24);
  if (pcVar1 == FUN_0062a8d0) {
    piStack_34 = piVar6;
    (**(code **)(*param_1 + 0x10))(&piStack_34,4);
  }
  else {
    (*pcVar1)(piVar6);
  }
  pcVar1 = *(code **)(*param_1 + 0x24);
  if (pcVar1 == FUN_0062a8d0) {
    iStack_3c = (int)piVar2 - (int)puVar4;
    (**(code **)(*param_1 + 0x10))(&iStack_3c,4);
  }
  else {
    (*pcVar1)((int)piVar2 - (int)puVar4);
  }
  pcVar1 = *(code **)(*param_1 + 0x1c);
  if (pcVar1 == FUN_00620620) {
    puStack_44 = (undefined4 *)0x0;
    (**(code **)(*param_1 + 0x10))(&puStack_44,2);
    return 1;
  }
  (*pcVar1)(0);
  return 1;
}

