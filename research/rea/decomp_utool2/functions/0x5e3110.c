// rea decompile_all
// name: FUN_005e3110
// address: 0x5e3110
// body: available
// range: 0x5e3110-0x5e3206 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e3110(int param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int *in_ECX;
  byte *in_EDX;
  
  while (param_1 != 0) {
    param_1 = param_1 + -1;
    bVar2 = *in_EDX;
    if (in_ECX[4] <= *in_ECX + 4) {
      iVar3 = FUN_004c553b(in_ECX[2],in_ECX[4] + 0x100);
      in_ECX[4] = in_ECX[4] + 0x100;
      in_ECX[2] = iVar3;
      in_ECX[3] = *in_ECX + iVar3;
    }
    uVar1 = in_ECX[1] + 8;
    *(byte *)in_ECX[3] = *(byte *)in_ECX[3] | bVar2 << ((byte)in_ECX[1] & 0x1f);
    if ((((7 < (int)uVar1) &&
         (*(byte *)(in_ECX[3] + 1) = bVar2 >> (8U - (char)in_ECX[1] & 0x1f), 0xf < (int)uVar1)) &&
        (*(byte *)(in_ECX[3] + 2) = bVar2 >> (0x10U - (char)in_ECX[1] & 0x1f), 0x17 < (int)uVar1))
       && (*(byte *)(in_ECX[3] + 3) = bVar2 >> (0x18U - (char)in_ECX[1] & 0x1f), 0x1f < (int)uVar1))
    {
      if (in_ECX[1] == 0) {
        *(undefined1 *)(in_ECX[3] + 4) = 0;
      }
      else {
        *(byte *)(in_ECX[3] + 4) = bVar2 >> (0x20U - (char)in_ECX[1] & 0x1f);
      }
    }
    in_ECX[1] = uVar1 & 7;
    iVar3 = (int)(uVar1 + ((int)uVar1 >> 0x1f & 7U)) >> 3;
    in_EDX = in_EDX + 1;
    *in_ECX = *in_ECX + iVar3;
    in_ECX[3] = in_ECX[3] + iVar3;
  }
  return;
}

