// rea decompile_all
// name: FUN_0048c1dc
// address: 0x48c1dc
// body: available
// range: 0x48c1dc-0x48c3da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048c1dc(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int *in_EDX;
  int *piVar6;
  int *unaff_EBX;
  int unaff_EBP;
  int *piVar7;
  int *piVar8;
  
  iVar3 = in_EAX - (int)in_ECX >> 3;
  if (iVar3 < 0x29) {
    iVar3 = *in_EDX;
    if (iVar3 < *in_ECX) {
      iVar2 = in_EDX[1];
      *in_EDX = *in_ECX;
      in_EDX[1] = in_ECX[1];
      *in_ECX = iVar3;
      in_ECX[1] = iVar2;
    }
    iVar3 = *unaff_EBX;
    if (iVar3 < *in_EDX) {
      iVar2 = unaff_EBX[1];
      *unaff_EBX = *in_EDX;
      unaff_EBX[1] = in_EDX[1];
      *in_EDX = iVar3;
      in_EDX[1] = iVar2;
      if (iVar3 < *in_ECX) {
        *in_EDX = *in_ECX;
        in_EDX[1] = in_ECX[1];
        *in_ECX = iVar3;
        in_ECX[1] = iVar2;
      }
    }
  }
  else {
    iVar3 = iVar3 + 1;
    iVar4 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
    iVar5 = iVar4 << 4;
    *(int *)(unaff_EBP + -4) = iVar5;
    iVar3 = iVar4 * 8;
    iVar2 = in_ECX[iVar4 * 2];
    piVar1 = in_ECX + iVar4 * 2;
    *(int *)(unaff_EBP + -8) = iVar3;
    if (iVar2 < *in_ECX) {
      iVar3 = piVar1[1];
      *piVar1 = *in_ECX;
      piVar1[1] = in_ECX[1];
      *in_ECX = iVar2;
      iVar5 = *(int *)(unaff_EBP + -4);
      in_ECX[1] = iVar3;
      iVar3 = *(int *)(unaff_EBP + -8);
    }
    iVar2 = *(int *)(iVar5 + (int)in_ECX);
    if (iVar2 < *piVar1) {
      iVar3 = *(int *)(unaff_EBP + -4);
      *(undefined4 *)(unaff_EBP + -0xc) =
           *(undefined4 *)(*(int *)(unaff_EBP + -4) + 4 + (int)in_ECX);
      *(int *)(iVar3 + (int)in_ECX) = *piVar1;
      *(int *)(iVar3 + 4 + (int)in_ECX) = piVar1[1];
      iVar5 = *(int *)(unaff_EBP + -0xc);
      iVar3 = *(int *)(unaff_EBP + -8);
      *piVar1 = iVar2;
      piVar1[1] = iVar5;
      if (iVar2 < *in_ECX) {
        *piVar1 = *in_ECX;
        piVar1[1] = in_ECX[1];
        iVar5 = *(int *)(unaff_EBP + -0xc);
        *in_ECX = iVar2;
        in_ECX[1] = iVar5;
      }
    }
    iVar2 = *in_EDX;
    piVar7 = (int *)((int)in_EDX - iVar3);
    if (iVar2 < *piVar7) {
      iVar3 = in_EDX[1];
      *in_EDX = *piVar7;
      in_EDX[1] = piVar7[1];
      piVar7[1] = iVar3;
      iVar3 = *(int *)(unaff_EBP + -8);
      *piVar7 = iVar2;
    }
    iVar2 = *(int *)(iVar3 + (int)in_EDX);
    if (iVar2 < *in_EDX) {
      *(undefined4 *)(unaff_EBP + -0xc) = *(undefined4 *)(iVar3 + 4 + (int)in_EDX);
      *(int *)(iVar3 + (int)in_EDX) = *in_EDX;
      *(int *)(iVar3 + 4 + (int)in_EDX) = in_EDX[1];
      iVar5 = *(int *)(unaff_EBP + -0xc);
      *in_EDX = iVar2;
      in_EDX[1] = iVar5;
      if (iVar2 < *piVar7) {
        *in_EDX = *piVar7;
        in_EDX[1] = piVar7[1];
        iVar5 = *(int *)(unaff_EBP + -0xc);
        *piVar7 = iVar2;
        piVar7[1] = iVar5;
      }
    }
    piVar7 = *(int **)(unaff_EBP + 8);
    piVar8 = (int *)((int)piVar7 - iVar3);
    piVar6 = (int *)((int)piVar7 - *(int *)(unaff_EBP + -4));
    *(int **)(unaff_EBP + -4) = piVar6;
    iVar3 = *piVar8;
    if (iVar3 < *piVar6) {
      iVar2 = piVar8[1];
      *piVar8 = **(int **)(unaff_EBP + -4);
      piVar8[1] = *(int *)(*(int *)(unaff_EBP + -4) + 4);
      piVar6 = *(int **)(unaff_EBP + -4);
      *piVar6 = iVar3;
      piVar7 = *(int **)(unaff_EBP + 8);
      piVar6[1] = iVar2;
    }
    if (*piVar7 < *piVar8) {
      *(int *)(unaff_EBP + -0xc) = *piVar7;
      *(int *)(unaff_EBP + 8) = piVar7[1];
      *piVar7 = *piVar8;
      piVar7[1] = piVar8[1];
      iVar3 = *(int *)(unaff_EBP + -0xc);
      iVar2 = *(int *)(unaff_EBP + 8);
      *piVar8 = iVar3;
      piVar8[1] = iVar2;
      if (iVar3 < *piVar6) {
        *piVar8 = *piVar6;
        piVar8[1] = piVar6[1];
        iVar2 = *(int *)(unaff_EBP + 8);
        *piVar6 = iVar3;
        piVar6[1] = iVar2;
      }
    }
    iVar3 = *in_EDX;
    if (iVar3 < *piVar1) {
      iVar2 = in_EDX[1];
      *in_EDX = *piVar1;
      in_EDX[1] = piVar1[1];
      *piVar1 = iVar3;
      piVar1[1] = iVar2;
    }
    iVar3 = *piVar8;
    if (iVar3 < *in_EDX) {
      iVar2 = piVar8[1];
      *piVar8 = *in_EDX;
      piVar8[1] = in_EDX[1];
      *in_EDX = iVar3;
      in_EDX[1] = iVar2;
      if (iVar3 < *piVar1) {
        *in_EDX = *piVar1;
        in_EDX[1] = piVar1[1];
        *piVar1 = iVar3;
        piVar1[1] = iVar2;
        return;
      }
    }
  }
  return;
}

