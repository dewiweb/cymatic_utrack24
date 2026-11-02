// rea decompile_all
// name: FUN_0045cd10
// address: 0x45cd10
// body: available
// range: 0x45cd10-0x45ce0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045cd10(ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  uint uVar4;
  uint in_EDX;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (((param_1 == (ushort *)0x0) || (*param_1 == 0)) || (in_EDX == 0)) {
    *in_ECX = &DAT_00bfe12c;
    return;
  }
  uVar7 = 0;
  iVar6 = 1;
  puVar1 = param_1;
  if (in_EDX != 0) {
    do {
      uVar4 = (uint)*puVar1;
      if (*puVar1 == 0) break;
      puVar2 = puVar1 + 1;
      if ((uVar4 - 0xd800 < 0x800) && (0xdbff < *puVar2)) {
        uVar4 = (*puVar2 - 0xdc00 | (uVar4 - 0xd800) * 0x400) + 0x10000;
        puVar2 = puVar1 + 2;
      }
      iVar5 = 1;
      if (((0x7f < uVar4) && (iVar5 = 2, 0x7ff < uVar4)) && (iVar5 = 3, 0xffff < uVar4)) {
        iVar5 = 4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + iVar5;
      puVar1 = puVar2;
    } while (uVar7 < in_EDX);
  }
  uVar7 = iVar6 + 3U & 0xfffffffc;
  puVar3 = (undefined4 *)FUN_004bfe22(uVar7 + 0xb);
  puVar3[1] = uVar7;
  *puVar3 = 0;
  FUN_0045e5b0(param_1);
  *in_ECX = puVar3 + 2;
  return;
}

