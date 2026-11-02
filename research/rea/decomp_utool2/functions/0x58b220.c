// rea decompile_all
// name: FUN_0058b220
// address: 0x58b220
// body: available
// range: 0x58b220-0x58b32e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058b220(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00713c5b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0045c990("ReaderThreadPoolJob",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  *in_ECX = juce::ThreadPoolJob::vftable;
  in_ECX[1] = in_ECX;
  piVar1 = in_ECX + -2;
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined1 *)((int)in_ECX + 0xe) = 0;
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar1);
    }
  }
  in_ECX[4] = param_1;
  in_ECX[5] = param_2;
  in_ECX[6] = param_3;
  in_ECX[7] = param_4;
  in_ECX[8] = param_5;
  in_ECX[9] = param_6;
  *in_ECX = ReaderThreadPoolJob::vftable;
  in_ECX[10] = param_7;
  in_ECX[0xb] = param_8;
  if (param_8 != (undefined4 *)0x0) {
    LOCK();
    param_8[1] = param_8[1] + 1;
    UNLOCK();
  }
  in_ECX[0xc] = param_9;
  in_ECX[0xd] = param_10;
  in_ECX[0xe] = param_11;
  in_ECX[0xf] = param_12;
  if (param_8 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = param_8 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*param_8)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

