// rea decompile_all
// name: FUN_006bb630
// address: 0x6bb630
// body: available
// range: 0x6bb630-0x6bb741 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bb630(void)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  int iVar4;
  int in_ECX;
  int *extraout_ECX;
  int *_Memory;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007248b3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18[1] = 0;
  FUN_006bb750(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  puVar2 = (undefined4 *)FUN_00458890();
  DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
  if (((DVar3 & 0x10) != 0) && (DVar3 != 0xffffffff)) {
    operator_new(0x30);
    local_8 = 0;
    FUN_0045c990(&DAT_00c0546c);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18[1] = 1;
    iVar4 = FUN_006286b0(in_ECX + 0x30,0,local_18,*(undefined4 *)(in_ECX + 0x3c));
    iVar1 = *(int *)(in_ECX + 100);
    if ((iVar1 != iVar4) && (*(int *)(in_ECX + 100) = iVar4, iVar1 != 0)) {
      FUN_006285d0();
      FUN_004bfe14(iVar1,0x30);
    }
    local_18[1] = 0;
    _Memory = (int *)(local_18[0] + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar1 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(_Memory);
        _Memory = extraout_ECX;
      }
    }
    *(undefined1 *)(in_ECX + 0x68) = 0;
    FUN_00632170(in_ECX + 0x20,_Memory);
  }
  ExceptionList = local_10;
  return;
}

