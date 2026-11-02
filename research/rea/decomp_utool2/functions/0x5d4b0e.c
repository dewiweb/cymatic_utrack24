// rea decompile_all
// name: FUN_005d4b0e
// address: 0x5d4b0e
// body: available
// range: 0x5d4b0e-0x5d4d96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005d4b0e(void)

{
  double dVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  int iVar7;
  int unaff_EBP;
  float fVar8;
  double in_XMM0_Qa;
  double dVar9;
  
  iVar6 = in_ECX[7];
  fVar8 = (float)(in_XMM0_Qa + 1e-07);
  if (1.0 <= fVar8) {
    fVar8 = 0.9999;
  }
  *(float *)(iVar6 + 0xd58) = fVar8;
  iVar5 = FUN_005d5b20();
  *(int *)(iVar6 + 0xd44) = iVar5;
  if (iVar5 != 0) {
    iVar5 = in_ECX[7];
    iVar2 = *(int *)(iVar5 + 0xd44);
    in_ECX[1] = in_EDX;
    *in_ECX = 0;
    in_ECX[2] = *(undefined4 *)(unaff_EBP + 8);
    dVar1 = *(double *)(iVar5 + 0xd48);
    iVar7 = (int)dVar1;
    *(undefined4 *)(iVar5 + 0xd80) = 1;
    *(undefined4 *)(iVar5 + 0xd84) = 1;
    *(double *)(iVar5 + 0xd90) = dVar1;
    dVar9 = dVar1 - (double)iVar7;
    if (*(int *)(iVar5 + 0xda0) == 0) {
      *(double *)(iVar5 + 0xd98) =
           *(double *)(*(int *)(iVar2 + 0x78) + 8 + iVar7 * 8) * dVar9 +
           (1.0 - dVar9) * *(double *)(*(int *)(iVar2 + 0x78) + iVar7 * 8);
    }
    *(double *)(iVar5 + 0xda8) =
         (double)*(int *)(*(int *)(iVar2 + 0x70) + 4 + iVar7 * 4) * dVar9 +
         (double)*(int *)(*(int *)(iVar2 + 0x70) + iVar7 * 4) * (1.0 - dVar9);
    iVar3 = *(int *)(*(int *)(iVar2 + 0x74) + 4 + iVar7 * 4);
    iVar2 = *(int *)(*(int *)(iVar2 + 0x74) + iVar7 * 4);
    auVar4._8_4_ = SUB84(dVar1,0);
    auVar4._0_8_ = dVar1;
    auVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])(iVar5 + 0xdc0) = auVar4;
    *(undefined8 *)(iVar5 + 0xdb8) = 0xc018000000000000;
    *(double *)(iVar5 + 0xdb0) = (double)iVar3 * dVar9 + (double)iVar2 * (1.0 - dVar9);
    *(undefined8 *)(iVar5 + 0xdd0) = *(undefined8 *)(iVar5 + 0xd48);
    *(undefined8 *)(iVar5 + 0xdd8) = *(undefined8 *)(iVar5 + 0xd48);
    *(undefined8 *)(iVar5 + 0xde0) = *(undefined8 *)(iVar5 + 0xd48);
    *(undefined8 *)(iVar5 + 0xde8) = *(undefined8 *)(iVar5 + 0xd48);
    *(undefined8 *)(iVar5 + 0xdf0) = *(undefined8 *)(iVar5 + 0xd48);
    *(undefined8 *)(iVar5 + 0xdf8) = *(undefined8 *)(iVar5 + 0xd48);
    *(undefined8 *)(iVar5 + 0xe00) = *(undefined8 *)(iVar5 + 0xd48);
    *(undefined8 *)(iVar5 + 0xe08) = *(undefined8 *)(iVar5 + 0xd48);
    *(undefined8 *)(iVar5 + 0xe10) = *(undefined8 *)(iVar5 + 0xd48);
    *(undefined8 *)(iVar5 + 0xe18) = *(undefined8 *)(iVar5 + 0xd48);
    *(undefined8 *)(iVar5 + 0xe20) = *(undefined8 *)(iVar5 + 0xd48);
    *(undefined8 *)(iVar5 + 0xe28) = *(undefined8 *)(iVar5 + 0xd48);
    *(undefined8 *)(iVar5 + 0xe30) = *(undefined8 *)(iVar5 + 0xd48);
    *(undefined8 *)(iVar5 + 0xe38) = *(undefined8 *)(iVar5 + 0xd48);
    *(undefined8 *)(iVar5 + 0xe40) = *(undefined8 *)(iVar5 + 0xd48);
    *(undefined4 *)(iVar6 + 0xd5c) = 0;
    *(undefined4 *)(iVar6 + 0xd88) = 1;
    iVar6 = FUN_005d5220();
    if (iVar6 != 0) {
      FUN_005e2a80();
    }
    return iVar6;
  }
  FUN_005e2a80();
  return -0x82;
}

