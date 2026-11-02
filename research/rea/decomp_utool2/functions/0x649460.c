// rea decompile_all
// name: FUN_00649460
// address: 0x649460
// body: available
// range: 0x649460-0x6494d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00649460(void)

{
  byte bVar1;
  uint uVar2;
  byte *in_ECX;
  uint in_EDX;
  uint uVar3;
  
  if (in_EDX < 0x4001) {
    bVar1 = *in_ECX;
    if (((bVar1 & 0xf) == 8) && ((bVar1 & 0xf0) < 0x71)) {
      uVar2 = (uint)(bVar1 >> 4);
      uVar3 = 1 << (bVar1 >> 4) + 7;
      if (in_EDX <= uVar3) {
        do {
          uVar3 = uVar3 >> 1;
          uVar2 = uVar2 - 1;
          if (uVar2 == 0) break;
        } while (in_EDX <= uVar3);
        uVar2 = uVar2 * 0x10 | 8;
        *in_ECX = (byte)uVar2;
        in_ECX[1] = ((char)(in_ECX[1] & 0xe0) -
                    (char)((ulonglong)(uVar2 * 0x100 + (in_ECX[1] & 0xe0)) % 0x1f)) + 0x1f;
      }
    }
  }
  return;
}

