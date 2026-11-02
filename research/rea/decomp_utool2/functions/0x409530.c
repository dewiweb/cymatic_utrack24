// rea decompile_all
// name: FUN_00409530
// address: 0x409530
// body: available
// range: 0x409530-0x4095c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00409530(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  
  uVar6 = *(int *)(in_ECX + 0xc) - 1;
  if (-1 < (int)uVar6) {
    piVar1 = (int *)(in_ECX + 4);
    do {
      iVar5 = *(int *)(*piVar1 + uVar6 * 4);
      while (iVar5 != 0) {
        iVar3 = *(int *)(iVar5 + 8);
        FUN_004bfe14(iVar5,0xc);
        iVar5 = iVar3;
      }
      uVar4 = *(uint *)(in_ECX + 0xc);
      if (uVar6 < uVar4) {
        *(undefined4 *)(*piVar1 + uVar6 * 4) = 0;
      }
      else if (-1 < (int)uVar6) {
        iVar5 = uVar4 + 1;
        if (*(int *)(in_ECX + 8) < iVar5) {
          if (iVar5 < 0) {
            iVar5 = uVar4 + 2;
          }
          FUN_00409cf0((iVar5 >> 1) + uVar4 + 9 & 0xfffffff8);
        }
        iVar5 = *(int *)(in_ECX + 0xc);
        *(int *)(in_ECX + 0xc) = iVar5 + 1;
        puVar2 = (undefined4 *)(*piVar1 + iVar5 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
        }
      }
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}

