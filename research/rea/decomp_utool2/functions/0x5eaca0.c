// rea decompile_all
// name: FUN_005eaca0
// address: 0x5eaca0
// body: available
// range: 0x5eaca0-0x5ead4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005eaca0(void)

{
  int iVar1;
  byte *pbVar2;
  char cVar3;
  int *in_ECX;
  int in_EDX;
  int iVar4;
  uint uVar5;
  
  iVar1 = in_ECX[1];
  iVar4 = in_EDX + iVar1;
  if ((in_ECX[4] <= *in_ECX + 4) && (in_ECX[4] * 8 < iVar4 + *in_ECX * 8)) {
    return 0xffffffff;
  }
  pbVar2 = (byte *)in_ECX[3];
  uVar5 = (uint)(*pbVar2 >> (*(byte *)(in_ECX + 1) & 0x1f));
  if (8 < iVar4) {
    cVar3 = (char)iVar1;
    uVar5 = uVar5 | (uint)pbVar2[1] << (8U - cVar3 & 0x1f);
    if ((((0x10 < iVar4) &&
         (uVar5 = uVar5 | (uint)pbVar2[2] << (0x10U - cVar3 & 0x1f), 0x18 < iVar4)) &&
        (uVar5 = uVar5 | (uint)pbVar2[3] << (0x18U - cVar3 & 0x1f), 0x20 < iVar4)) && (iVar1 != 0))
    {
      uVar5 = uVar5 | (uint)pbVar2[4] << (0x20U - cVar3 & 0x1f);
    }
  }
  return uVar5 & *(uint *)(&DAT_00b8a898 + in_EDX * 4);
}

