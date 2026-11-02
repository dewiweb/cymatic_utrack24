// rea decompile_all
// name: FUN_005f40c0
// address: 0x5f40c0
// body: available
// range: 0x5f40c0-0x5f4188 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f40c0(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int in_ECX;
  int in_EDX;
  int *piVar4;
  uint uVar5;
  undefined4 local_8;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = *(int *)(iVar2 + 0x58 + in_EDX * 4);
  piVar4 = (int *)(in_EDX * 0x124 + 0x494 + iVar2);
  *(undefined4 *)((in_EDX + 4) * 0x124 + iVar2) = 1;
  *piVar4 = iVar1;
  uVar5 = 0;
  if (*(int *)(*(int *)(in_ECX + 4) + 0x468) != 0) {
    bVar3 = 0x20 - (char)param_1;
    do {
      if (param_1 == 0) {
        local_8 = 0;
      }
      else {
        iVar2 = FUN_005feec0(param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
      local_8 = (local_8 << (bVar3 & 0x1f)) >> (bVar3 & 0x1f);
      *(int *)(iVar1 + uVar5 * 4) = local_8;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(*(int *)(in_ECX + 4) + 0x468));
  }
  FUN_004c2c30(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x38 + in_EDX * 4),*piVar4,
               *(int *)(*(int *)(in_ECX + 4) + 0x468) << 2);
  return 1;
}

