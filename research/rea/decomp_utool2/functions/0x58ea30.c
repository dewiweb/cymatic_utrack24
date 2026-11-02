// rea decompile_all
// name: FUN_0058ea30
// address: 0x58ea30
// body: available
// range: 0x58ea30-0x58ec1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058ea30(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714217;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990("ExportJob",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  *in_ECX = juce::ThreadPoolJob::vftable;
  in_ECX[1] = local_14;
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined1 *)((int)in_ECX + 0xe) = 0;
  local_8 = 0;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  *in_ECX = ExportJob::vftable;
  in_ECX[4] = 0;
  iVar1 = *param_1;
  in_ECX[5] = iVar1;
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  local_8._0_1_ = 1;
  FUN_00636040(in_ECX + 6);
  in_ECX[7] = &DAT_00bfe12c;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)in_ECX + 0x41));
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1a));
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x23));
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = &DAT_00bfe12c;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  *(undefined1 *)(in_ECX + 0x31) = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  local_8._0_1_ = 0xd;
  operator_new(0x50);
  local_8 = CONCAT31(local_8._1_3_,0xe);
  puVar4 = (undefined4 *)FUN_005918f0();
  puVar2 = (undefined4 *)in_ECX[0x2c];
  if ((puVar2 != puVar4) && (in_ECX[0x2c] = puVar4, puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  ExceptionList = local_10;
  return;
}

