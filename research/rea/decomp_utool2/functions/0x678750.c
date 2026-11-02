// rea decompile_all
// name: FUN_00678750
// address: 0x678750
// body: available
// range: 0x678750-0x6789a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00678750(void)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float in_XMM1_Da;
  float fVar9;
  float in_XMM2_Da;
  float fVar10;
  float local_8;
  
  while( true ) {
    if ((in_XMM2_Da <= 0.0) || (iVar4 = in_ECX[2], iVar4 < 1)) goto LAB_0067886f;
    iVar5 = *in_ECX;
    fVar9 = *(float *)(iVar5 + -4 + iVar4 * 0x30) - *(float *)(iVar5 + -0xc + iVar4 * 0x30);
    fVar8 = *(float *)(iVar5 + -8 + iVar4 * 0x30) - *(float *)(iVar5 + -0x10 + iVar4 * 0x30);
    fVar7 = (float10)FUN_004c5561(fVar8,fVar9);
    fVar10 = (float)fVar7;
    if ((in_XMM2_Da < fVar10) || (in_ECX[2] < 2)) break;
    iVar6 = (in_ECX[2] + -2) * 0x30 + *in_ECX;
    *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar5 + -0x28 + iVar4 * 0x30);
    *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar5 + -0x24 + iVar4 * 0x30);
    FUN_0046cda0(iVar6);
    in_XMM2_Da = in_XMM2_Da - fVar10;
  }
  fVar10 = in_XMM2_Da / fVar10;
  if (0.9999 <= fVar10) {
    fVar10 = 0.9999;
  }
  fVar9 = fVar10 * fVar9;
  fVar10 = fVar10 * fVar8;
  *(float *)(iVar5 + -0x10 + iVar4 * 0x30) = *(float *)(iVar5 + -0x10 + iVar4 * 0x30) + fVar10;
  *(float *)(iVar5 + -0x18 + iVar4 * 0x30) = fVar10 + *(float *)(iVar5 + -0x18 + iVar4 * 0x30);
  *(float *)(iVar5 + -0xc + iVar4 * 0x30) = *(float *)(iVar5 + -0xc + iVar4 * 0x30) + fVar9;
  *(float *)(iVar5 + -0x14 + iVar4 * 0x30) = fVar9 + *(float *)(iVar5 + -0x14 + iVar4 * 0x30);
LAB_0067886f:
  local_8 = in_XMM1_Da;
  if (0.0 < in_XMM1_Da) {
    while (0 < in_ECX[2]) {
      puVar3 = (undefined4 *)*in_ECX;
      fVar10 = (float)puVar3[0xb];
      fVar8 = (float)puVar3[10];
      fVar9 = (float)puVar3[9];
      fVar1 = (float)puVar3[8];
      fVar7 = (float10)FUN_004c5561(fVar8 - fVar1,fVar10 - fVar9);
      fVar2 = (float)fVar7;
      if ((local_8 < fVar2) || (in_ECX[2] < 2)) {
        local_8 = local_8 / fVar2;
        if (0.9999 <= local_8) {
          local_8 = 0.9999;
        }
        fVar10 = local_8 * (fVar10 - fVar9);
        local_8 = local_8 * (fVar8 - fVar1);
        puVar3[10] = (float)puVar3[10] - local_8;
        puVar3[0xb] = (float)puVar3[0xb] - fVar10;
        puVar3[4] = (float)puVar3[4] - local_8;
        puVar3[5] = (float)puVar3[5] - fVar10;
        return;
      }
      iVar4 = *in_ECX;
      *(undefined4 *)(iVar4 + 0x30) = *puVar3;
      *(undefined4 *)(iVar4 + 0x34) = puVar3[1];
      if (in_ECX[2] != 0) {
        iVar4 = in_ECX[2] + -1;
        in_ECX[2] = iVar4;
        if (0 < iVar4) {
          FUN_004c1df0(*in_ECX,*in_ECX + 0x30,iVar4 * 0x30);
        }
        iVar4 = in_ECX[2];
        iVar5 = 0;
        if (0 < iVar4 * 2) {
          iVar5 = iVar4 * 2;
        }
        if (iVar5 < in_ECX[1]) {
          if (iVar4 < 1) {
            iVar4 = 1;
          }
          if (iVar4 < in_ECX[1]) {
            FUN_00472240(iVar4);
          }
        }
      }
      local_8 = local_8 - fVar2;
      if (local_8 <= 0.0) {
        return;
      }
    }
  }
  return;
}

