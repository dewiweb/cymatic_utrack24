// rea decompile_all
// name: FUN_005d1a70
// address: 0x5d1a70
// body: available
// range: 0x5d1a70-0x5d1a8b inclusive
// range: 0x5d1a90-0x5d1b6c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005d1a70(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_ECX;
  undefined4 *in_EDX;
  int iVar5;
  int iVar6;
  
  if (*(int *)(in_ECX + 0x58) < 2) {
    return -0x83;
  }
  do {
    if (*(int *)(in_ECX + 0x58) == 4) {
      iVar6 = *(int *)(in_ECX + 0x1e4);
      if ((-1 < *(int *)(in_ECX + 0x1f8)) && (*(int *)(in_ECX + 0x1f8) < *(int *)(in_ECX + 500))) {
        iVar5 = 0;
        if (0 < *(int *)(iVar6 + 4)) {
          do {
            *(int *)(*(int *)(in_ECX + 0x1ec) + iVar5 * 4) =
                 *(int *)(*(int *)(in_ECX + 0x1e8) + iVar5 * 4) + *(int *)(in_ECX + 0x1f8) * 4;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(iVar6 + 4));
        }
        iVar6 = *(int *)(in_ECX + 500) - *(int *)(in_ECX + 0x1f8);
        if (iVar6 != 0) {
          uVar3 = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x48) + 0x1c) + 0xe48);
          if (in_EDX != (undefined4 *)0x0) {
            *in_EDX = *(undefined4 *)(in_ECX + 0x1ec);
          }
          if (param_1 < iVar6) {
            iVar6 = param_1;
          }
          if ((iVar6 == 0) || (*(int *)(in_ECX + 0x1f8) + iVar6 <= *(int *)(in_ECX + 500))) {
            *(int *)(in_ECX + 0x1f8) = *(int *)(in_ECX + 0x1f8) + iVar6;
          }
          uVar4 = iVar6 << ((byte)uVar3 & 0x1f);
          puVar1 = (uint *)(in_ECX + 0x50);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + uVar4;
          *(int *)(in_ECX + 0x54) =
               *(int *)(in_ECX + 0x54) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar2,uVar4);
          if (param_2 != (undefined4 *)0x0) {
            *param_2 = *(undefined4 *)(in_ECX + 0x60);
          }
          return iVar6;
        }
      }
    }
    iVar6 = FUN_005d3370();
    if (iVar6 == -2) {
      return 0;
    }
  } while (0 < iVar6);
  return iVar6;
}

