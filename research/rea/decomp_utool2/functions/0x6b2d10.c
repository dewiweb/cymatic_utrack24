// rea decompile_all
// name: FUN_006b2d10
// address: 0x6b2d10
// body: available
// range: 0x6b2d10-0x6b2e0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b2d10(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(in_ECX + 4) + 8);
  }
  iVar6 = *(int *)(iVar6 + 0xc);
  do {
    if (iVar6 == 0) {
      return;
    }
    if (in_ECX != 0) {
      piVar3 = *(int **)(iVar6 + 0x4c);
      iVar2 = *(int *)(iVar6 + 0x54);
      piVar1 = piVar3 + iVar2;
      for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
        if (in_ECX == *piVar3) goto LAB_006b2d85;
      }
      iVar4 = iVar2 + 1;
      if (*(int *)(iVar6 + 0x50) < iVar4) {
        if (iVar4 < 0) {
          iVar4 = iVar2 + 2;
        }
        FUN_00409cf0((iVar4 >> 1) + iVar2 + 9 & 0xfffffff8);
      }
      iVar2 = *(int *)(iVar6 + 0x54);
      *(int *)(iVar6 + 0x54) = iVar2 + 1;
      piVar1 = (int *)(*(int *)(iVar6 + 0x4c) + iVar2 * 4);
      if (piVar1 != (int *)0x0) {
        *piVar1 = in_ECX;
      }
    }
LAB_006b2d85:
    iVar2 = *(int *)(in_ECX + 0x14);
    iVar4 = iVar2 + 1;
    if ((int)*(uint *)(in_ECX + 0x10) < iVar4) {
      if (iVar4 < 0) {
        iVar4 = iVar2 + 2;
      }
      uVar7 = iVar2 + 9 + (iVar4 >> 1) & 0xfffffff8;
      if (*(uint *)(in_ECX + 0x10) != uVar7) {
        if ((int)uVar7 < 1) {
          FID_conflict__free(*(void **)(in_ECX + 0xc));
          *(undefined4 *)(in_ECX + 0xc) = 0;
        }
        else if (*(int *)(in_ECX + 0xc) == 0) {
          uVar5 = FUN_004c554b();
          *(undefined4 *)(in_ECX + 0xc) = uVar5;
        }
        else {
          uVar5 = FUN_004c553b(*(int *)(in_ECX + 0xc),uVar7 * 4);
          *(undefined4 *)(in_ECX + 0xc) = uVar5;
        }
        *(uint *)(in_ECX + 0x10) = uVar7;
      }
    }
    iVar2 = *(int *)(in_ECX + 0x14);
    *(int *)(in_ECX + 0x14) = iVar2 + 1;
    piVar1 = (int *)(*(int *)(in_ECX + 0xc) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      *piVar1 = iVar6;
    }
    iVar6 = *(int *)(iVar6 + 0xc);
  } while( true );
}

