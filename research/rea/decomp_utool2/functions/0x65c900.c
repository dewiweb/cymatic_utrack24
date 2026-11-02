// rea decompile_all
// name: FUN_0065c900
// address: 0x65c900
// body: available
// range: 0x65c900-0x65ca2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065c900(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_8;
  
  local_8 = 1;
  do {
    iVar1 = param_1[1];
    if ((local_8 < 0) || (1 < local_8)) {
      *(undefined4 *)(*param_1 + 0x14) = 0xe;
      *(int *)(*param_1 + 0x18) = local_8;
      (**(code **)*param_1)(param_1);
    }
    if (local_8 == 1) {
      for (iVar2 = *(int *)(iVar1 + 0x44); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x24)) {
        if (*(char *)(iVar2 + 0x22) != '\0') {
          *(undefined1 *)(iVar2 + 0x22) = 0;
          (**(code **)(iVar2 + 0x30))(param_1,iVar2 + 0x28);
        }
      }
      iVar2 = *(int *)(iVar1 + 0x48);
      *(undefined4 *)(iVar1 + 0x44) = 0;
      for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x24)) {
        if (*(char *)(iVar2 + 0x22) != '\0') {
          *(undefined1 *)(iVar2 + 0x22) = 0;
          (**(code **)(iVar2 + 0x30))(param_1,iVar2 + 0x28);
        }
      }
      *(undefined4 *)(iVar1 + 0x48) = 0;
    }
    puVar3 = *(undefined4 **)(iVar1 + 0x3c + local_8 * 4);
    *(undefined4 *)(iVar1 + 0x3c + local_8 * 4) = 0;
    while (puVar3 != (undefined4 *)0x0) {
      iVar2 = puVar3[2];
      iVar4 = puVar3[1];
      puVar5 = (undefined4 *)*puVar3;
      FID_conflict__free(puVar3);
      *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) - (iVar4 + iVar2 + 0x10);
      puVar3 = puVar5;
    }
    puVar3 = *(undefined4 **)(iVar1 + 0x34 + local_8 * 4);
    *(undefined4 *)(iVar1 + 0x34 + local_8 * 4) = 0;
    while (puVar3 != (undefined4 *)0x0) {
      iVar2 = puVar3[2];
      iVar4 = puVar3[1];
      puVar5 = (undefined4 *)*puVar3;
      FID_conflict__free(puVar3);
      *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) - (iVar4 + iVar2 + 0x10);
      puVar3 = puVar5;
    }
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  FID_conflict__free((void *)param_1[1]);
  param_1[1] = 0;
  return;
}

