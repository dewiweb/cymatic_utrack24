// rea decompile_all
// name: FUN_00446f20
// address: 0x446f20
// body: available
// range: 0x446f20-0x44700e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00446f20(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int in_ECX;
  float10 fVar4;
  float fVar5;
  int *local_34 [2];
  undefined1 local_2c [8];
  undefined **local_24 [2];
  double local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ff020;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = (double)*(float *)(in_ECX + 0xa8);
  local_24[0] = &PTR_vftable_00c7ed2c;
  local_8 = 0;
  local_14 = uVar2;
  puVar3 = (undefined4 *)FUN_0063b2d0(local_34,*(int *)(in_ECX + 0x1c) + 0x34,local_24);
  local_8 = CONCAT31(local_8._1_3_,1);
  fVar4 = (float10)(**(code **)(*(int *)*puVar3 + 0xc))(puVar3 + 2,uVar2);
  fVar5 = *(float *)(in_ECX + 0xa4);
  if (fVar5 != (float)fVar4) {
    FUN_00447580();
    uVar1 = *(undefined4 *)(in_ECX + 8);
    (**(code **)(**(int **)(in_ECX + 4) + 0x74))(uVar1,fVar5);
    FUN_0060a2f0(uVar1);
  }
  (**(code **)(*local_34[0] + 0x54))(local_2c);
  (**(code **)(*local_24[0] + 0x54))(&local_1c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

