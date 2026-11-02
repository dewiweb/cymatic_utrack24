// rea decompile_all
// name: FUN_0068fc40
// address: 0x68fc40
// body: available
// range: 0x68fc40-0x68fcb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0068fc40(int param_1)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    return in_ECX;
  }
  do {
    iVar3 = in_ECX;
    if (param_1 < 1) {
      return 0;
    }
    uVar1 = *(uint *)(iVar3 + 0x34) & 3;
    if (uVar1 == 0) {
      if (*(int *)(iVar3 + 4) == 0) {
        return 0;
      }
      cVar4 = *(char *)(*(int *)(iVar3 + 4) + 0xac);
    }
    else {
      cVar4 = uVar1 == 2;
    }
    if (cVar4 == '\0') {
      return 0;
    }
    param_1 = param_1 + -1;
    iVar2 = 0;
    while( true ) {
      if (*(int *)(iVar3 + 0x14) <= iVar2) {
        return 0;
      }
      in_ECX = *(int *)(*(int *)(iVar3 + 0xc) + iVar2 * 4);
      if (param_1 == 0) {
        return in_ECX;
      }
      uVar5 = FUN_0068fcc0();
      param_1 = (int)((ulonglong)uVar5 >> 0x20);
      if (param_1 < (int)uVar5) break;
      param_1 = param_1 - (int)uVar5;
      iVar2 = iVar2 + 1;
    }
  } while( true );
}

