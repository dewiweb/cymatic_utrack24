// rea decompile_all
// name: FUN_005cee10
// address: 0x5cee10
// body: available
// range: 0x5cee10-0x5cef7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cee10(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  float10 fVar5;
  double dVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b3f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  fVar5 = (float10)(**(code **)(**(int **)(in_ECX + 0x98) + 0x38))
                             (DAT_00c76070 ^ (uint)&stack0xfffffffc);
  iVar3 = (int)fVar5;
  puVar1 = operator_new(0x98);
  local_8 = 0;
  *puVar1 = 1;
  puVar1[1] = iVar3;
  puVar1[4] = 0;
  FUN_00416890();
  iVar4 = 0;
  local_8 = 0xffffffff;
  if (0 < iVar3) {
    do {
      dVar6 = (double)iVar4 * (6.283185307179586 / ((double)fVar5 / 440.0));
      FUN_006f9250();
      *(float *)(*(int *)puVar1[3] + iVar4 * 4) = (float)dVar6 * 0.5;
      iVar4 = iVar4 + 1;
      *(undefined1 *)(puVar1 + 0x25) = 0;
    } while (iVar4 < iVar3);
  }
  FUN_00409da0(0,0,iVar3 / 10,0,0x3f800000);
  iVar4 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
  FUN_00409da0(0,iVar3 - iVar4,iVar4,0x3f800000,0);
  uVar7 = 0x14;
  puVar2 = operator_new(0x14);
  *puVar2 = juce::AudioSampleBufferSource::vftable;
  puVar2[1] = puVar1;
  *(undefined1 *)(puVar2 + 2) = 1;
  puVar2[3] = 0;
  *(undefined2 *)(puVar2 + 4) = 0x100;
  FUN_005caff0(puVar2,uVar7);
  ExceptionList = local_10;
  return;
}

