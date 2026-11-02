// rea decompile_all
// name: FUN_0044b090
// address: 0x44b090
// body: available
// range: 0x44b090-0x44b2a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044b090(void)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ff66f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0 < *(int *)(in_ECX + 0x88)) {
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x7c) + 0x10))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') {
      if (*(int *)(in_ECX + 0x9c) == 0) {
        operator_new(0xcc);
        local_14 = &DAT_00bfe12c;
        local_8 = 1;
        puVar4 = (undefined4 *)FUN_006e8840(&local_14);
        puVar1 = *(undefined4 **)(in_ECX + 0x9c);
        if ((puVar1 != puVar4) &&
           (*(undefined4 **)(in_ECX + 0x9c) = puVar4, puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        local_8 = 0xffffffff;
        FUN_00637c10();
        if (in_ECX + 0x74 != 0) {
          FUN_004097d0(in_ECX + 0x74);
        }
        piVar2 = *(int **)(in_ECX + 0x9c);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x28))(1);
          FUN_006e5050(piVar2,0xffffffff);
        }
        operator_new(0xd0);
        local_8 = 3;
        uVar5 = FUN_00637250();
        local_14 = &DAT_00bfe12c;
        local_8 = 5;
        puVar4 = (undefined4 *)FUN_006e8b40(&local_14,uVar5);
        puVar1 = *(undefined4 **)(in_ECX + 0xac);
        if ((puVar1 != puVar4) &&
           (*(undefined4 **)(in_ECX + 0xac) = puVar4, puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        FUN_00637c10();
        local_8 = 0xffffffff;
        FUN_00637c10();
        FUN_006e89c0(*(undefined4 *)(in_ECX + 0x9c),extraout_ECX);
        operator_new(0x8c);
        puVar4 = (undefined4 *)FUN_00449240(*(undefined4 *)(in_ECX + 0x80));
        puVar1 = *(undefined4 **)(in_ECX + 0xc4);
        if ((puVar1 != puVar4) &&
           (*(undefined4 **)(in_ECX + 0xc4) = puVar4, puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        piVar2 = *(int **)(in_ECX + 0xc4);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x28))(1);
          FUN_006e5050(piVar2,0xffffffff);
        }
      }
      FUN_0044a8d0(*(undefined4 *)(in_ECX + 0x9c),1);
    }
  }
  if (*(int *)(in_ECX + 0x9c) != 0) {
    iVar6 = (**(code **)(**(int **)(in_ECX + 0x7c) + 0xc))
                      (*(undefined4 *)(*(int *)(in_ECX + 0x80) + 0x98),1);
    FUN_006e83a0(iVar6 + 1,0);
  }
  ExceptionList = local_10;
  return;
}

