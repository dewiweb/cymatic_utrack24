// rea decompile_all
// name: FUN_0064ca00
// address: 0x64ca00
// body: available
// range: 0x64ca00-0x64cae9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064ca00(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  
  *(int *)(in_ECX + 0xcc) = *(int *)(in_ECX + 0xcc) + 1;
  if (*(uint *)(in_ECX + 0xbc) <= *(uint *)(in_ECX + 0xcc)) {
    if (*(char *)(in_ECX + 0x108) != '\0') {
      *(undefined4 *)(in_ECX + 0xcc) = 0;
      _memset(*(void **)(in_ECX + 0xd4),0,*(int *)(in_ECX + 0xc4) + 1);
      do {
        *(char *)(in_ECX + 0x109) = *(char *)(in_ECX + 0x109) + '\x01';
        bVar1 = *(byte *)(in_ECX + 0x109);
        if (6 < bVar1) goto LAB_0064cadc;
        uVar2 = (((byte)(&DAT_00c18760)[bVar1] - 1) +
                (*(int *)(in_ECX + 0xb4) - (uint)(byte)(&DAT_00c184e8)[bVar1])) /
                (uint)(byte)(&DAT_00c18760)[bVar1];
        *(uint *)(in_ECX + 200) = uVar2;
      } while (((*(byte *)(in_ECX + 0x30) & 2) == 0) &&
              ((uVar3 = (*(int *)(in_ECX + 0xb8) + -1 +
                        ((uint)(byte)(&UNK_00c184d4)[bVar1] - (uint)(byte)(&UNK_00c17e64)[bVar1])) /
                        (uint)(byte)(&UNK_00c184d4)[bVar1], *(uint *)(in_ECX + 0xbc) = uVar3,
               uVar3 == 0 || (uVar2 == 0))));
      if (bVar1 < 7) {
        return;
      }
    }
LAB_0064cadc:
    FUN_0064caf0();
  }
  return;
}

