// rea decompile_all
// name: FUN_006157b0
// address: 0x6157b0
// body: available
// range: 0x6157b0-0x61584e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006157b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  int in_EDX;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  ushort auStack_28 [16];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar7 = 0;
  iVar6 = 1;
  do {
    uVar7 = (*(short *)(param_1 + iVar6 * 2 + -2) + uVar7) * 2;
    auStack_28[iVar6] = uVar7;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  iVar6 = 0;
  if (-1 < in_EDX) {
    do {
      uVar5 = (uint)*(ushort *)(in_ECX + 2 + iVar6 * 4);
      if (uVar5 != 0) {
        uVar2 = (uint)auStack_28[uVar5];
        auStack_28[uVar5] = auStack_28[uVar5] + 1;
        uVar1 = 0;
        do {
          uVar3 = uVar1;
          uVar5 = uVar5 - 1;
          uVar4 = uVar2 & 1;
          uVar2 = uVar2 >> 1;
          uVar1 = (uVar3 | uVar4) * 2;
        } while (0 < (int)uVar5);
        *(ushort *)(in_ECX + iVar6 * 4) = (ushort)uVar3 | (ushort)uVar4;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= in_EDX);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

