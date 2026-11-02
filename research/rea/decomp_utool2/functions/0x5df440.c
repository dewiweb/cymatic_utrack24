// rea decompile_all
// name: FUN_005df440
// address: 0x5df440
// body: available
// range: 0x5df440-0x5df502 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005df440(int param_1)

{
  byte bVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  undefined4 local_c;
  
  iVar2 = *(int *)(in_ECX + 4);
  if (0 < iVar2 + -6) {
    FUN_005df6f0(param_1);
  }
  iVar2 = iVar2 + -7;
  bVar1 = 1;
  if (0 < iVar2) {
    local_c = 2;
    do {
      if (0 < (int)local_c) {
        uVar3 = local_c;
        do {
          FUN_005df510(param_1 >> (bVar1 & 0x1f),4 << (bVar1 & 0x1f));
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      iVar2 = iVar2 + -1;
      bVar1 = bVar1 + 1;
      local_c = local_c << 1 | (uint)((int)local_c < 0);
    } while (0 < iVar2);
  }
  if (0 < param_1) {
    do {
      iVar2 = FUN_005df8a0();
    } while (iVar2 != 1);
  }
  return;
}

