// rea decompile_all
// name: FUN_005d5020
// address: 0x5d5020
// body: available
// range: 0x5d5020-0x5d5210 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d5020(undefined4 param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined4 *in_ECX;
  int iVar6;
  undefined4 in_EDX;
  double dVar7;
  
  iVar2 = in_ECX[7];
  iVar3 = *(int *)(iVar2 + 0xd44);
  *in_ECX = 0;
  in_ECX[1] = in_EDX;
  in_ECX[2] = param_1;
  dVar1 = *(double *)(iVar2 + 0xd48);
  iVar6 = (int)dVar1;
  *(undefined4 *)(iVar2 + 0xd80) = 1;
  *(undefined4 *)(iVar2 + 0xd84) = 1;
  *(double *)(iVar2 + 0xd90) = dVar1;
  dVar7 = dVar1 - (double)iVar6;
  if (*(int *)(iVar2 + 0xda0) == 0) {
    *(double *)(iVar2 + 0xd98) =
         *(double *)(*(int *)(iVar3 + 0x78) + 8 + iVar6 * 8) * dVar7 +
         (1.0 - dVar7) * *(double *)(*(int *)(iVar3 + 0x78) + iVar6 * 8);
  }
  *(double *)(iVar2 + 0xda8) =
       (double)*(int *)(*(int *)(iVar3 + 0x70) + 4 + iVar6 * 4) * dVar7 +
       (double)*(int *)(*(int *)(iVar3 + 0x70) + iVar6 * 4) * (1.0 - dVar7);
  iVar4 = *(int *)(*(int *)(iVar3 + 0x74) + 4 + iVar6 * 4);
  iVar3 = *(int *)(*(int *)(iVar3 + 0x74) + iVar6 * 4);
  auVar5._8_4_ = SUB84(dVar1,0);
  auVar5._0_8_ = dVar1;
  auVar5._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])(iVar2 + 0xdc0) = auVar5;
  *(undefined8 *)(iVar2 + 0xdb8) = 0xc018000000000000;
  *(double *)(iVar2 + 0xdb0) = (double)iVar4 * dVar7 + (double)iVar3 * (1.0 - dVar7);
  *(undefined8 *)(iVar2 + 0xdd0) = *(undefined8 *)(iVar2 + 0xd48);
  *(undefined8 *)(iVar2 + 0xdd8) = *(undefined8 *)(iVar2 + 0xd48);
  *(undefined8 *)(iVar2 + 0xde0) = *(undefined8 *)(iVar2 + 0xd48);
  *(undefined8 *)(iVar2 + 0xde8) = *(undefined8 *)(iVar2 + 0xd48);
  *(undefined8 *)(iVar2 + 0xdf0) = *(undefined8 *)(iVar2 + 0xd48);
  *(undefined8 *)(iVar2 + 0xdf8) = *(undefined8 *)(iVar2 + 0xd48);
  *(undefined8 *)(iVar2 + 0xe00) = *(undefined8 *)(iVar2 + 0xd48);
  *(undefined8 *)(iVar2 + 0xe08) = *(undefined8 *)(iVar2 + 0xd48);
  *(undefined8 *)(iVar2 + 0xe10) = *(undefined8 *)(iVar2 + 0xd48);
  *(undefined8 *)(iVar2 + 0xe18) = *(undefined8 *)(iVar2 + 0xd48);
  *(undefined8 *)(iVar2 + 0xe20) = *(undefined8 *)(iVar2 + 0xd48);
  *(undefined8 *)(iVar2 + 0xe28) = *(undefined8 *)(iVar2 + 0xd48);
  *(undefined8 *)(iVar2 + 0xe30) = *(undefined8 *)(iVar2 + 0xd48);
  *(undefined8 *)(iVar2 + 0xe38) = *(undefined8 *)(iVar2 + 0xd48);
  *(undefined8 *)(iVar2 + 0xe40) = *(undefined8 *)(iVar2 + 0xd48);
  return;
}

