// rea decompile_all
// name: FUN_004989e0
// address: 0x4989e0
// body: available
// range: 0x4989e0-0x498ac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004989e0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  iVar3 = 0;
  local_10 = 0;
  local_8 = 0;
  local_14 = 0;
  if (0 < *(int *)(in_ECX + 0xcc)) {
    do {
      iVar5 = *(int *)(in_ECX + 0xa4) - local_8;
      iVar3 = (*(int *)(in_ECX + 0xcc) + -1 + *(int *)(in_ECX + 0xa4)) / *(int *)(in_ECX + 0xcc);
      if (iVar3 < iVar5) {
        iVar5 = iVar3;
      }
      if (local_14 < *(uint *)(in_ECX + 0xe8)) {
        iVar3 = *(int *)(*(int *)(in_ECX + 0xe0) + local_14 * 4);
      }
      else {
        iVar3 = 0;
      }
      iVar4 = ((*(int *)(in_ECX + 0xb8) - *(int *)(in_ECX + 0xd4)) - *(int *)(in_ECX + 0x14)) + 2;
      if (0 < iVar5) {
        iVar2 = local_8 * 4;
        local_1c = iVar5;
        do {
          iVar1 = *(int *)(iVar2 + *(int *)(in_ECX + 0x9c));
          FUN_006e9790(local_10,iVar4,iVar3,*(undefined4 *)(iVar1 + 0x1c));
          iVar4 = iVar4 + *(int *)(iVar1 + 0x1c);
          iVar2 = iVar2 + 4;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      local_14 = local_14 + 1;
      iVar3 = local_10 + iVar3;
      local_8 = local_8 + iVar5;
      local_10 = iVar3;
    } while ((int)local_14 < *(int *)(in_ECX + 0xcc));
  }
  return iVar3;
}

