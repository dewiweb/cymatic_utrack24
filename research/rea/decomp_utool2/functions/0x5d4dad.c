// rea decompile_all
// name: FUN_005d4dad
// address: 0x5d4dad
// body: available
// range: 0x5d4dad-0x5d5014 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005d4dad(void)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  int iVar7;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  int iVar8;
  int unaff_EBP;
  float fVar9;
  double in_XMM0_Qa;
  double dVar10;
  
  iVar2 = in_ECX[7];
  fVar9 = (float)(in_XMM0_Qa + 1e-07);
  if (1.0 <= fVar9) {
    fVar9 = 0.9999;
  }
  *(float *)(iVar2 + 0xd58) = fVar9;
  iVar7 = FUN_005d5b20();
  *(int *)(iVar2 + 0xd44) = iVar7;
  if (iVar7 == 0) {
    return 0xffffff7e;
  }
  iVar7 = in_ECX[7];
  uVar3 = *(undefined4 *)(iVar7 + 0xd44);
  *in_ECX = 0;
  in_ECX[1] = in_EDX;
  *(undefined4 *)(unaff_EBP + -4) = uVar3;
  in_ECX[2] = *(undefined4 *)(unaff_EBP + 8);
  dVar1 = *(double *)(iVar7 + 0xd48);
  iVar4 = *(int *)(unaff_EBP + -4);
  iVar8 = (int)dVar1;
  *(undefined4 *)(iVar7 + 0xd80) = 1;
  *(undefined4 *)(iVar7 + 0xd84) = 1;
  *(double *)(iVar7 + 0xd90) = dVar1;
  dVar10 = dVar1 - (double)iVar8;
  if (*(int *)(iVar7 + 0xda0) == 0) {
    *(double *)(iVar7 + 0xd98) =
         *(double *)(*(int *)(iVar4 + 0x78) + 8 + iVar8 * 8) * dVar10 +
         (1.0 - dVar10) * *(double *)(*(int *)(iVar4 + 0x78) + iVar8 * 8);
  }
  *(double *)(iVar7 + 0xda8) =
       (double)*(int *)(*(int *)(iVar4 + 0x70) + 4 + iVar8 * 4) * dVar10 +
       (double)*(int *)(*(int *)(iVar4 + 0x70) + iVar8 * 4) * (1.0 - dVar10);
  iVar5 = *(int *)(*(int *)(iVar4 + 0x74) + 4 + iVar8 * 4);
  iVar4 = *(int *)(*(int *)(iVar4 + 0x74) + iVar8 * 4);
  auVar6._8_4_ = SUB84(dVar1,0);
  auVar6._0_8_ = dVar1;
  auVar6._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])(iVar7 + 0xdc0) = auVar6;
  *(undefined8 *)(iVar7 + 0xdb8) = 0xc018000000000000;
  *(double *)(iVar7 + 0xdb0) = (double)iVar5 * dVar10 + (double)iVar4 * (1.0 - dVar10);
  *(undefined8 *)(iVar7 + 0xdd0) = *(undefined8 *)(iVar7 + 0xd48);
  *(undefined8 *)(iVar7 + 0xdd8) = *(undefined8 *)(iVar7 + 0xd48);
  *(undefined8 *)(iVar7 + 0xde0) = *(undefined8 *)(iVar7 + 0xd48);
  *(undefined8 *)(iVar7 + 0xde8) = *(undefined8 *)(iVar7 + 0xd48);
  *(undefined8 *)(iVar7 + 0xdf0) = *(undefined8 *)(iVar7 + 0xd48);
  *(undefined8 *)(iVar7 + 0xdf8) = *(undefined8 *)(iVar7 + 0xd48);
  *(undefined8 *)(iVar7 + 0xe00) = *(undefined8 *)(iVar7 + 0xd48);
  *(undefined8 *)(iVar7 + 0xe08) = *(undefined8 *)(iVar7 + 0xd48);
  *(undefined8 *)(iVar7 + 0xe10) = *(undefined8 *)(iVar7 + 0xd48);
  *(undefined8 *)(iVar7 + 0xe18) = *(undefined8 *)(iVar7 + 0xd48);
  *(undefined8 *)(iVar7 + 0xe20) = *(undefined8 *)(iVar7 + 0xd48);
  *(undefined8 *)(iVar7 + 0xe28) = *(undefined8 *)(iVar7 + 0xd48);
  *(undefined8 *)(iVar7 + 0xe30) = *(undefined8 *)(iVar7 + 0xd48);
  *(undefined8 *)(iVar7 + 0xe38) = *(undefined8 *)(iVar7 + 0xd48);
  *(undefined8 *)(iVar7 + 0xe40) = *(undefined8 *)(iVar7 + 0xd48);
  *(undefined4 *)(iVar2 + 0xd5c) = 0;
  *(undefined4 *)(iVar2 + 0xd88) = 1;
  return 0;
}

