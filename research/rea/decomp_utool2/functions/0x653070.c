// rea decompile_all
// name: FUN_00653070
// address: 0x653070
// body: available
// range: 0x653070-0x65320d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00653070(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  int *in_ECX;
  int in_EDX;
  undefined1 *puVar5;
  int iVar6;
  
  bVar1 = *(byte *)((int)in_ECX + 9);
  iVar3 = *in_ECX;
  if ((7 < bVar1) && (bVar2 = *(byte *)(in_ECX + 2), (bVar2 & 2) == 0)) {
    if (bVar2 == 0) {
      if (bVar1 == 8) {
        puVar5 = (undefined1 *)(in_EDX + -1 + iVar3);
        puVar4 = puVar5 + iVar3 * 2;
        for (iVar6 = iVar3; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = *puVar5;
          puVar4[-1] = *puVar5;
          puVar4[-2] = *puVar5;
          puVar5 = puVar5 + -1;
          puVar4 = puVar4 + -3;
        }
      }
      else {
        puVar5 = (undefined1 *)(in_EDX + -1 + iVar3 * 2);
        puVar4 = puVar5 + iVar3 * 4;
        for (iVar6 = iVar3; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = *puVar5;
          puVar4[-1] = puVar5[-1];
          puVar4[-2] = *puVar5;
          puVar4[-3] = puVar5[-1];
          puVar4[-4] = *puVar5;
          puVar4[-5] = puVar5[-1];
          puVar5 = puVar5 + -2;
          puVar4 = puVar4 + -6;
        }
      }
    }
    else if (bVar2 == 4) {
      if (bVar1 == 8) {
        puVar5 = (undefined1 *)(in_EDX + iVar3 * 2 + -1);
        puVar4 = puVar5 + iVar3 * 2;
        for (iVar6 = iVar3; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = *puVar5;
          puVar4[-1] = puVar5[-1];
          puVar4[-2] = puVar5[-1];
          puVar4[-3] = puVar5[-1];
          puVar5 = puVar5 + -2;
          puVar4 = puVar4 + -4;
        }
      }
      else {
        puVar5 = (undefined1 *)(in_EDX + -1 + iVar3 * 4);
        puVar4 = puVar5 + iVar3 * 4;
        for (iVar6 = iVar3; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = *puVar5;
          puVar4[-1] = puVar5[-1];
          puVar4[-2] = puVar5[-2];
          puVar4[-3] = puVar5[-3];
          puVar4[-4] = puVar5[-2];
          puVar4[-5] = puVar5[-3];
          puVar4[-6] = puVar5[-2];
          puVar4[-7] = puVar5[-3];
          puVar5 = puVar5 + -4;
          puVar4 = puVar4 + -8;
        }
      }
    }
    *(char *)((int)in_ECX + 10) = *(char *)((int)in_ECX + 10) + '\x02';
    *(byte *)(in_ECX + 2) = *(byte *)(in_ECX + 2) | 2;
    bVar1 = *(char *)((int)in_ECX + 9) * *(char *)((int)in_ECX + 10);
    *(byte *)((int)in_ECX + 0xb) = bVar1;
    if (7 < bVar1) {
      in_ECX[1] = (uint)(bVar1 >> 3) * iVar3;
      return;
    }
    in_ECX[1] = (uint)bVar1 * iVar3 + 7 >> 3;
  }
  return;
}

