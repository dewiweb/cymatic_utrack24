// rea decompile_all
// name: FUN_00682290
// address: 0x682290
// body: available
// range: 0x682290-0x682392 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00682290(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7,int param_8)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  float fVar3;
  float fVar4;
  float fVar5;
  void *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007209c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((*(char *)*param_1 != '\0') && (0 < param_7)) && (0 < param_8)) {
    cVar1 = (**(code **)(*(int *)*in_ECX + 0x28))(&param_5,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (cVar1 != '\0') {
      FUN_00682b70();
      local_8 = 0;
      fVar3 = (float)param_8;
      fVar4 = (float)param_7;
      fVar5 = (float)param_6;
      uVar2 = (**(code **)(*(int *)*in_ECX + 0x6c))
                        (param_1,fVar5,fVar4,fVar3,param_2,param_3,param_4);
      FUN_00681150(uVar2,param_1,fVar5,fVar4,fVar3,param_2,param_3,param_4);
      FUN_00642000(in_ECX);
      FUN_00471b00();
      FID_conflict__free(local_1c);
    }
  }
  ExceptionList = local_10;
  return;
}

