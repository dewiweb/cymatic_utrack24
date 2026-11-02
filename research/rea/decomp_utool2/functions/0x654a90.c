// rea decompile_all
// name: FUN_00654a90
// address: 0x654a90
// body: available
// range: 0x654a90-0x654b4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00654a90(void)

{
  char cVar1;
  int in_ECX;
  short sVar2;
  short sVar3;
  
  if ((*(byte *)(in_ECX + 0x10b) & 4) == 0) {
    *(uint *)(in_ECX + 0x30) = *(uint *)(in_ECX + 0x30) & 0xff7fffff;
    *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) & 0xffffdfff;
    if (*(short *)(in_ECX + 0x104) == 0) {
      *(uint *)(in_ECX + 0x30) = *(uint *)(in_ECX + 0x30) & 0xfffffe7f;
    }
  }
  if (((*(uint *)(in_ECX + 0x30) & 0x1100) == 0x1100) && ((*(byte *)(in_ECX + 0x10b) & 2) == 0)) {
    cVar1 = *(char *)(in_ECX + 0x10c);
    sVar2 = *(short *)(in_ECX + 0x174);
    sVar3 = *(short *)(in_ECX + 0x124);
    if (cVar1 == '\x01') {
      sVar3 = sVar3 * 0xff;
      sVar2 = sVar2 * 0xff;
    }
    else if (cVar1 == '\x02') {
      sVar3 = sVar3 * 0x55;
      sVar2 = sVar2 * 0x55;
    }
    else if (cVar1 == '\x04') {
      sVar3 = sVar3 * 0x11;
      sVar2 = sVar2 * 0x11;
    }
    *(short *)(in_ECX + 0x122) = sVar3;
    *(short *)(in_ECX + 0x120) = sVar3;
    *(short *)(in_ECX + 0x11e) = sVar3;
    if ((*(uint *)(in_ECX + 0x30) & 0x2000000) == 0) {
      *(short *)(in_ECX + 0x172) = sVar2;
      *(short *)(in_ECX + 0x170) = sVar2;
      *(short *)(in_ECX + 0x16e) = sVar2;
    }
  }
  return;
}

