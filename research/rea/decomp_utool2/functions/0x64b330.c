// rea decompile_all
// name: FUN_0064b330
// address: 0x64b330
// body: available
// range: 0x64b330-0x64b384 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064b330(void)

{
  byte bVar1;
  int in_ECX;
  uint uVar2;
  byte *in_EDX;
  undefined *puVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(in_ECX + 9);
  if (bVar1 < 8) {
    uVar4 = *(uint *)(in_ECX + 4);
    if (bVar1 == 1) {
      puVar3 = &DAT_00c026f0;
    }
    else if (bVar1 == 2) {
      puVar3 = &DAT_00c024e0;
    }
    else {
      if (bVar1 != 4) {
        return;
      }
      puVar3 = &DAT_00c025e0;
    }
    uVar2 = 0;
    if (in_EDX + uVar4 < in_EDX) {
      uVar4 = 0;
    }
    if (uVar4 != 0) {
      do {
        uVar2 = uVar2 + 1;
        *in_EDX = puVar3[*in_EDX];
        in_EDX = in_EDX + 1;
      } while (uVar2 < uVar4);
    }
  }
  return;
}

