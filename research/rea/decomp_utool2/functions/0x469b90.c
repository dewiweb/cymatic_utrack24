// rea decompile_all
// name: FUN_00469b90
// address: 0x469b90
// body: available
// range: 0x469b90-0x469c37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00469b90(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = 0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  if (0 < in_ECX[2]) {
    uVar3 = 1;
    fVar6 = 0.0;
    do {
      iVar2 = *(int *)(*in_ECX + iVar4 * 4);
      *(float *)(iVar2 + 0xc) = fVar7;
      *(float *)(iVar2 + 0x10) = fVar8;
      fVar5 = *(float *)(iVar2 + 0x18) + in_XMM2_Da;
      fVar7 = fVar7 + *(float *)(iVar2 + 0x14);
      *(int *)(iVar2 + 0x1c) = in_ECX[3];
      if (fVar5 <= fVar6) {
        fVar5 = fVar6;
      }
      if (((uint)in_ECX[2] <= uVar3) || (iVar1 = *(int *)(*in_ECX + 4 + iVar4 * 4), iVar1 == 0))
      break;
      if ((*(char *)(iVar2 + 0x25) != '\0') ||
         ((*(char *)(iVar1 + 0x24) == '\0' && (in_XMM1_Da < *(float *)(iVar1 + 0x14) + fVar7)))) {
        FUN_00469c40(uVar3);
        in_ECX[3] = in_ECX[3] + 1;
        fVar8 = fVar8 + fVar5;
        fVar7 = 0.0;
        fVar5 = 0.0;
      }
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 + 1;
      fVar6 = fVar5;
    } while (iVar4 < in_ECX[2]);
  }
  iVar2 = iVar4 + 1;
  if (in_ECX[2] < iVar4 + 1) {
    iVar2 = in_ECX[2];
  }
  FUN_00469c40(iVar2);
  in_ECX[3] = in_ECX[3] + 1;
  return;
}

