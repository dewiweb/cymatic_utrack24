// rea decompile_all
// name: FUN_00498ce0
// address: 0x498ce0
// body: available
// range: 0x498ce0-0x498e5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00498ce0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int in_ECX;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_a0 [40];
  undefined1 local_78 [40];
  undefined1 local_50 [40];
  undefined1 local_28 [16];
  void *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702862;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = (void *)0x0;
  puVar1 = *(undefined4 **)(in_ECX + 0xdc);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0xdc) = 0;
    (**(code **)*puVar1)(1,uVar5);
  }
  if ((((param_1 != 0) && (*(char *)(param_1 + 0x94) != '\0')) && (*(int *)(param_1 + 0x78) != 0))
     && (0 < *(int *)(*(int *)(param_1 + 0x78) + 8))) {
    local_18 = operator_new(0x104);
    local_8 = 0;
    puVar10 = local_50;
    uVar13 = *(undefined4 *)(in_ECX + 0xa8);
    uVar5 = (uint)*(byte *)(in_ECX + 0xc6);
    uVar2 = *(undefined4 *)(param_1 + 0x78);
    uVar12 = 0;
    uVar11 = 0;
    uVar9 = 0;
    puVar8 = local_78;
    uVar6 = FUN_006d2360(local_28);
    FUN_006a0450(local_a0,uVar6);
    FUN_006a0400(puVar8,uVar9);
    uVar6 = FUN_006d1070(puVar10,uVar11);
    puVar7 = (undefined4 *)FUN_00496b80(uVar2,in_ECX,uVar6,uVar12,uVar5,uVar13);
    local_8 = 0xffffffff;
    puVar1 = *(undefined4 **)(in_ECX + 0xdc);
    if ((puVar1 != puVar7) &&
       (*(undefined4 **)(in_ECX + 0xdc) = puVar7, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    (**(code **)(**(int **)(in_ECX + 0xdc) + 0x28))(1);
    piVar3 = *(int **)(in_ECX + 0xdc);
    cVar4 = FUN_006d1aa0(0);
    if (cVar4 == '\0') {
      FUN_0048c530();
      FUN_006ca6c0(piVar3,0);
      (**(code **)(*piVar3 + 0x28))(1);
    }
    FUN_006e9910(0);
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}

