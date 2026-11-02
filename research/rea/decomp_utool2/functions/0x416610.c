// rea decompile_all
// name: FUN_00416610
// address: 0x416610
// body: available
// range: 0x416610-0x4166d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00416610(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  
  uVar8 = *(int *)(in_ECX + 0xc) - 1;
  if (-1 < (int)uVar8) {
    piVar1 = (int *)(in_ECX + 4);
    do {
      iVar7 = *(int *)(*piVar1 + uVar8 * 4);
      while (iVar7 != 0) {
        iVar4 = *(int *)(iVar7 + 0xc);
        puVar5 = *(undefined4 **)(iVar7 + 8);
        if (puVar5 != (undefined4 *)0x0) {
          LOCK();
          piVar2 = puVar5 + 1;
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)*puVar5)(1);
          }
        }
        FUN_004bfe14(iVar7,0x10);
        iVar7 = iVar4;
      }
      uVar6 = *(uint *)(in_ECX + 0xc);
      if (uVar8 < uVar6) {
        *(undefined4 *)(*piVar1 + uVar8 * 4) = 0;
      }
      else if (-1 < (int)uVar8) {
        iVar7 = uVar6 + 1;
        if (*(int *)(in_ECX + 8) < iVar7) {
          if (iVar7 < 0) {
            iVar7 = uVar6 + 2;
          }
          FUN_00409cf0((iVar7 >> 1) + uVar6 + 9 & 0xfffffff8);
        }
        iVar7 = *(int *)(in_ECX + 0xc);
        *(int *)(in_ECX + 0xc) = iVar7 + 1;
        puVar5 = (undefined4 *)(*piVar1 + iVar7 * 4);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0;
        }
      }
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}

