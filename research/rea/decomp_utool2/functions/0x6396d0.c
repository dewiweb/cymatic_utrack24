// rea decompile_all
// name: FUN_006396d0
// address: 0x6396d0
// body: available
// range: 0x6396d0-0x639833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006396d0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  int *local_c;
  
  if (*(int *)(in_ECX + 0x44) < *(int *)(in_ECX + 0x24)) {
    piVar1 = (int *)(in_ECX + 0x28);
    FUN_00462860();
    if (*(int *)(in_ECX + 0x2c) != 0) {
      FID_conflict__free((void *)*piVar1);
      *piVar1 = 0;
      *(undefined4 *)(in_ECX + 0x2c) = 0;
    }
    *(undefined4 *)(in_ECX + 0x30) = 0;
    if (*(int *)(in_ECX + 0x44) < *(int *)(in_ECX + 0x24)) {
      do {
        uVar5 = *(uint *)(in_ECX + 0x44);
        local_c = (int *)0x0;
        if (uVar5 < *(uint *)(in_ECX + 0x24)) {
          local_c = *(int **)(*(int *)(in_ECX + 0x1c) + uVar5 * 4);
          iVar4 = *(int *)(in_ECX + 0x1c) + uVar5 * 4;
          iVar2 = *(uint *)(in_ECX + 0x24) - 1;
          *(int *)(in_ECX + 0x24) = iVar2;
          iVar2 = iVar2 - uVar5;
          if (0 < iVar2) {
            FUN_004c1df0(iVar4,iVar4 + 4,iVar2 * 4);
          }
          iVar2 = *(int *)(in_ECX + 0x24);
          if ((iVar2 * 2 < *(int *)(in_ECX + 0x20)) && (iVar2 < *(int *)(in_ECX + 0x20))) {
            FUN_00409cf0(iVar2);
          }
        }
        iVar2 = *(int *)(in_ECX + 0x30);
        iVar4 = iVar2 + 1;
        if ((int)*(uint *)(in_ECX + 0x2c) < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar2 + 2;
          }
          uVar5 = iVar2 + 9 + (iVar4 >> 1) & 0xfffffff8;
          if (*(uint *)(in_ECX + 0x2c) != uVar5) {
            if ((int)uVar5 < 1) {
              FID_conflict__free((void *)*piVar1);
              *piVar1 = 0;
            }
            else if (*piVar1 == 0) {
              iVar2 = FUN_004c554b();
              *piVar1 = iVar2;
            }
            else {
              iVar2 = FUN_004c553b(*piVar1,uVar5 * 4);
              *piVar1 = iVar2;
            }
            *(uint *)(in_ECX + 0x2c) = uVar5;
          }
        }
        iVar2 = *(int *)(in_ECX + 0x30);
        *(int *)(in_ECX + 0x30) = iVar2 + 1;
        *(int **)(*piVar1 + iVar2 * 4) = local_c;
        iVar4 = 0;
        iVar2 = local_c[2];
        while (iVar2 = iVar2 + -1, -1 < iVar2) {
          iVar3 = (**(code **)(**(int **)(*local_c + iVar2 * 4) + 0xc))();
          iVar4 = iVar4 + iVar3;
        }
        *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) - iVar4;
      } while (*(int *)(in_ECX + 0x44) < *(int *)(in_ECX + 0x24));
    }
  }
  return;
}

