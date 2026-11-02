// rea decompile_all
// name: FUN_004563a0
// address: 0x4563a0
// body: available
// range: 0x4563a0-0x456489 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004563a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int *_Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00700348;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = &DAT_00bfe12c;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  local_8 = 0;
  *(bool *)(in_ECX + 10) = *(short *)(param_1 + 10) != 0;
  puVar4 = (undefined4 *)FUN_00456490(*(undefined2 *)(param_1 + 0xe),uVar3);
  in_ECX[4] = *puVar4;
  in_ECX[5] = puVar4[1];
  in_ECX[8] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[9] = 0;
  in_ECX[2] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[3] = 0;
  in_ECX[6] = *(undefined4 *)(param_1 + 0x2a);
  in_ECX[7] = 0;
  puVar4 = (undefined4 *)FUN_0062bed0(param_2);
  uVar2 = *in_ECX;
  *in_ECX = *puVar4;
  *puVar4 = uVar2;
  _Memory = (int *)(param_1 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  return;
}

