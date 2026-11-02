// rea decompile_all
// name: FUN_006494e0
// address: 0x6494e0
// body: available
// range: 0x6494e0-0x64963a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006494e0(void)

{
  byte bVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  byte local_c;
  int local_8;
  
  uVar2 = *(uint *)(in_ECX + 0xb8);
  if ((*(uint *)(in_ECX + 0xc4) < 0x8000) && (uVar2 < 0x8000)) {
    if (*(char *)(in_ECX + 0x108) != '\0') {
      bVar1 = *(byte *)(in_ECX + 0x10e);
      local_8 = 0;
      iVar6 = 8;
      uVar5 = 0;
      do {
        if ((int)uVar5 < 2) {
          bVar4 = 3;
          local_c = 3;
        }
        else {
          bVar4 = (byte)(iVar6 + -1 >> 1);
          local_c = (byte)(iVar6 + -1 >> 1);
        }
        uVar3 = *(int *)(in_ECX + 0xb4) + -1 +
                ((1 << (bVar4 & 0x1f)) -
                ((uVar5 & 1) << (3U - (char)((int)(uVar5 + 1) >> 1) & 0x1f) & 7)) >>
                (local_c & 0x1f);
        if (uVar3 != 0) {
          if (bVar1 < 8) {
            uVar3 = uVar3 * bVar1 + 7 >> 3;
          }
          else {
            uVar3 = (bVar1 >> 3) * uVar3;
          }
          local_c = (byte)(iVar6 >> 1);
          if ((int)uVar5 < 3) {
            local_c = 3;
          }
          local_8 = local_8 + (((1 << (local_c & 0x1f)) -
                               ((~uVar5 & 1) << (3U - (char)((int)uVar5 >> 1) & 0x1f) & 7)) +
                               (uVar2 - 1) >> (local_c & 0x1f)) * (uVar3 + 1);
        }
        iVar6 = iVar6 + -1;
        uVar5 = uVar5 + 1;
      } while (1 < iVar6);
      return local_8;
    }
    return (*(uint *)(in_ECX + 0xc4) + 1) * uVar2;
  }
  return -1;
}

