// rea decompile_all
// name: FUN_004987a0
// address: 0x4987a0
// body: available
// range: 0x4987a0-0x4988d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004987a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)(in_ECX + 0xa4) + -1;
  if (-1 < iVar1) {
    piVar3 = (int *)(*(int *)(in_ECX + 0x9c) + iVar1 * 4);
    while (((iVar4 = *piVar3, iVar4 == 0 || (*(int *)(iVar4 + 0x74) != param_1)) ||
           (*(int *)(in_ECX + 0xc0) < 0x61))) {
      piVar3 = piVar3 + -1;
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return;
      }
    }
    iVar1 = *(int *)(iVar4 + 0x14);
    if (((0 < param_2) || (iVar1 < 0)) || (*(int *)(in_ECX + 0xc0) < *(int *)(iVar4 + 0x1c) + iVar1)
       ) {
      if (param_2 < 0) {
        iVar2 = (*(int *)(in_ECX + 0xc0) - *(int *)(iVar4 + 0x1c)) + -0x18;
        iVar4 = 0x18;
        if (0x18 < iVar2) {
          iVar4 = iVar2;
        }
        if (iVar1 < 0x18) {
          param_2 = 0x18;
        }
        else {
          param_2 = iVar1;
          if (iVar4 < iVar1) {
            param_2 = iVar4;
          }
        }
      }
      FUN_00498000(local_14,*(undefined4 *)(in_ECX + 0xb4),*(undefined4 *)(in_ECX + 0xb8));
      iVar4 = *(int *)(in_ECX + 0xbc);
      if (local_c < *(int *)(in_ECX + 0xbc)) {
        iVar4 = local_c;
      }
      *(int *)(in_ECX + 0xbc) = iVar4;
      iVar4 = *(int *)(in_ECX + 0xc0);
      if (local_8 < *(int *)(in_ECX + 0xc0)) {
        iVar4 = local_8;
      }
      *(int *)(in_ECX + 0xc0) = iVar4;
      iVar4 = *(int *)(in_ECX + 0xb8) + (param_2 - iVar1);
      local_8 = (local_10 - *(int *)(in_ECX + 0xc0)) + local_8;
      if ((local_10 <= iVar4) && (local_10 = iVar4, local_8 < iVar4)) {
        local_10 = local_8;
      }
      *(int *)(in_ECX + 0xd4) =
           *(int *)(in_ECX + 0xd4) + ((local_10 - *(int *)(in_ECX + 0xb8)) - (param_2 - iVar1));
      *(int *)(in_ECX + 0xb8) = local_10;
      *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(in_ECX + 0xb4);
      FUN_004989e0();
    }
  }
  return;
}

