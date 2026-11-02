// rea decompile_all
// name: FUN_0050a830
// address: 0x50a830
// body: available
// range: 0x50a830-0x50a914 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050a830(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  int *_Memory;
  int *extraout_ECX;
  undefined4 in_XMM0_Da;
  float fVar4;
  undefined4 in_XMM0_Db;
  float fVar5;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070846e;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  FUN_006e50e0(&local_14);
  local_8 = 0;
  FUN_0045c380(uVar3);
  fVar4 = (float)(double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
  if (fVar4 <= 0.0) {
    fVar5 = -64.0;
    if (-64.0 <= fVar4) {
      fVar5 = fVar4;
    }
    if (*(float *)(in_ECX + 0x240) == fVar5) goto LAB_0050a8c2;
    *(float *)(in_ECX + 0x240) = fVar5;
    cVar2 = FUN_006e2bd0();
    if (cVar2 != '\0') goto LAB_0050a8c2;
  }
  FUN_0050a760();
LAB_0050a8c2:
  local_8 = 0xffffffff;
  _Memory = (int *)(local_14 + -8);
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
  FUN_004122d0(_Memory,in_ECX + -0x70);
  ExceptionList = local_10;
  return;
}

