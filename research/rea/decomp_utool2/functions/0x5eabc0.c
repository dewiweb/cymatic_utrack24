// rea decompile_all
// name: FUN_005eabc0
// address: 0x5eabc0
// body: available
// range: 0x5eabc0-0x5eac7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005eabc0(void)

{
  byte bVar1;
  int iVar2;
  int *in_ECX;
  int in_EDX;
  uint uVar3;
  uint uVar4;
  
  iVar2 = in_ECX[1];
  uVar4 = in_EDX + iVar2;
  if ((*in_ECX + 4 < in_ECX[4]) || (uVar3 = 0xffffffff, (int)(uVar4 + *in_ECX * 8) <= in_ECX[4] * 8)
     ) {
    bVar1 = (byte)iVar2;
    uVar3 = (uint)(*(byte *)in_ECX[3] >> (bVar1 & 0x1f));
    if (((8 < (int)uVar4) &&
        (((uVar3 = uVar3 | (uint)((byte *)in_ECX[3])[1] << (8 - bVar1 & 0x1f), 0x10 < (int)uVar4 &&
          (uVar3 = uVar3 | (uint)*(byte *)(in_ECX[3] + 2) << (0x10 - bVar1 & 0x1f),
          0x18 < (int)uVar4)) &&
         (uVar3 = uVar3 | (uint)*(byte *)(in_ECX[3] + 3) << (0x18 - bVar1 & 0x1f), 0x20 < (int)uVar4
         )))) && (iVar2 != 0)) {
      uVar3 = uVar3 | (uint)*(byte *)(in_ECX[3] + 4) << (0x20 - bVar1 & 0x1f);
    }
    uVar3 = uVar3 & *(uint *)(&DAT_00b8a898 + in_EDX * 4);
  }
  iVar2 = (int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3;
  in_ECX[3] = in_ECX[3] + iVar2;
  *in_ECX = *in_ECX + iVar2;
  in_ECX[1] = uVar4 & 7;
  return uVar3;
}

