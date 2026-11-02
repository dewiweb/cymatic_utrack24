// rea decompile_all
// name: FUN_005ea890
// address: 0x5ea890
// body: available
// range: 0x5ea890-0x5ea934 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ea890(void)

{
  byte *pbVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  
  if (in_ECX != (int *)0x0) {
    uVar2 = 0;
    iVar3 = 0;
    *(undefined1 *)(*in_ECX + 0x16) = 0;
    *(undefined1 *)(*in_ECX + 0x17) = 0;
    *(undefined1 *)(*in_ECX + 0x18) = 0;
    *(undefined1 *)(*in_ECX + 0x19) = 0;
    if (0 < in_ECX[1]) {
      do {
        pbVar1 = (byte *)(*in_ECX + iVar3);
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 << 8 ^ *(uint *)(&DAT_00b43470 + ((uint)*pbVar1 ^ uVar2 >> 0x18) * 4);
      } while (iVar3 < in_ECX[1]);
    }
    iVar3 = 0;
    if (0 < in_ECX[3]) {
      do {
        pbVar1 = (byte *)(in_ECX[2] + iVar3);
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 << 8 ^ *(uint *)(&DAT_00b43470 + ((uint)*pbVar1 ^ uVar2 >> 0x18) * 4);
      } while (iVar3 < in_ECX[3]);
    }
    *(char *)(*in_ECX + 0x16) = (char)uVar2;
    *(char *)(*in_ECX + 0x17) = (char)(uVar2 >> 8);
    *(char *)(*in_ECX + 0x18) = (char)(uVar2 >> 0x10);
    *(char *)(*in_ECX + 0x19) = (char)(uVar2 >> 0x18);
  }
  return;
}

