// rea decompile_all
// name: FUN_00409440
// address: 0x409440
// body: available
// range: 0x409440-0x40952d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00409440(uint param_1,undefined1 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int in_ECX;
  uint uVar7;
  
  uVar7 = (int)((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f)) % *(int *)(in_ECX + 0xc);
  piVar1 = (int *)(in_ECX + 4);
  puVar3 = *(uint **)(uVar7 * 4 + *piVar1);
  puVar6 = puVar3;
  while( true ) {
    if (puVar6 == (uint *)0x0) {
      puVar6 = operator_new(0xc);
      puVar6[2] = (uint)puVar3;
      *puVar6 = param_1;
      *(undefined1 *)(puVar6 + 1) = param_2;
      uVar4 = *(uint *)(in_ECX + 0xc);
      if (uVar7 < uVar4) {
        *(uint **)(uVar7 * 4 + *piVar1) = puVar6;
      }
      else if (-1 < (int)uVar7) {
        if (*(int *)(in_ECX + 8) < (int)(uVar4 + 1)) {
          FUN_00409cf0((int)(uVar4 + 1) / 2 + uVar4 + 9 & 0xfffffff8);
        }
        iVar5 = *(int *)(in_ECX + 0xc);
        *(int *)(in_ECX + 0xc) = iVar5 + 1;
        puVar2 = (undefined4 *)(*piVar1 + iVar5 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = puVar6;
        }
      }
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
      if ((*(int *)(in_ECX + 0xc) * 3) / 2 < *(int *)(in_ECX + 0x10)) {
        FUN_00409a60(*(int *)(in_ECX + 0xc) * 2);
      }
      return;
    }
    if (*puVar6 == param_1) break;
    puVar6 = (uint *)puVar6[2];
  }
  *(undefined1 *)(puVar6 + 1) = param_2;
  return;
}

