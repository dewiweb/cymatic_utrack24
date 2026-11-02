// rea decompile_all
// name: FUN_006f5900
// address: 0x6f5900
// body: available
// range: 0x6f5900-0x6f5a0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f5900(void)

{
  uint uVar1;
  uint uVar2;
  uint *in_EAX;
  int iVar3;
  
  uVar1 = in_EAX[1];
  uVar2 = *in_EAX;
  if (((uVar1 & 0x7fffffff) < 0x7ff00001) && (((uVar1 & 0x7fffffff) < 0x7ff00000 || (uVar2 == 0))))
  {
    iVar3 = 0;
    if ((uVar1 < 0xc0874911) && ((uVar1 < 0xc0874910 || (uVar2 < 0xd52d3052)))) {
      if ((uVar1 < 0xc086232c) && ((uVar1 < 0xc086232b || (uVar2 < 0xdd7abcd1)))) {
        if ((0x40862e42 < (int)uVar1) || ((0x40862e41 < (int)uVar1 && (0xfefa39ef < uVar2)))) {
          iVar3 = 1;
        }
      }
      else {
        iVar3 = -1;
      }
    }
    else {
      iVar3 = -1;
    }
  }
  else {
    iVar3 = 0;
  }
  if (-1 < iVar3) {
    if (iVar3 < 1) {
      return;
    }
    return;
  }
  return;
}

