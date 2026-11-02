// rea decompile_all
// name: FUN_0049c020
// address: 0x49c020
// body: available
// range: 0x49c020-0x49c170 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049c020(void)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  int *_Memory;
  float10 fVar7;
  int local_38;
  undefined8 local_34;
  double local_2c;
  int *local_24 [4];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702c36;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar4;
  uVar5 = FUN_006e25d0(&local_38,0);
  local_8 = 0;
  fVar7 = (float10)(**(code **)(**(int **)(in_ECX + 8) + 0xbc))(uVar5,uVar4);
  local_2c = (double)fVar7;
  pcVar2 = *(code **)(**(int **)(in_ECX + 8) + 0xcc);
  local_34 = (double)CONCAT44(pcVar2,(undefined4)local_34);
  if (pcVar2 != FUN_006e12e0) {
    fVar7 = (float10)(*pcVar2)(local_2c,0);
    local_2c = (double)fVar7;
  }
  local_8 = 0xffffffff;
  _Memory = (int *)(local_38 + -8);
  local_34 = local_2c;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  puVar6 = (undefined4 *)FUN_0063bf80(local_24);
  fVar7 = (float10)(**(code **)(*(int *)*puVar6 + 0xc))(puVar6 + 2);
  local_2c = (double)fVar7;
  bVar3 = local_34 != local_2c;
  (**(code **)(*local_24[0] + 0x54))();
  if (bVar3) {
    local_38 = in_ECX + -0xc;
    FUN_0049bc60();
    local_8 = 1;
    FUN_0049b400(2);
    local_8 = 2;
    FUN_0049bd00();
    local_8 = 0xffffffff;
  }
  FUN_0049c180();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

