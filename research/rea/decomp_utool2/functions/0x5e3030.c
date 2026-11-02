// rea decompile_all
// name: FUN_005e3030
// address: 0x5e3030
// body: available
// range: 0x5e3030-0x5e310f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e3030(int param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int *in_ECX;
  byte *in_EDX;
  byte local_8;
  
  while (param_1 != 0) {
    param_1 = param_1 + -1;
    uVar1 = in_ECX[1] + 8;
    if ((*in_ECX + 4 < in_ECX[4]) || (local_8 = 0xff, (int)(uVar1 + *in_ECX * 8) <= in_ECX[4] * 8))
    {
      bVar2 = (byte)in_ECX[1];
      local_8 = *(byte *)in_ECX[3] >> (bVar2 & 0x1f);
      if (8 < (int)uVar1) {
        cVar3 = -bVar2;
        local_8 = local_8 | ((byte *)in_ECX[3])[1] << (cVar3 + 8U & 0x1f);
        if ((((0x10 < (int)uVar1) &&
             (local_8 = local_8 | *(char *)(in_ECX[3] + 2) << (cVar3 + 0x10U & 0x1f),
             0x18 < (int)uVar1)) &&
            (local_8 = local_8 | *(char *)(in_ECX[3] + 3) << (cVar3 + 0x18U & 0x1f),
            0x20 < (int)uVar1)) && (in_ECX[1] != 0)) {
          local_8 = local_8 | *(char *)(in_ECX[3] + 4) << (cVar3 + 0x20U & 0x1f);
        }
      }
    }
    in_ECX[1] = uVar1 & 7;
    iVar4 = (int)(uVar1 + ((int)uVar1 >> 0x1f & 7U)) >> 3;
    in_ECX[3] = in_ECX[3] + iVar4;
    *in_ECX = *in_ECX + iVar4;
    *in_EDX = local_8;
    in_EDX = in_EDX + 1;
  }
  return;
}

