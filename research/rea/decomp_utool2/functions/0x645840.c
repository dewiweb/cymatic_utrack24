// rea decompile_all
// name: FUN_00645840
// address: 0x645840
// body: available
// range: 0x645840-0x6459bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00645840(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  void *_Memory;
  void *_Memory_00;
  uint uVar2;
  undefined4 *in_ECX;
  void *pvVar3;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  undefined1 local_54 [64];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007200ab;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = param_2;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = FUN_00645e90;
    param_1[2] = local_54;
    param_1[1] = &DAT_00645e80;
  }
  local_5c = 0;
  local_58 = 0;
  local_74 = 0;
  local_60 = 0;
  local_70 = 0;
  local_6c = in_ECX;
  local_68 = in_ECX;
  cVar1 = FUN_00645cf0(param_2,local_54,&local_5c,&local_58,&local_74,&local_60,&local_70,local_14);
  if (cVar1 != '\0') {
    local_6c = (undefined4 *)(local_5c * 4);
    _Memory = (void *)FUN_004c554b((int)local_6c * local_58);
    local_8 = 0;
    _Memory_00 = (void *)FUN_004c554b(local_58 << 2);
    uVar2 = 0;
    local_8 = CONCAT31(local_8._1_3_,1);
    pvVar3 = _Memory;
    if (local_58 != 0) {
      do {
        *(void **)((int)_Memory_00 + uVar2 * 4) = pvVar3;
        uVar2 = uVar2 + 1;
        pvVar3 = (void *)((int)pvVar3 + (int)local_6c);
      } while (uVar2 < local_58);
    }
    cVar1 = FUN_00645c00(local_54,_Memory_00);
    if (cVar1 != '\0') {
      FUN_006459c0(local_5c,local_58,_Memory_00);
      FID_conflict__free(_Memory_00);
      FID_conflict__free(_Memory);
      goto LAB_006459a4;
    }
    FID_conflict__free(_Memory_00);
    FID_conflict__free(_Memory);
    in_ECX = local_68;
  }
  *in_ECX = 0;
LAB_006459a4:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

