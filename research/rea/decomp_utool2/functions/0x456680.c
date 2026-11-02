// rea decompile_all
// name: FUN_00456680
// address: 0x456680
// body: available
// range: 0x456680-0x45677f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00456680(undefined4 param_1,uint param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007003c8;
  local_10 = ExceptionList;
  if (0 < *(int *)(in_ECX + 0x40)) {
    local_14 = *(uint *)(in_ECX + 0x28) - *(uint *)(in_ECX + 0x38);
    iVar5 = (*(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x3c)) -
            (uint)(*(uint *)(in_ECX + 0x28) < *(uint *)(in_ECX + 0x38));
    if (((int)param_2 >> 0x1f < iVar5) || (((int)param_2 >> 0x1f <= iVar5 && (param_2 <= local_14)))
       ) {
      local_14 = param_2;
    }
    piVar2 = *(int **)(in_ECX + 0x44);
    if (piVar2 != (int *)0x0) {
      ExceptionList = &local_10;
      if (piVar2 == *(int **)(*(int *)(in_ECX + 4) + 0x24)) {
        lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(in_ECX + 4) + 0xc);
        EnterCriticalSection(lpCriticalSection);
        local_8 = 0;
        uVar4 = *(uint *)(in_ECX + 0x40);
        uVar3 = uVar4 + *(uint *)(in_ECX + 0x20);
        (**(code **)(**(int **)(in_ECX + 0x44) + 0x58))
                  (uVar3 + *(uint *)(in_ECX + 0x38),
                   ((int)uVar4 >> 0x1f) + *(int *)(in_ECX + 0x24) +
                   (uint)CARRY4(uVar4,*(uint *)(in_ECX + 0x20)) + *(int *)(in_ECX + 0x3c) +
                   (uint)CARRY4(uVar3,*(uint *)(in_ECX + 0x38)));
        uVar4 = (**(code **)(**(int **)(in_ECX + 0x44) + 0xc))(param_1,local_14);
        LeaveCriticalSection(lpCriticalSection);
      }
      else {
        uVar4 = *(uint *)(in_ECX + 0x40);
        uVar3 = uVar4 + *(uint *)(in_ECX + 0x20);
        (**(code **)(*piVar2 + 0x58))
                  (uVar3 + *(uint *)(in_ECX + 0x38),
                   ((int)uVar4 >> 0x1f) + *(int *)(in_ECX + 0x24) +
                   (uint)CARRY4(uVar4,*(uint *)(in_ECX + 0x20)) + *(int *)(in_ECX + 0x3c) +
                   (uint)CARRY4(uVar3,*(uint *)(in_ECX + 0x38)),
                   DAT_00c76070 ^ (uint)&stack0xfffffffc);
        uVar4 = (**(code **)(**(int **)(in_ECX + 0x44) + 0xc))(param_1,local_14);
      }
      puVar1 = (uint *)(in_ECX + 0x38);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + uVar4;
      *(int *)(in_ECX + 0x3c) =
           *(int *)(in_ECX + 0x3c) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar3,uVar4);
      ExceptionList = local_10;
      return uVar4;
    }
  }
  return 0;
}

