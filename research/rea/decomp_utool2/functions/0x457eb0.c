// rea decompile_all
// name: FUN_00457eb0
// address: 0x457eb0
// body: available
// range: 0x457eb0-0x458063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00457eb0(undefined4 param_1,undefined4 param_2)

{
  void *_Memory;
  void *_Memory_00;
  void *_Memory_01;
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 local_64;
  undefined1 local_60 [12];
  void *local_54;
  undefined4 local_50;
  void *local_48;
  undefined4 local_44;
  void *local_40;
  undefined4 local_3c;
  void *local_38;
  undefined4 local_34;
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007005a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_00cfff94) {
    FUN_004c0391(&DAT_00cfff94,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (DAT_00cfff94 == -1) {
      DAT_00cfff4c = InternetOpenW(L"juce",0,0,0,0);
      FUN_004c0352(&DAT_00cfff94);
    }
  }
  if (*(int *)(in_ECX + 0xc) != 0) {
    InternetCloseHandle(*(int *)(in_ECX + 0xc));
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  if (*(int *)(in_ECX + 8) != 0) {
    InternetCloseHandle(*(int *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  if (DAT_00cfff4c != 0) {
    _Memory = (void *)FUN_004c554b(0x20000);
    local_8 = 0;
    local_1c = _Memory;
    _Memory_00 = (void *)FUN_004c554b(0x1000);
    local_20 = _Memory_00;
    _Memory_01 = (void *)FUN_004c554b(0x800);
    local_24 = _Memory_01;
    local_18 = (void *)FUN_004c554b(0x800);
    local_8 = CONCAT31(local_8._1_3_,3);
    _memset(local_60,0,0x38);
    local_64 = 0x3c;
    local_34 = 0x10000;
    local_50 = 0x800;
    local_44 = 0x400;
    local_40 = local_18;
    local_3c = 0x400;
    local_54 = _Memory_00;
    local_48 = _Memory_01;
    local_38 = _Memory;
    puVar1 = (undefined4 *)FUN_00458890();
    iVar2 = InternetCrackUrlW(*puVar1,0,0,&local_64);
    if (iVar2 != 0) {
      FUN_00458070(&local_64,extraout_ECX,param_1,param_2);
    }
    FID_conflict__free(local_18);
    FID_conflict__free(_Memory_01);
    FID_conflict__free(_Memory_00);
    FID_conflict__free(_Memory);
  }
  ExceptionList = local_10;
  return;
}

