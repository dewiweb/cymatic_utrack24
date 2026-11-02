// rea decompile_all
// name: FUN_006154a0
// address: 0x6154a0
// body: available
// range: 0x6154a0-0x61558b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006154a0(int param_1)

{
  short *psVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_c;
  ushort *local_8;
  
  local_c = 0xffffffff;
  iVar6 = 0;
  uVar4 = (uint)*(ushort *)(in_EDX + 2);
  *(undefined2 *)(in_EDX + 6 + param_1 * 4) = 0xffff;
  iVar3 = 0x8a;
  if (uVar4 != 0) {
    iVar3 = 7;
  }
  iVar2 = (uVar4 != 0) + 3;
  if (-1 < param_1) {
    local_8 = (ushort *)(in_EDX + 6);
    param_1 = param_1 + 1;
    do {
      iVar6 = iVar6 + 1;
      uVar5 = (uint)*local_8;
      if ((iVar3 <= iVar6) || (uVar4 != uVar5)) {
        if (iVar6 < iVar2) {
          psVar1 = (short *)(in_ECX + 0xa7c + uVar4 * 4);
          *psVar1 = *psVar1 + (short)iVar6;
        }
        else if (uVar4 == 0) {
          if (iVar6 < 0xb) {
            *(short *)(in_ECX + 0xac0) = *(short *)(in_ECX + 0xac0) + 1;
          }
          else {
            *(short *)(in_ECX + 0xac4) = *(short *)(in_ECX + 0xac4) + 1;
          }
        }
        else {
          if (uVar4 != local_c) {
            psVar1 = (short *)(in_ECX + 0xa7c + uVar4 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(in_ECX + 0xabc) = *(short *)(in_ECX + 0xabc) + 1;
        }
        iVar6 = 0;
        local_c = uVar4;
        if (uVar5 == 0) {
          iVar3 = 0x8a;
          iVar2 = 3;
        }
        else if (uVar4 == uVar5) {
          iVar3 = 6;
          iVar2 = 3;
        }
        else {
          iVar3 = 7;
          iVar2 = 4;
        }
      }
      local_8 = local_8 + 2;
      param_1 = param_1 + -1;
      uVar4 = uVar5;
    } while (param_1 != 0);
  }
  return;
}

