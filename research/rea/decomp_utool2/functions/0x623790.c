// rea decompile_all
// name: FUN_00623790
// address: 0x623790
// body: available
// range: 0x623790-0x623877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00623790(void)

{
  uint *puVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(in_ECX + 0x18) - *(uint *)(in_ECX + 0x28);
  iVar3 = (*(int *)(in_ECX + 0x1c) - *(int *)(in_ECX + 0x2c)) -
          (uint)(*(uint *)(in_ECX + 0x18) < *(uint *)(in_ECX + 0x28));
  iVar5 = *(int *)(in_ECX + 0x14);
  uVar2 = *(uint *)(in_ECX + 0x10);
  if (((iVar5 < *(int *)(in_ECX + 0x24)) ||
      ((iVar5 <= *(int *)(in_ECX + 0x24) && (uVar2 < *(uint *)(in_ECX + 0x20))))) ||
     ((iVar3 <= iVar5 && ((iVar3 < iVar5 || (uVar4 <= uVar2)))))) {
    if ((((*(int *)(in_ECX + 0x1c) < iVar5) ||
         ((((*(int *)(in_ECX + 0x1c) <= iVar5 && (*(uint *)(in_ECX + 0x18) <= uVar2)) ||
           (iVar5 < iVar3)) || ((iVar5 <= iVar3 && (uVar2 < uVar4)))))) ||
        (iVar5 < *(int *)(in_ECX + 0x24))) ||
       ((iVar5 <= *(int *)(in_ECX + 0x24) && (uVar2 < *(uint *)(in_ECX + 0x20))))) {
      *(int *)(in_ECX + 0x24) = iVar5;
      *(uint *)(in_ECX + 0x20) = uVar2;
      (**(code **)(**(int **)(in_ECX + 4) + 0x58))
                (*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24));
      uVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0xc))
                        (*(undefined4 *)(in_ECX + 0x30),*(undefined4 *)(in_ECX + 0xc));
      *(uint *)(in_ECX + 0x18) = uVar2 + *(uint *)(in_ECX + 0x20);
      *(uint *)(in_ECX + 0x1c) =
           ((int)uVar2 >> 0x1f) + *(int *)(in_ECX + 0x24) +
           (uint)CARRY4(uVar2,*(uint *)(in_ECX + 0x20));
    }
    else {
      iVar5 = *(int *)(in_ECX + 0x18) - uVar2;
      FUN_004c1df0(*(int *)(in_ECX + 0x30),
                   (*(int *)(in_ECX + 0x30) - *(int *)(in_ECX + 0x20)) + uVar2,iVar5);
      *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(in_ECX + 0x10);
      *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(in_ECX + 0x14);
      uVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0xc))
                        (*(int *)(in_ECX + 0x30) + iVar5,*(int *)(in_ECX + 0xc) - iVar5);
      puVar1 = (uint *)(in_ECX + 0x18);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 + uVar2;
      *(int *)(in_ECX + 0x1c) =
           *(int *)(in_ECX + 0x1c) + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar4,uVar2);
      uVar2 = uVar2 + iVar5;
    }
    if ((int)uVar2 < *(int *)(in_ECX + 0xc)) {
      do {
        *(undefined1 *)(uVar2 + *(int *)(in_ECX + 0x30)) = 0;
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < *(int *)(in_ECX + 0xc));
    }
  }
  return;
}

