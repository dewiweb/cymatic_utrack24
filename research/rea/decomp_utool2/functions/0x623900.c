// rea decompile_all
// name: FUN_00623900
// address: 0x623900
// body: available
// range: 0x623900-0x6239f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00623966) */

void FUN_00623900(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0071d48b;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::BufferedInputStream::vftable;
  in_ECX[1] = param_1;
  *(undefined1 *)(in_ECX + 2) = 1;
  local_8 = 2;
  uStack_7 = 0;
  iVar3 = 0x8000;
  lVar4 = (**(code **)(*param_1 + 4))(uVar1);
  if ((((-1 < lVar4) && (lVar4 < 0x100000000)) && (lVar4 < 0x8000)) &&
     (iVar3 = 0x20, 0x20 < (int)lVar4)) {
    iVar3 = (int)lVar4;
  }
  _local_8 = CONCAT31(uStack_7,1);
  in_ECX[3] = iVar3;
  if ((undefined **)*param_1 == juce::GZIPDecompressorInputStream::vftable) {
    uVar5 = *(undefined8 *)(param_1 + 0xc);
  }
  else {
    uVar5 = (*(code *)((undefined **)*param_1)[0x15])();
  }
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  in_ECX[4] = (int)uVar5;
  in_ECX[8] = (int)uVar5;
  in_ECX[5] = uVar2;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[9] = uVar2;
  in_ECX[10] = 0x80;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  uVar2 = in_ECX[3];
  FID_conflict__free((void *)in_ECX[0xc]);
  uVar2 = FUN_004c554b(uVar2);
  in_ECX[0xc] = uVar2;
  ExceptionList = local_10;
  return;
}

