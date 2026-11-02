// rea decompile_all
// name: FUN_0049c5c9
// address: 0x49c5c9
// body: available
// range: 0x49c5c9-0x49c6d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049c5c9(void)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int in_ECX;
  
  puVar1 = (uint *)(in_ECX + 0xcc);
  *puVar1 = *puVar1 + 1;
  if (*(uint *)(in_ECX + 0xbc) <= *puVar1) {
    if (*(char *)(in_ECX + 0x108) != '\0') {
      *puVar1 = 0;
      if ((*(byte *)(in_ECX + 0x30) & 2) == 0) {
        do {
          *(char *)(in_ECX + 0x109) = *(char *)(in_ECX + 0x109) + '\x01';
          bVar3 = *(byte *)(in_ECX + 0x109);
          if (6 < bVar3) goto LAB_0049c6c4;
          uVar5 = ((*(int *)(in_ECX + 0xb4) - (uint)(byte)(&DAT_00919fe8)[bVar3]) + -1 +
                  (uint)(byte)(&DAT_0091a74c)[bVar3]) / (uint)(byte)(&DAT_0091a74c)[bVar3];
          uVar4 = ((*(int *)(in_ECX + 0xb8) - (uint)(byte)(&UNK_00919ff0)[bVar3]) + -1 +
                  (uint)(byte)(&UNK_00919ff8)[bVar3]) / (uint)(byte)(&UNK_00919ff8)[bVar3];
          *(uint *)(in_ECX + 0xc0) = uVar5;
          *(uint *)(in_ECX + 0xbc) = uVar4;
        } while ((uVar5 == 0) || (uVar4 == 0));
        bVar3 = *(byte *)(in_ECX + 0x109);
      }
      else {
        pbVar2 = (byte *)(in_ECX + 0x109);
        *pbVar2 = *pbVar2 + 1;
        bVar3 = *pbVar2;
      }
      if (bVar3 < 7) {
        if (*(void **)(in_ECX + 0xd4) == (void *)0x0) {
          return;
        }
        uVar5 = (uint)*(byte *)(in_ECX + 0x110) * (uint)*(byte *)(in_ECX + 0x10d);
        if (uVar5 < 8) {
          uVar5 = *(int *)(in_ECX + 0xb4) * uVar5 + 7 >> 3;
        }
        else {
          uVar5 = (uVar5 >> 3) * *(int *)(in_ECX + 0xb4);
        }
        _memset(*(void **)(in_ECX + 0xd4),0,uVar5 + 1);
        return;
      }
    }
LAB_0049c6c4:
    FUN_0049b70a(0,0,4);
  }
  return;
}

