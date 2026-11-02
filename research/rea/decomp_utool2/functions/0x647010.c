// rea decompile_all
// name: FUN_00647010
// address: 0x647010
// body: available
// range: 0x647010-0x647055 inclusive
// range: 0x647060-0x647150 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00647010(void)

{
  byte bVar1;
  byte bVar2;
  void *_Dst;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  
  *(int *)(in_ECX + 0xcc) = *(int *)(in_ECX + 0xcc) + 1;
  if (*(uint *)(in_ECX + 0xbc) <= *(uint *)(in_ECX + 0xcc)) {
    if (*(char *)(in_ECX + 0x108) != '\0') {
      *(undefined4 *)(in_ECX + 0xcc) = 0;
      if ((*(byte *)(in_ECX + 0x30) & 2) == 0) {
        do {
          *(char *)(in_ECX + 0x109) = *(char *)(in_ECX + 0x109) + '\x01';
          bVar1 = *(byte *)(in_ECX + 0x109);
          if (6 < bVar1) goto LAB_0064713c;
          bVar2 = (&UNK_00c184d4)[bVar1];
          uVar4 = (*(int *)(in_ECX + 0xb4) + -1 +
                  ((uint)(byte)(&DAT_00c18760)[bVar1] - (uint)(byte)(&DAT_00c184e8)[bVar1])) /
                  (uint)(byte)(&DAT_00c18760)[bVar1];
          *(uint *)(in_ECX + 0xc0) = uVar4;
          uVar3 = ((*(int *)(in_ECX + 0xb8) - (uint)(byte)(&UNK_00c17e64)[bVar1]) + -1 + (uint)bVar2
                  ) / (uint)bVar2;
          *(uint *)(in_ECX + 0xbc) = uVar3;
        } while ((uVar4 == 0) || (uVar3 == 0));
      }
      else {
        *(char *)(in_ECX + 0x109) = *(char *)(in_ECX + 0x109) + '\x01';
      }
      if (*(byte *)(in_ECX + 0x109) < 7) {
        _Dst = *(void **)(in_ECX + 0xd4);
        if (_Dst == (void *)0x0) {
          return;
        }
        uVar4 = (uint)*(byte *)(in_ECX + 0x110) * (uint)*(byte *)(in_ECX + 0x10d);
        if (7 < uVar4) {
          _memset(_Dst,0,(uVar4 >> 3) * *(int *)(in_ECX + 0xb4) + 1);
          return;
        }
        _memset(_Dst,0,(uVar4 * *(int *)(in_ECX + 0xb4) + 7 >> 3) + 1);
        return;
      }
    }
LAB_0064713c:
    FUN_00648870(0,4);
  }
  return;
}

