// rea decompile_all
// name: FUN_006830c0
// address: 0x6830c0
// body: available
// range: 0x6830c0-0x6831e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006830c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar6;
  undefined1 local_24 [4];
  void *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720a55;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0;
  if (*(char *)*param_1 != '\0') {
    iVar1 = *(int *)*in_ECX;
    uVar4 = FUN_0046f710(local_24);
    cVar2 = (**(code **)(iVar1 + 0x28))(uVar4,uVar3);
    if (cVar2 != '\0') {
      local_20 = (void *)0x0;
      local_1c = 0;
      local_18 = 0;
      FUN_00419e50(200,extraout_ECX);
      local_1c = 200;
      local_8 = 0;
      uVar6 = 0;
      uVar4 = param_4;
      uVar5 = (**(code **)(*(int *)*in_ECX + 0x6c))(param_1,0,param_4,param_7);
      FUN_00642ff0(uVar5,param_1,uVar6,uVar4,param_7);
      FUN_00642800(0,local_18,param_3,param_4,param_5,param_6);
      FUN_00642000(in_ECX);
      FUN_00471b00();
      FID_conflict__free(local_20);
    }
  }
  ExceptionList = local_10;
  return;
}

