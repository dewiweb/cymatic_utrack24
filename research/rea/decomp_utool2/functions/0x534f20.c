// rea decompile_all
// name: FUN_00534f20
// address: 0x534f20
// body: available
// range: 0x534f20-0x535066 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00534f20(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *_Memory;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070d368;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = &DAT_00bfe12c;
  local_30 = 0;
  local_2c = 1;
  uStack_28 = 1;
  uStack_24 = 0;
  pvStack_20 = (void *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_8 = 0;
  local_14 = DAT_00c7ebbc;
  FUN_00636ec0(in_ECX + 0x7c);
  FUN_0044ec90(in_ECX + 0x80,&local_14,uVar2);
  FUN_00644f50();
  FUN_00684960(&local_34);
  FUN_006e9790((int)(*(float *)(in_ECX + 0x90) + 8.0),2,200,*(int *)(in_ECX + 0x1c) + -4);
  FUN_006e9790(*(int *)(in_ECX + 0xac) + *(int *)(in_ECX + 0xb4) + 8,2,100,
               *(int *)(in_ECX + 0x1c) + -4);
  FUN_00471bf0();
  FID_conflict__free(pvStack_20);
  _Memory = (int *)(local_34 + -8);
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

