// rea decompile_all
// name: FUN_00622a60
// address: 0x622a60
// body: available
// range: 0x622a60-0x622b0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00622a60(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  
  piVar1 = *(int **)(in_ECX + 8);
  uVar5 = *(int *)(in_ECX + 0x18) + param_1;
  if (piVar1 == (int *)0x0) {
    if (*(uint *)(in_ECX + 0x20) < uVar5) {
      return 0;
    }
    iVar4 = *(int *)(in_ECX + 0x14);
  }
  else {
    if ((uint)piVar1[1] <= uVar5) {
      uVar3 = uVar5 >> 1;
      if (0x100000 < uVar3) {
        uVar3 = 0x100000;
      }
      uVar5 = uVar5 + 0x20 + uVar3 & 0xffffffe0;
      if ((uint)piVar1[1] < uVar5) {
        if (uVar5 == 0) {
          FID_conflict__free((void *)*piVar1);
          *piVar1 = 0;
          piVar1[1] = 0;
          iVar4 = **(int **)(in_ECX + 8);
          goto LAB_00622af4;
        }
        if (*piVar1 == 0) {
          FID_conflict__free((void *)0x0);
          iVar4 = FUN_004c554b(uVar5);
        }
        else {
          iVar4 = FUN_004c553b(*piVar1,uVar5);
        }
        *piVar1 = iVar4;
        piVar1[1] = uVar5;
      }
    }
    iVar4 = **(int **)(in_ECX + 8);
  }
LAB_00622af4:
  uVar3 = param_1 + *(int *)(in_ECX + 0x18);
  iVar2 = *(int *)(in_ECX + 0x18);
  *(uint *)(in_ECX + 0x18) = uVar3;
  uVar5 = *(uint *)(in_ECX + 0x1c);
  if (*(uint *)(in_ECX + 0x1c) < uVar3) {
    uVar5 = uVar3;
  }
  *(uint *)(in_ECX + 0x1c) = uVar5;
  return iVar4 + iVar2;
}

