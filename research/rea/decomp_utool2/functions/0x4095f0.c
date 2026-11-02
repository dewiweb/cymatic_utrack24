// rea decompile_all
// name: FUN_004095f0
// address: 0x4095f0
// body: available
// range: 0x4095f0-0x4096de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004095f0(uint param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int in_ECX;
  uint uVar6;
  uint in_XMM2_Da;
  
  uVar6 = (int)((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f)) % *(int *)(in_ECX + 0xc);
  puVar2 = *(uint **)(*(int *)(in_ECX + 4) + uVar6 * 4);
  puVar5 = puVar2;
  while( true ) {
    if (puVar5 == (uint *)0x0) {
      puVar5 = operator_new(0xc);
      *puVar5 = param_1;
      puVar5[1] = in_XMM2_Da;
      puVar5[2] = (uint)puVar2;
      uVar3 = *(uint *)(in_ECX + 0xc);
      if (uVar6 < uVar3) {
        *(uint **)(*(int *)(in_ECX + 4) + uVar6 * 4) = puVar5;
      }
      else if (-1 < (int)uVar6) {
        if (*(int *)(in_ECX + 8) < (int)(uVar3 + 1)) {
          FUN_00409cf0((int)(uVar3 + 1) / 2 + uVar3 + 9 & 0xfffffff8);
        }
        iVar4 = *(int *)(in_ECX + 0xc);
        *(int *)(in_ECX + 0xc) = iVar4 + 1;
        puVar1 = (undefined4 *)(*(int *)(in_ECX + 4) + iVar4 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = puVar5;
        }
      }
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
      if ((*(int *)(in_ECX + 0xc) * 3) / 2 < *(int *)(in_ECX + 0x10)) {
        FUN_00409b40(*(int *)(in_ECX + 0xc) * 2);
      }
      return;
    }
    if (*puVar5 == param_1) break;
    puVar5 = (uint *)puVar5[2];
  }
  puVar5[1] = in_XMM2_Da;
  return;
}

