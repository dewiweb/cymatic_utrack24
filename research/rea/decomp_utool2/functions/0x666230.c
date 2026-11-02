// rea decompile_all
// name: FUN_00666230
// address: 0x666230
// body: available
// range: 0x666230-0x666354 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00666230(int param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x184);
  if (*(char *)(iVar2 + 0x30) == '\0') {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x188) + 0xc))
                      (param_1,*(undefined4 *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4));
    if (iVar3 == 0) {
      return;
    }
    *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + 1;
    *(undefined1 *)(iVar2 + 0x30) = 1;
  }
  iVar3 = *(int *)(iVar2 + 0x44);
  if (iVar3 != 0) {
    if (iVar3 == 1) goto LAB_006662f4;
    if (iVar3 != 2) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x18c) + 4))
              (param_1,*(undefined4 *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4),
               (uint *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x48),param_2,param_3,param_4);
    if (*(uint *)(iVar2 + 0x34) < *(uint *)(iVar2 + 0x48)) {
      return;
    }
    *(undefined4 *)(iVar2 + 0x44) = 0;
    if (param_4 <= *param_3) {
      return;
    }
  }
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(int *)(iVar2 + 0x48) = *(int *)(param_1 + 0x118) + -1;
  if (*(int *)(iVar2 + 0x4c) == *(int *)(param_1 + 0x11c)) {
    FUN_00666460();
  }
  *(undefined4 *)(iVar2 + 0x44) = 1;
LAB_006662f4:
  puVar1 = (uint *)(iVar2 + 0x34);
  (**(code **)(*(int *)(param_1 + 0x18c) + 4))
            (param_1,*(undefined4 *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4),puVar1,
             *(undefined4 *)(iVar2 + 0x48),param_2,param_3,param_4);
  if (*(uint *)(iVar2 + 0x48) <= *puVar1) {
    if (*(int *)(iVar2 + 0x4c) == 1) {
      FUN_00666500();
    }
    *(uint *)(iVar2 + 0x40) = *(uint *)(iVar2 + 0x40) ^ 1;
    *(undefined1 *)(iVar2 + 0x30) = 0;
    *puVar1 = *(int *)(param_1 + 0x118) + 1;
    iVar3 = *(int *)(param_1 + 0x118);
    *(undefined4 *)(iVar2 + 0x44) = 2;
    *(int *)(iVar2 + 0x48) = iVar3 + 2;
  }
  return;
}

