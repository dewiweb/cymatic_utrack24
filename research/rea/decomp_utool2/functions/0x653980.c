// rea decompile_all
// name: FUN_00653980
// address: 0x653980
// body: available
// range: 0x653980-0x653a9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00653980(void)

{
  byte bVar1;
  int iVar2;
  int *in_ECX;
  int in_EDX;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  bVar1 = *(byte *)((int)in_ECX + 9);
  if (bVar1 < 8) {
    iVar2 = *in_ECX;
    if (bVar1 == 1) {
      pbVar5 = (byte *)((iVar2 - 1U >> 3) + in_EDX);
      pbVar6 = (byte *)(in_EDX + -1 + iVar2);
      iVar3 = 7 - (iVar2 - 1U & 7);
      for (iVar4 = iVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pbVar6 = *pbVar5 >> ((byte)iVar3 & 0x1f) & 1;
        if (iVar3 == 7) {
          iVar3 = 0;
          pbVar5 = pbVar5 + -1;
        }
        else {
          iVar3 = iVar3 + 1;
        }
        pbVar6 = pbVar6 + -1;
      }
    }
    else if (bVar1 == 2) {
      pbVar5 = (byte *)((iVar2 - 1U >> 2) + in_EDX);
      pbVar6 = (byte *)(in_EDX + -1 + iVar2);
      iVar4 = (3 - (iVar2 - 1U & 3)) * 2;
      for (iVar3 = iVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pbVar6 = *pbVar5 >> ((byte)iVar4 & 0x1f) & 3;
        if (iVar4 == 6) {
          iVar4 = 0;
          pbVar5 = pbVar5 + -1;
        }
        else {
          iVar4 = iVar4 + 2;
        }
        pbVar6 = pbVar6 + -1;
      }
    }
    else if (bVar1 == 4) {
      pbVar5 = (byte *)((iVar2 - 1U >> 1) + in_EDX);
      pbVar6 = (byte *)(in_EDX + -1 + iVar2);
      iVar3 = (1 - (iVar2 - 1U & 1)) * 4;
      for (iVar4 = iVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pbVar6 = *pbVar5 >> ((byte)iVar3 & 0x1f) & 0xf;
        if (iVar3 == 4) {
          iVar3 = 0;
          pbVar5 = pbVar5 + -1;
        }
        else {
          iVar3 = 4;
        }
        pbVar6 = pbVar6 + -1;
      }
    }
    *(char *)((int)in_ECX + 0xb) = *(char *)((int)in_ECX + 10) << 3;
    *(undefined1 *)((int)in_ECX + 9) = 8;
    in_ECX[1] = (uint)*(byte *)((int)in_ECX + 10) * iVar2;
  }
  return;
}

