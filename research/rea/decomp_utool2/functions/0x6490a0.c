// rea decompile_all
// name: FUN_006490a0
// address: 0x6490a0
// body: available
// range: 0x6490a0-0x6491da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006490a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int extraout_EDX;
  int iVar4;
  undefined4 *local_8;
  
  iVar1 = FUN_00649230(param_1[1]);
  if (iVar1 == 0) {
    local_8 = (undefined4 *)(in_ECX + 0x70);
    *(undefined4 *)(in_ECX + 0x38) = *param_1;
    iVar4 = param_1[1];
    iVar1 = 0x400;
    *(undefined4 *)(in_ECX + 0x3c) = 0;
    *(undefined4 **)(in_ECX + 0x44) = param_1 + 3;
    *(undefined4 *)(in_ECX + 0x48) = 0x400;
    do {
      iVar2 = -1;
      if (iVar4 != -1) {
        iVar2 = iVar4;
      }
      iVar4 = iVar4 - iVar2;
      *(int *)(in_ECX + 0x3c) = iVar2;
      if (*(int *)(in_ECX + 0x48) == 0) {
        if (0x7fffffff < (uint)(param_2 + iVar1)) break;
        puVar3 = (undefined4 *)*local_8;
        if (puVar3 == (undefined4 *)0x0) {
          iVar2 = *(int *)(in_ECX + 0x74) + 4;
          if ((iVar2 == 0) ||
             (puVar3 = (undefined4 *)FUN_004c554b(iVar2), puVar3 == (undefined4 *)0x0)) break;
          *puVar3 = 0;
          *local_8 = puVar3;
        }
        *(undefined4 **)(in_ECX + 0x44) = puVar3 + 1;
        iVar1 = iVar1 + *(int *)(in_ECX + 0x74);
        *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x74);
        local_8 = puVar3;
      }
      iVar2 = FUN_00618f20();
      iVar4 = iVar4 + *(int *)(in_ECX + 0x3c);
      *(undefined4 *)(in_ECX + 0x3c) = 0;
    } while (iVar2 == 0);
    iVar1 = iVar1 - *(int *)(in_ECX + 0x48);
    *(undefined4 *)(in_ECX + 0x48) = 0;
    param_1[2] = iVar1;
    if ((uint)(param_2 + iVar1) < 0x7fffffff) {
      FUN_00658fd0();
      iVar1 = extraout_EDX;
    }
    else {
      *(char **)(in_ECX + 0x50) = "compressed data too long";
      iVar1 = -4;
    }
    *(undefined4 *)(in_ECX + 0x34) = 0;
    if ((iVar1 == 1) && (iVar4 == 0)) {
      FUN_00649460();
      return 0;
    }
  }
  return iVar1;
}

